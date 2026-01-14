
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
Someta3->setContent(QString("DiamondManLOA2.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim skeletal structure at level of articulation two, one diamond at the base node for the structure, blue spheres for HAnimSite feaature points"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Matthew T. Beitler"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Joel S. Pawloski"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translator"));
Someta7->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("created"));
Someta8->setContent(QString("12 November 2001"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("Mon, 15 Sep 2025 05:18:47 GMT"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("Image"));
Someta10->setContent(QString("DiamondManLOA2.png"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("Image"));
Someta11->setContent(QString("images/BonesAllSkeletonFrontViewLOA2.png"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("motto"));
Someta12->setContent(QString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("subject"));
Someta14->setContent(QString("human animation, x3d, vrml, animation"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoWorldInfo* SoWorldInfo17 = new SoWorldInfo();
SoWorldInfo17->setTitle(QString("HANIM 1.1 Default Joint Centers, LOA1"));
SoWorldInfo17->setInfo(new QString[]{QString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
SoNode16->addChild(*SoWorldInfo17);

SoNavigationInfo* SoNavigationInfo18 = new SoNavigationInfo();
SoNavigationInfo18->setSpeed(1.5);
SoNode16->addChild(*SoNavigationInfo18);

SoViewpoint* SoViewpoint19 = new SoViewpoint();
SoViewpoint19->setDescription(QString("Diamond Man, LOA 2"));
SoViewpoint19->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint19->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode16->addChild(*SoViewpoint19);

SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setTranslation(new float[]{1.0,1.5,0.0});
SoBillboard* SoBillboard21 = new SoBillboard();
SoShape* SoShape22 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoMaterial* SoMaterial24 = new SoMaterial();
SoMaterial24->setDEF(QString("TextMaterial"));
SoMaterial24->setDiffuseColor(new float[]{0.9,0.9,0.9});
SoVRMLAppearance23->addChild(*SoMaterial24);

SoShape22->addChild(*SoVRMLAppearance23);

SoText* SoText25 = new SoText();
SoText25->setString(new QString[]{QString("Diamond Man Key")}, 1);
SoFontStyle* SoFontStyle26 = new SoFontStyle();
SoFontStyle26->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle26->setSize(0.1);
SoText25->setFontStyle(*SoFontStyle26);

SoShape22->setGeometry(*SoText25);

SoBillboard21->addChild(*SoShape22);

SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setTranslation(new float[]{0.0,-0.3,0.0});
SoShape* SoShape28 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDEF(QString("MIN_COLOR"));
SoMaterial30->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance29->addChild(*SoMaterial30);

SoShape28->addChild(*SoVRMLAppearance29);

SoSphere* SoSphere31 = new SoSphere();
SoSphere31->setRadius(0.08);
SoShape28->setGeometry(*SoSphere31);

SoTransform27->addChild(*SoShape28);

SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape33 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance34 = new SoVRMLAppearance();
SoMaterial* SoMaterial35 = new SoMaterial();
SoMaterial35->setUSE(QString("TextMaterial"));
SoVRMLAppearance34->addChild(*SoMaterial35);

SoShape33->addChild(*SoVRMLAppearance34);

SoText* SoText36 = new SoText();
SoText36->setString(new QString[]{QString("Minimal Humanoid Joints")}, 1);
SoFontStyle* SoFontStyle37 = new SoFontStyle();
SoFontStyle37->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle37->setSize(0.1);
SoText36->setFontStyle(*SoFontStyle37);

SoShape33->setGeometry(*SoText36);

SoTransform32->addChild(*SoShape33);

SoTransform27->addChild(*SoTransform32);

SoBillboard21->addChild(*SoTransform27);

SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setTranslation(new float[]{0.0,-0.5,0.0});
SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setDEF(QString("JOINT_COLOR"));
SoMaterial41->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoSphere* SoSphere42 = new SoSphere();
SoSphere42->setRadius(0.08);
SoShape39->setGeometry(*SoSphere42);

SoTransform38->addChild(*SoShape39);

SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setUSE(QString("TextMaterial"));
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoText* SoText47 = new SoText();
SoText47->setString(new QString[]{QString("Humanoid Joints")}, 1);
SoFontStyle* SoFontStyle48 = new SoFontStyle();
SoFontStyle48->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle48->setSize(0.1);
SoText47->setFontStyle(*SoFontStyle48);

SoShape44->setGeometry(*SoText47);

SoTransform43->addChild(*SoShape44);

SoTransform38->addChild(*SoTransform43);

SoBillboard21->addChild(*SoTransform38);

SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setTranslation(new float[]{0.0,-0.7,0.0});
SoShape* SoShape50 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setDEF(QString("REC_SPINAL_COLOR"));
SoMaterial52->setDiffuseColor(new float[]{1.0,0.0,1.0});
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoSphere* SoSphere53 = new SoSphere();
SoSphere53->setRadius(0.08);
SoShape50->setGeometry(*SoSphere53);

SoTransform49->addChild(*SoShape50);

SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape55 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance56 = new SoVRMLAppearance();
SoMaterial* SoMaterial57 = new SoMaterial();
SoMaterial57->setUSE(QString("TextMaterial"));
SoVRMLAppearance56->addChild(*SoMaterial57);

SoShape55->addChild(*SoVRMLAppearance56);

SoText* SoText58 = new SoText();
SoText58->setString(new QString[]{QString("Recommended Spinal Joints")}, 1);
SoFontStyle* SoFontStyle59 = new SoFontStyle();
SoFontStyle59->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle59->setSize(0.1);
SoText58->setFontStyle(*SoFontStyle59);

SoShape55->setGeometry(*SoText58);

SoTransform54->addChild(*SoShape55);

SoTransform49->addChild(*SoTransform54);

SoBillboard21->addChild(*SoTransform49);

SoTransform* SoTransform60 = new SoTransform();
SoTransform60->setTranslation(new float[]{0.0,-0.9,0.0});
SoShape* SoShape61 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setDEF(QString("SPINAL_COLOR"));
SoMaterial63->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance62->addChild(*SoMaterial63);

SoShape61->addChild(*SoVRMLAppearance62);

SoSphere* SoSphere64 = new SoSphere();
SoSphere64->setRadius(0.08);
SoShape61->setGeometry(*SoSphere64);

SoTransform60->addChild(*SoShape61);

SoTransform* SoTransform65 = new SoTransform();
SoTransform65->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape66 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance67 = new SoVRMLAppearance();
SoMaterial* SoMaterial68 = new SoMaterial();
SoMaterial68->setUSE(QString("TextMaterial"));
SoVRMLAppearance67->addChild(*SoMaterial68);

SoShape66->addChild(*SoVRMLAppearance67);

SoText* SoText69 = new SoText();
SoText69->setString(new QString[]{QString("Spinal Joints")}, 1);
SoFontStyle* SoFontStyle70 = new SoFontStyle();
SoFontStyle70->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle70->setSize(0.1);
SoText69->setFontStyle(*SoFontStyle70);

SoShape66->setGeometry(*SoText69);

SoTransform65->addChild(*SoShape66);

SoTransform60->addChild(*SoTransform65);

SoBillboard21->addChild(*SoTransform60);

SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setTranslation(new float[]{0.0,-1.3,0.0});
SoShape* SoShape72 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance73 = new SoVRMLAppearance();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setDEF(QString("SITE_COLOR"));
SoMaterial74->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance73->addChild(*SoMaterial74);

SoShape72->addChild(*SoVRMLAppearance73);

SoSphere* SoSphere75 = new SoSphere();
SoSphere75->setRadius(0.08);
SoShape72->setGeometry(*SoSphere75);

SoTransform71->addChild(*SoShape72);

SoTransform* SoTransform76 = new SoTransform();
SoTransform76->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape77 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance78 = new SoVRMLAppearance();
SoMaterial* SoMaterial79 = new SoMaterial();
SoMaterial79->setUSE(QString("TextMaterial"));
SoVRMLAppearance78->addChild(*SoMaterial79);

SoShape77->addChild(*SoVRMLAppearance78);

SoText* SoText80 = new SoText();
SoText80->setString(new QString[]{QString("Humanoid Sites")}, 1);
SoFontStyle* SoFontStyle81 = new SoFontStyle();
SoFontStyle81->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle81->setSize(0.1);
SoText80->setFontStyle(*SoFontStyle81);

SoShape77->setGeometry(*SoText80);

SoTransform76->addChild(*SoShape77);

SoTransform71->addChild(*SoTransform76);

SoBillboard21->addChild(*SoTransform71);

SoTransform* SoTransform82 = new SoTransform();
SoTransform82->setTranslation(new float[]{0.0,-1.1,0.0});
SoShape* SoShape83 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance84 = new SoVRMLAppearance();
SoMaterial* SoMaterial85 = new SoMaterial();
SoMaterial85->setDEF(QString("HAND_FEET_COLOR"));
SoMaterial85->setDiffuseColor(new float[]{0.0,1.0,1.0});
SoVRMLAppearance84->addChild(*SoMaterial85);

SoShape83->addChild(*SoVRMLAppearance84);

SoSphere* SoSphere86 = new SoSphere();
SoSphere86->setRadius(0.08);
SoShape83->setGeometry(*SoSphere86);

SoTransform82->addChild(*SoShape83);

SoTransform* SoTransform87 = new SoTransform();
SoTransform87->setTranslation(new float[]{0.2,0.0,0.0});
SoShape* SoShape88 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance89 = new SoVRMLAppearance();
SoMaterial* SoMaterial90 = new SoMaterial();
SoMaterial90->setUSE(QString("TextMaterial"));
SoVRMLAppearance89->addChild(*SoMaterial90);

SoShape88->addChild(*SoVRMLAppearance89);

SoText* SoText91 = new SoText();
SoText91->setString(new QString[]{QString("Hand & Feet Joints")}, 1);
SoFontStyle* SoFontStyle92 = new SoFontStyle();
SoFontStyle92->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle92->setSize(0.1);
SoText91->setFontStyle(*SoFontStyle92);

SoShape88->setGeometry(*SoText91);

SoTransform87->addChild(*SoShape88);

SoTransform82->addChild(*SoTransform87);

SoBillboard21->addChild(*SoTransform82);

SoTransform20->addChild(*SoBillboard21);

SoNode16->addChild(*SoTransform20);

SoHAnimHumanoid* SoHAnimHumanoid93 = new SoHAnimHumanoid();
SoHAnimHumanoid93->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid93->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid93->setLoa(2);
SoMetadataSet* SoMetadataSet94 = new SoMetadataSet();
SoMetadataSet94->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet94->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString95 = new SoMetadataString();
SoMetadataString95->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet94->setValue((X3DNode *)&SoMetadataString95);

SoMetadataString* SoMetadataString96 = new SoMetadataString();
SoMetadataString96->X3DNode::setName(QString("authorEmail"));
SoMetadataSet94->setValue((X3DNode *)&SoMetadataString96);

SoMetadataString* SoMetadataString97 = new SoMetadataString();
SoMetadataString97->X3DNode::setName(QString("authorName"));
SoMetadataSet94->setValue((X3DNode *)&SoMetadataString97);

SoHAnimHumanoid93->setMetadata(*SoMetadataSet94);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint98->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint98->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimSegment* SoHAnimSegment99 = new SoHAnimSegment();
SoHAnimSegment99->setDEF(QString("hanim_sacrum"));
SoHAnimSegment99->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setTranslation(new float[]{0.0,0.824,0.0277});
SoShape* SoShape101 = new SoShape();
SoShape101->setDEF(QString("DiamondShape"));
SoVRMLAppearance* SoVRMLAppearance102 = new SoVRMLAppearance();
SoMaterial* SoMaterial103 = new SoMaterial();
SoMaterial103->setDEF(QString("ROOT_COLOR"));
SoMaterial103->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance102->addChild(*SoMaterial103);

SoShape101->addChild(*SoVRMLAppearance102);

SoIndexedFaceSet* SoIndexedFaceSet104 = new SoIndexedFaceSet();
SoIndexedFaceSet104->setCreaseAngle(0.5);
SoIndexedFaceSet104->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate105 = new SoCoordinate();
SoCoordinate105->setDEF(QString("points"));
SoCoordinate105->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet104->setCoord(*SoCoordinate105);

SoShape101->setGeometry(*SoIndexedFaceSet104);

SoTransform100->addChild(*SoShape101);

SoTransform* SoTransform106 = new SoTransform();
SoTransform106->setTranslation(new float[]{0.0,0.01,0.0});
SoBillboard* SoBillboard107 = new SoBillboard();
SoShape* SoShape108 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance109 = new SoVRMLAppearance();
SoMaterial* SoMaterial110 = new SoMaterial();
SoMaterial110->setDiffuseColor(new float[]{0.039216,1.0,0.568627});
SoVRMLAppearance109->addChild(*SoMaterial110);

SoShape108->addChild(*SoVRMLAppearance109);

SoText* SoText111 = new SoText();
SoText111->setString(new QString[]{QString("Humanoid Root")}, 1);
SoFontStyle* SoFontStyle112 = new SoFontStyle();
SoFontStyle112->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle112->setStyle(QString("ITALIC"));
SoFontStyle112->setSize(0.01);
SoText111->setFontStyle(*SoFontStyle112);

SoShape108->setGeometry(*SoText111);

SoBillboard107->addChild(*SoShape108);

SoTransform106->addChild(*SoBillboard107);

SoTransform100->addChild(*SoTransform106);

SoHAnimSegment99->addChild(*SoTransform100);

SoHAnimJoint98->addChildren(*SoHAnimSegment99);

SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint113->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint113->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment114 = new SoHAnimSegment();
SoHAnimSegment114->setDEF(QString("hanim_pelvis"));
SoHAnimSegment114->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform115 = new SoTransform();
SoTransform115->setDEF(QString("sacroiliacPos"));
SoTransform115->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape116 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance117 = new SoVRMLAppearance();
SoMaterial* SoMaterial118 = new SoMaterial();
SoMaterial118->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance117->addChild(*SoMaterial118);

SoShape116->addChild(*SoVRMLAppearance117);

SoIndexedFaceSet* SoIndexedFaceSet119 = new SoIndexedFaceSet();
SoIndexedFaceSet119->setCreaseAngle(0.5);
SoIndexedFaceSet119->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate120 = new SoCoordinate();
SoCoordinate120->setUSE(QString("points"));
SoIndexedFaceSet119->setCoord(*SoCoordinate120);

SoShape116->setGeometry(*SoIndexedFaceSet119);

SoTransform115->addChild(*SoShape116);

SoHAnimSegment114->addChild(*SoTransform115);

SoHAnimSite* SoHAnimSite121 = new SoHAnimSite();
SoHAnimSite121->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite121->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite121->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoShape* SoShape122 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance123 = new SoVRMLAppearance();
SoMaterial* SoMaterial124 = new SoMaterial();
SoMaterial124->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance123->addChild(*SoMaterial124);

SoShape122->addChild(*SoVRMLAppearance123);

SoIndexedFaceSet* SoIndexedFaceSet125 = new SoIndexedFaceSet();
SoIndexedFaceSet125->setCreaseAngle(0.5);
SoIndexedFaceSet125->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate126 = new SoCoordinate();
SoCoordinate126->setUSE(QString("points"));
SoIndexedFaceSet125->setCoord(*SoCoordinate126);

SoShape122->setGeometry(*SoIndexedFaceSet125);

SoHAnimSite121->addChild(*SoShape122);

SoHAnimSegment114->addChild(*SoHAnimSite121);

SoHAnimSite* SoHAnimSite127 = new SoHAnimSite();
SoHAnimSite127->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite127->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite127->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoShape* SoShape128 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance129 = new SoVRMLAppearance();
SoMaterial* SoMaterial130 = new SoMaterial();
SoMaterial130->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance129->addChild(*SoMaterial130);

SoShape128->addChild(*SoVRMLAppearance129);

SoIndexedFaceSet* SoIndexedFaceSet131 = new SoIndexedFaceSet();
SoIndexedFaceSet131->setCreaseAngle(0.5);
SoIndexedFaceSet131->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate132 = new SoCoordinate();
SoCoordinate132->setUSE(QString("points"));
SoIndexedFaceSet131->setCoord(*SoCoordinate132);

SoShape128->setGeometry(*SoIndexedFaceSet131);

SoHAnimSite127->addChild(*SoShape128);

SoHAnimSegment114->addChild(*SoHAnimSite127);

SoHAnimSite* SoHAnimSite133 = new SoHAnimSite();
SoHAnimSite133->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite133->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite133->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance135->addChild(*SoMaterial136);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedFaceSet* SoIndexedFaceSet137 = new SoIndexedFaceSet();
SoIndexedFaceSet137->setCreaseAngle(0.5);
SoIndexedFaceSet137->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate138 = new SoCoordinate();
SoCoordinate138->setUSE(QString("points"));
SoIndexedFaceSet137->setCoord(*SoCoordinate138);

SoShape134->setGeometry(*SoIndexedFaceSet137);

SoHAnimSite133->addChild(*SoShape134);

SoHAnimSegment114->addChild(*SoHAnimSite133);

SoHAnimSite* SoHAnimSite139 = new SoHAnimSite();
SoHAnimSite139->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite139->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite139->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoShape* SoShape140 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance141 = new SoVRMLAppearance();
SoMaterial* SoMaterial142 = new SoMaterial();
SoMaterial142->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance141->addChild(*SoMaterial142);

SoShape140->addChild(*SoVRMLAppearance141);

SoIndexedFaceSet* SoIndexedFaceSet143 = new SoIndexedFaceSet();
SoIndexedFaceSet143->setCreaseAngle(0.5);
SoIndexedFaceSet143->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate144 = new SoCoordinate();
SoCoordinate144->setUSE(QString("points"));
SoIndexedFaceSet143->setCoord(*SoCoordinate144);

SoShape140->setGeometry(*SoIndexedFaceSet143);

SoHAnimSite139->addChild(*SoShape140);

SoHAnimSegment114->addChild(*SoHAnimSite139);

SoHAnimSite* SoHAnimSite145 = new SoHAnimSite();
SoHAnimSite145->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite145->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite145->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoShape* SoShape146 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance147 = new SoVRMLAppearance();
SoMaterial* SoMaterial148 = new SoMaterial();
SoMaterial148->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance147->addChild(*SoMaterial148);

SoShape146->addChild(*SoVRMLAppearance147);

SoIndexedFaceSet* SoIndexedFaceSet149 = new SoIndexedFaceSet();
SoIndexedFaceSet149->setCreaseAngle(0.5);
SoIndexedFaceSet149->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate150 = new SoCoordinate();
SoCoordinate150->setUSE(QString("points"));
SoIndexedFaceSet149->setCoord(*SoCoordinate150);

SoShape146->setGeometry(*SoIndexedFaceSet149);

SoHAnimSite145->addChild(*SoShape146);

SoHAnimSegment114->addChild(*SoHAnimSite145);

SoHAnimSite* SoHAnimSite151 = new SoHAnimSite();
SoHAnimSite151->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite151->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite151->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoShape* SoShape152 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance153 = new SoVRMLAppearance();
SoMaterial* SoMaterial154 = new SoMaterial();
SoMaterial154->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance153->addChild(*SoMaterial154);

SoShape152->addChild(*SoVRMLAppearance153);

SoIndexedFaceSet* SoIndexedFaceSet155 = new SoIndexedFaceSet();
SoIndexedFaceSet155->setCreaseAngle(0.5);
SoIndexedFaceSet155->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate156 = new SoCoordinate();
SoCoordinate156->setUSE(QString("points"));
SoIndexedFaceSet155->setCoord(*SoCoordinate156);

SoShape152->setGeometry(*SoIndexedFaceSet155);

SoHAnimSite151->addChild(*SoShape152);

SoHAnimSegment114->addChild(*SoHAnimSite151);

SoHAnimSite* SoHAnimSite157 = new SoHAnimSite();
SoHAnimSite157->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite157->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite157->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoMaterial* SoMaterial160 = new SoMaterial();
SoMaterial160->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance159->addChild(*SoMaterial160);

SoShape158->addChild(*SoVRMLAppearance159);

SoIndexedFaceSet* SoIndexedFaceSet161 = new SoIndexedFaceSet();
SoIndexedFaceSet161->setCreaseAngle(0.5);
SoIndexedFaceSet161->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setUSE(QString("points"));
SoIndexedFaceSet161->setCoord(*SoCoordinate162);

SoShape158->setGeometry(*SoIndexedFaceSet161);

SoHAnimSite157->addChild(*SoShape158);

SoHAnimSegment114->addChild(*SoHAnimSite157);

SoHAnimSite* SoHAnimSite163 = new SoHAnimSite();
SoHAnimSite163->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite163->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite163->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoShape* SoShape164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance165 = new SoVRMLAppearance();
SoMaterial* SoMaterial166 = new SoMaterial();
SoMaterial166->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance165->addChild(*SoMaterial166);

SoShape164->addChild(*SoVRMLAppearance165);

SoIndexedFaceSet* SoIndexedFaceSet167 = new SoIndexedFaceSet();
SoIndexedFaceSet167->setCreaseAngle(0.5);
SoIndexedFaceSet167->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate168 = new SoCoordinate();
SoCoordinate168->setUSE(QString("points"));
SoIndexedFaceSet167->setCoord(*SoCoordinate168);

SoShape164->setGeometry(*SoIndexedFaceSet167);

SoHAnimSite163->addChild(*SoShape164);

SoHAnimSegment114->addChild(*SoHAnimSite163);

SoHAnimSite* SoHAnimSite169 = new SoHAnimSite();
SoHAnimSite169->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite169->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite169->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoShape* SoShape170 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance171 = new SoVRMLAppearance();
SoMaterial* SoMaterial172 = new SoMaterial();
SoMaterial172->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance171->addChild(*SoMaterial172);

SoShape170->addChild(*SoVRMLAppearance171);

SoIndexedFaceSet* SoIndexedFaceSet173 = new SoIndexedFaceSet();
SoIndexedFaceSet173->setCreaseAngle(0.5);
SoIndexedFaceSet173->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate174 = new SoCoordinate();
SoCoordinate174->setUSE(QString("points"));
SoIndexedFaceSet173->setCoord(*SoCoordinate174);

SoShape170->setGeometry(*SoIndexedFaceSet173);

SoHAnimSite169->addChild(*SoShape170);

SoHAnimSegment114->addChild(*SoHAnimSite169);

SoHAnimJoint113->addChildren(*SoHAnimSegment114);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setDEF(QString("hanim_l_hip"));
SoHAnimJoint175->X3DNode::setName(QString("l_hip"));
SoHAnimJoint175->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment176 = new SoHAnimSegment();
SoHAnimSegment176->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment176->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform177 = new SoTransform();
SoTransform177->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape178 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance179 = new SoVRMLAppearance();
SoMaterial* SoMaterial180 = new SoMaterial();
SoMaterial180->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance179->addChild(*SoMaterial180);

SoShape178->addChild(*SoVRMLAppearance179);

SoIndexedFaceSet* SoIndexedFaceSet181 = new SoIndexedFaceSet();
SoIndexedFaceSet181->setCreaseAngle(0.5);
SoIndexedFaceSet181->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate182 = new SoCoordinate();
SoCoordinate182->setUSE(QString("points"));
SoIndexedFaceSet181->setCoord(*SoCoordinate182);

SoShape178->setGeometry(*SoIndexedFaceSet181);

SoTransform177->addChild(*SoShape178);

SoHAnimSegment176->addChild(*SoTransform177);

SoHAnimSite* SoHAnimSite183 = new SoHAnimSite();
SoHAnimSite183->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite183->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite183->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoShape* SoShape184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance185 = new SoVRMLAppearance();
SoMaterial* SoMaterial186 = new SoMaterial();
SoMaterial186->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance185->addChild(*SoMaterial186);

SoShape184->addChild(*SoVRMLAppearance185);

SoIndexedFaceSet* SoIndexedFaceSet187 = new SoIndexedFaceSet();
SoIndexedFaceSet187->setCreaseAngle(0.5);
SoIndexedFaceSet187->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate188 = new SoCoordinate();
SoCoordinate188->setUSE(QString("points"));
SoIndexedFaceSet187->setCoord(*SoCoordinate188);

SoShape184->setGeometry(*SoIndexedFaceSet187);

SoHAnimSite183->addChild(*SoShape184);

SoHAnimSegment176->addChild(*SoHAnimSite183);

SoHAnimSite* SoHAnimSite189 = new SoHAnimSite();
SoHAnimSite189->setDEF(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite189->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite189->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoShape* SoShape190 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance191 = new SoVRMLAppearance();
SoMaterial* SoMaterial192 = new SoMaterial();
SoMaterial192->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance191->addChild(*SoMaterial192);

SoShape190->addChild(*SoVRMLAppearance191);

SoIndexedFaceSet* SoIndexedFaceSet193 = new SoIndexedFaceSet();
SoIndexedFaceSet193->setCreaseAngle(0.5);
SoIndexedFaceSet193->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate194 = new SoCoordinate();
SoCoordinate194->setUSE(QString("points"));
SoIndexedFaceSet193->setCoord(*SoCoordinate194);

SoShape190->setGeometry(*SoIndexedFaceSet193);

SoHAnimSite189->addChild(*SoShape190);

SoHAnimSegment176->addChild(*SoHAnimSite189);

SoHAnimSite* SoHAnimSite195 = new SoHAnimSite();
SoHAnimSite195->setDEF(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite195->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite195->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoShape* SoShape196 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance197 = new SoVRMLAppearance();
SoMaterial* SoMaterial198 = new SoMaterial();
SoMaterial198->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance197->addChild(*SoMaterial198);

SoShape196->addChild(*SoVRMLAppearance197);

SoIndexedFaceSet* SoIndexedFaceSet199 = new SoIndexedFaceSet();
SoIndexedFaceSet199->setCreaseAngle(0.5);
SoIndexedFaceSet199->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate200 = new SoCoordinate();
SoCoordinate200->setUSE(QString("points"));
SoIndexedFaceSet199->setCoord(*SoCoordinate200);

SoShape196->setGeometry(*SoIndexedFaceSet199);

SoHAnimSite195->addChild(*SoShape196);

SoHAnimSegment176->addChild(*SoHAnimSite195);

SoHAnimJoint175->addChildren(*SoHAnimSegment176);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setDEF(QString("hanim_l_knee"));
SoHAnimJoint201->X3DNode::setName(QString("l_knee"));
SoHAnimJoint201->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment202 = new SoHAnimSegment();
SoHAnimSegment202->setDEF(QString("hanim_l_calf"));
SoHAnimSegment202->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform203 = new SoTransform();
SoTransform203->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance205 = new SoVRMLAppearance();
SoMaterial* SoMaterial206 = new SoMaterial();
SoMaterial206->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance205->addChild(*SoMaterial206);

SoShape204->addChild(*SoVRMLAppearance205);

SoIndexedFaceSet* SoIndexedFaceSet207 = new SoIndexedFaceSet();
SoIndexedFaceSet207->setCreaseAngle(0.5);
SoIndexedFaceSet207->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate208 = new SoCoordinate();
SoCoordinate208->setUSE(QString("points"));
SoIndexedFaceSet207->setCoord(*SoCoordinate208);

SoShape204->setGeometry(*SoIndexedFaceSet207);

SoTransform203->addChild(*SoShape204);

SoHAnimSegment202->addChild(*SoTransform203);

SoHAnimJoint201->addChildren(*SoHAnimSegment202);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint209->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint209->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment210 = new SoHAnimSegment();
SoHAnimSegment210->setDEF(QString("hanim_l_talus"));
SoHAnimSegment210->X3DNode::setName(QString("l_talus"));
SoTransform* SoTransform211 = new SoTransform();
SoTransform211->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape212 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance213 = new SoVRMLAppearance();
SoMaterial* SoMaterial214 = new SoMaterial();
SoMaterial214->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance213->addChild(*SoMaterial214);

SoShape212->addChild(*SoVRMLAppearance213);

SoIndexedFaceSet* SoIndexedFaceSet215 = new SoIndexedFaceSet();
SoIndexedFaceSet215->setCreaseAngle(0.5);
SoIndexedFaceSet215->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate216 = new SoCoordinate();
SoCoordinate216->setUSE(QString("points"));
SoIndexedFaceSet215->setCoord(*SoCoordinate216);

SoShape212->setGeometry(*SoIndexedFaceSet215);

SoTransform211->addChild(*SoShape212);

SoHAnimSegment210->addChild(*SoTransform211);

SoHAnimSite* SoHAnimSite217 = new SoHAnimSite();
SoHAnimSite217->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite217->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite217->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoShape* SoShape218 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance219 = new SoVRMLAppearance();
SoMaterial* SoMaterial220 = new SoMaterial();
SoMaterial220->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance219->addChild(*SoMaterial220);

SoShape218->addChild(*SoVRMLAppearance219);

SoIndexedFaceSet* SoIndexedFaceSet221 = new SoIndexedFaceSet();
SoIndexedFaceSet221->setCreaseAngle(0.5);
SoIndexedFaceSet221->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate222 = new SoCoordinate();
SoCoordinate222->setUSE(QString("points"));
SoIndexedFaceSet221->setCoord(*SoCoordinate222);

SoShape218->setGeometry(*SoIndexedFaceSet221);

SoHAnimSite217->addChild(*SoShape218);

SoHAnimSegment210->addChild(*SoHAnimSite217);

SoHAnimSite* SoHAnimSite223 = new SoHAnimSite();
SoHAnimSite223->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite223->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite223->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoShape* SoShape224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance225->addChild(*SoMaterial226);

SoShape224->addChild(*SoVRMLAppearance225);

SoIndexedFaceSet* SoIndexedFaceSet227 = new SoIndexedFaceSet();
SoIndexedFaceSet227->setCreaseAngle(0.5);
SoIndexedFaceSet227->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate228 = new SoCoordinate();
SoCoordinate228->setUSE(QString("points"));
SoIndexedFaceSet227->setCoord(*SoCoordinate228);

SoShape224->setGeometry(*SoIndexedFaceSet227);

SoHAnimSite223->addChild(*SoShape224);

SoHAnimSegment210->addChild(*SoHAnimSite223);

SoHAnimSite* SoHAnimSite229 = new SoHAnimSite();
SoHAnimSite229->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite229->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite229->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoShape* SoShape230 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance231 = new SoVRMLAppearance();
SoMaterial* SoMaterial232 = new SoMaterial();
SoMaterial232->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance231->addChild(*SoMaterial232);

SoShape230->addChild(*SoVRMLAppearance231);

SoIndexedFaceSet* SoIndexedFaceSet233 = new SoIndexedFaceSet();
SoIndexedFaceSet233->setCreaseAngle(0.5);
SoIndexedFaceSet233->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate234 = new SoCoordinate();
SoCoordinate234->setUSE(QString("points"));
SoIndexedFaceSet233->setCoord(*SoCoordinate234);

SoShape230->setGeometry(*SoIndexedFaceSet233);

SoHAnimSite229->addChild(*SoShape230);

SoHAnimSegment210->addChild(*SoHAnimSite229);

SoHAnimSite* SoHAnimSite235 = new SoHAnimSite();
SoHAnimSite235->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite235->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite235->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoShape* SoShape236 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance237 = new SoVRMLAppearance();
SoMaterial* SoMaterial238 = new SoMaterial();
SoMaterial238->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance237->addChild(*SoMaterial238);

SoShape236->addChild(*SoVRMLAppearance237);

SoIndexedFaceSet* SoIndexedFaceSet239 = new SoIndexedFaceSet();
SoIndexedFaceSet239->setCreaseAngle(0.5);
SoIndexedFaceSet239->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate240 = new SoCoordinate();
SoCoordinate240->setUSE(QString("points"));
SoIndexedFaceSet239->setCoord(*SoCoordinate240);

SoShape236->setGeometry(*SoIndexedFaceSet239);

SoHAnimSite235->addChild(*SoShape236);

SoHAnimSegment210->addChild(*SoHAnimSite235);

SoHAnimJoint209->addChildren(*SoHAnimSegment210);

SoHAnimJoint* SoHAnimJoint241 = new SoHAnimJoint();
SoHAnimJoint241->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint241->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint241->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->setDEF(QString("hanim_l_metatarsal_2"));
SoHAnimSegment242->X3DNode::setName(QString("l_metatarsal_2"));
SoTransform* SoTransform243 = new SoTransform();
SoTransform243->setTranslation(new float[]{0.1086,0.0001,-0.0368});
SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance245->addChild(*SoMaterial246);

SoShape244->addChild(*SoVRMLAppearance245);

SoIndexedFaceSet* SoIndexedFaceSet247 = new SoIndexedFaceSet();
SoIndexedFaceSet247->setCreaseAngle(0.5);
SoIndexedFaceSet247->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate248 = new SoCoordinate();
SoCoordinate248->setUSE(QString("points"));
SoIndexedFaceSet247->setCoord(*SoCoordinate248);

SoShape244->setGeometry(*SoIndexedFaceSet247);

SoTransform243->addChild(*SoShape244);

SoHAnimSegment242->addChild(*SoTransform243);

SoHAnimJoint241->addChildren(*SoHAnimSegment242);

SoHAnimJoint* SoHAnimJoint249 = new SoHAnimJoint();
SoHAnimJoint249->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint249->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint249->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment250 = new SoHAnimSegment();
SoHAnimSegment250->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment250->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{0.1086,0.0001,0.0368});
SoShape* SoShape252 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance253 = new SoVRMLAppearance();
SoMaterial* SoMaterial254 = new SoMaterial();
SoMaterial254->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance253->addChild(*SoMaterial254);

SoShape252->addChild(*SoVRMLAppearance253);

SoIndexedFaceSet* SoIndexedFaceSet255 = new SoIndexedFaceSet();
SoIndexedFaceSet255->setCreaseAngle(0.5);
SoIndexedFaceSet255->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate256 = new SoCoordinate();
SoCoordinate256->setUSE(QString("points"));
SoIndexedFaceSet255->setCoord(*SoCoordinate256);

SoShape252->setGeometry(*SoIndexedFaceSet255);

SoTransform251->addChild(*SoShape252);

SoHAnimSegment250->addChild(*SoTransform251);

SoHAnimSite* SoHAnimSite257 = new SoHAnimSite();
SoHAnimSite257->setDEF(QString("hanim_l_middistal_tip"));
SoHAnimSite257->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite257->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoShape* SoShape258 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance259 = new SoVRMLAppearance();
SoMaterial* SoMaterial260 = new SoMaterial();
SoMaterial260->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance259->addChild(*SoMaterial260);

SoShape258->addChild(*SoVRMLAppearance259);

SoIndexedFaceSet* SoIndexedFaceSet261 = new SoIndexedFaceSet();
SoIndexedFaceSet261->setCreaseAngle(0.5);
SoIndexedFaceSet261->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate262 = new SoCoordinate();
SoCoordinate262->setUSE(QString("points"));
SoIndexedFaceSet261->setCoord(*SoCoordinate262);

SoShape258->setGeometry(*SoIndexedFaceSet261);

SoHAnimSite257->addChild(*SoShape258);

SoHAnimSegment250->addChild(*SoHAnimSite257);

SoHAnimSite* SoHAnimSite263 = new SoHAnimSite();
SoHAnimSite263->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite263->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite263->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoShape* SoShape264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance265 = new SoVRMLAppearance();
SoMaterial* SoMaterial266 = new SoMaterial();
SoMaterial266->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance265->addChild(*SoMaterial266);

SoShape264->addChild(*SoVRMLAppearance265);

SoIndexedFaceSet* SoIndexedFaceSet267 = new SoIndexedFaceSet();
SoIndexedFaceSet267->setCreaseAngle(0.5);
SoIndexedFaceSet267->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate268 = new SoCoordinate();
SoCoordinate268->setUSE(QString("points"));
SoIndexedFaceSet267->setCoord(*SoCoordinate268);

SoShape264->setGeometry(*SoIndexedFaceSet267);

SoHAnimSite263->addChild(*SoShape264);

SoHAnimSegment250->addChild(*SoHAnimSite263);

SoHAnimJoint249->addChildren(*SoHAnimSegment250);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint269->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint269->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment270 = new SoHAnimSegment();
SoHAnimSegment270->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimSegment270->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform271 = new SoTransform();
SoTransform271->setTranslation(new float[]{0.1086,0.0,0.0762});
SoShape* SoShape272 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance273 = new SoVRMLAppearance();
SoMaterial* SoMaterial274 = new SoMaterial();
SoMaterial274->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance273->addChild(*SoMaterial274);

SoShape272->addChild(*SoVRMLAppearance273);

SoIndexedFaceSet* SoIndexedFaceSet275 = new SoIndexedFaceSet();
SoIndexedFaceSet275->setCreaseAngle(0.5);
SoIndexedFaceSet275->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate276 = new SoCoordinate();
SoCoordinate276->setUSE(QString("points"));
SoIndexedFaceSet275->setCoord(*SoCoordinate276);

SoShape272->setGeometry(*SoIndexedFaceSet275);

SoTransform271->addChild(*SoShape272);

SoHAnimSegment270->addChild(*SoTransform271);

SoHAnimSite* SoHAnimSite277 = new SoHAnimSite();
SoHAnimSite277->setDEF(QString("hanim_l_forefoot_tip"));
SoHAnimSite277->X3DNode::setName(QString("l_forefoot_tip"));
SoHAnimSite277->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoShape* SoShape278 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance279 = new SoVRMLAppearance();
SoMaterial* SoMaterial280 = new SoMaterial();
SoMaterial280->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance279->addChild(*SoMaterial280);

SoShape278->addChild(*SoVRMLAppearance279);

SoIndexedFaceSet* SoIndexedFaceSet281 = new SoIndexedFaceSet();
SoIndexedFaceSet281->setCreaseAngle(0.5);
SoIndexedFaceSet281->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate282 = new SoCoordinate();
SoCoordinate282->setUSE(QString("points"));
SoIndexedFaceSet281->setCoord(*SoCoordinate282);

SoShape278->setGeometry(*SoIndexedFaceSet281);

SoHAnimSite277->addChild(*SoShape278);

SoHAnimSegment270->addChild(*SoHAnimSite277);

SoHAnimSite* SoHAnimSite283 = new SoHAnimSite();
SoHAnimSite283->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite283->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite283->setTranslation(new float[]{0.1825,0.007,0.0928});
SoShape* SoShape284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance285 = new SoVRMLAppearance();
SoMaterial* SoMaterial286 = new SoMaterial();
SoMaterial286->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance285->addChild(*SoMaterial286);

SoShape284->addChild(*SoVRMLAppearance285);

SoIndexedFaceSet* SoIndexedFaceSet287 = new SoIndexedFaceSet();
SoIndexedFaceSet287->setCreaseAngle(0.5);
SoIndexedFaceSet287->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate288 = new SoCoordinate();
SoCoordinate288->setUSE(QString("points"));
SoIndexedFaceSet287->setCoord(*SoCoordinate288);

SoShape284->setGeometry(*SoIndexedFaceSet287);

SoHAnimSite283->addChild(*SoShape284);

SoHAnimSegment270->addChild(*SoHAnimSite283);

SoHAnimSite* SoHAnimSite289 = new SoHAnimSite();
SoHAnimSite289->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite289->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite289->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoShape* SoShape290 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance291 = new SoVRMLAppearance();
SoMaterial* SoMaterial292 = new SoMaterial();
SoMaterial292->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance291->addChild(*SoMaterial292);

SoShape290->addChild(*SoVRMLAppearance291);

SoIndexedFaceSet* SoIndexedFaceSet293 = new SoIndexedFaceSet();
SoIndexedFaceSet293->setCreaseAngle(0.5);
SoIndexedFaceSet293->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate294 = new SoCoordinate();
SoCoordinate294->setUSE(QString("points"));
SoIndexedFaceSet293->setCoord(*SoCoordinate294);

SoShape290->setGeometry(*SoIndexedFaceSet293);

SoHAnimSite289->addChild(*SoShape290);

SoHAnimSegment270->addChild(*SoHAnimSite289);

SoHAnimJoint269->addChildren(*SoHAnimSegment270);

SoHAnimJoint249->addChildren(*SoHAnimJoint269);

SoHAnimJoint241->addChildren(*SoHAnimJoint249);

SoHAnimJoint209->addChildren(*SoHAnimJoint241);

SoHAnimJoint201->addChildren(*SoHAnimJoint209);

SoHAnimJoint175->addChildren(*SoHAnimJoint201);

SoHAnimJoint113->addChildren(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setDEF(QString("hanim_r_hip"));
SoHAnimJoint295->X3DNode::setName(QString("r_hip"));
SoHAnimJoint295->setCenter(new float[]{-0.095,0.9171,0.0029});
SoHAnimSegment* SoHAnimSegment296 = new SoHAnimSegment();
SoHAnimSegment296->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment296->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform297 = new SoTransform();
SoTransform297->setTranslation(new float[]{-0.095,0.9171,0.0029});
SoShape* SoShape298 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance299 = new SoVRMLAppearance();
SoMaterial* SoMaterial300 = new SoMaterial();
SoMaterial300->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance299->addChild(*SoMaterial300);

SoShape298->addChild(*SoVRMLAppearance299);

SoIndexedFaceSet* SoIndexedFaceSet301 = new SoIndexedFaceSet();
SoIndexedFaceSet301->setCreaseAngle(0.5);
SoIndexedFaceSet301->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate302 = new SoCoordinate();
SoCoordinate302->setUSE(QString("points"));
SoIndexedFaceSet301->setCoord(*SoCoordinate302);

SoShape298->setGeometry(*SoIndexedFaceSet301);

SoTransform297->addChild(*SoShape298);

SoHAnimSegment296->addChild(*SoTransform297);

SoHAnimSite* SoHAnimSite303 = new SoHAnimSite();
SoHAnimSite303->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite303->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite303->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoShape* SoShape304 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance305 = new SoVRMLAppearance();
SoMaterial* SoMaterial306 = new SoMaterial();
SoMaterial306->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance305->addChild(*SoMaterial306);

SoShape304->addChild(*SoVRMLAppearance305);

SoIndexedFaceSet* SoIndexedFaceSet307 = new SoIndexedFaceSet();
SoIndexedFaceSet307->setCreaseAngle(0.5);
SoIndexedFaceSet307->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate308 = new SoCoordinate();
SoCoordinate308->setUSE(QString("points"));
SoIndexedFaceSet307->setCoord(*SoCoordinate308);

SoShape304->setGeometry(*SoIndexedFaceSet307);

SoHAnimSite303->addChild(*SoShape304);

SoHAnimSegment296->addChild(*SoHAnimSite303);

SoHAnimSite* SoHAnimSite309 = new SoHAnimSite();
SoHAnimSite309->setDEF(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite309->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite309->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoShape* SoShape310 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance311 = new SoVRMLAppearance();
SoMaterial* SoMaterial312 = new SoMaterial();
SoMaterial312->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance311->addChild(*SoMaterial312);

SoShape310->addChild(*SoVRMLAppearance311);

SoIndexedFaceSet* SoIndexedFaceSet313 = new SoIndexedFaceSet();
SoIndexedFaceSet313->setCreaseAngle(0.5);
SoIndexedFaceSet313->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate314 = new SoCoordinate();
SoCoordinate314->setUSE(QString("points"));
SoIndexedFaceSet313->setCoord(*SoCoordinate314);

SoShape310->setGeometry(*SoIndexedFaceSet313);

SoHAnimSite309->addChild(*SoShape310);

SoHAnimSegment296->addChild(*SoHAnimSite309);

SoHAnimSite* SoHAnimSite315 = new SoHAnimSite();
SoHAnimSite315->setDEF(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite315->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite315->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoShape* SoShape316 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance317 = new SoVRMLAppearance();
SoMaterial* SoMaterial318 = new SoMaterial();
SoMaterial318->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance317->addChild(*SoMaterial318);

SoShape316->addChild(*SoVRMLAppearance317);

SoIndexedFaceSet* SoIndexedFaceSet319 = new SoIndexedFaceSet();
SoIndexedFaceSet319->setCreaseAngle(0.5);
SoIndexedFaceSet319->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate320 = new SoCoordinate();
SoCoordinate320->setUSE(QString("points"));
SoIndexedFaceSet319->setCoord(*SoCoordinate320);

SoShape316->setGeometry(*SoIndexedFaceSet319);

SoHAnimSite315->addChild(*SoShape316);

SoHAnimSegment296->addChild(*SoHAnimSite315);

SoHAnimJoint295->addChildren(*SoHAnimSegment296);

SoHAnimJoint* SoHAnimJoint321 = new SoHAnimJoint();
SoHAnimJoint321->setDEF(QString("hanim_r_knee"));
SoHAnimJoint321->X3DNode::setName(QString("r_knee"));
SoHAnimJoint321->setCenter(new float[]{-0.0867,0.4913,0.0318});
SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->setDEF(QString("hanim_r_calf"));
SoHAnimSegment322->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform323 = new SoTransform();
SoTransform323->setTranslation(new float[]{-0.0867,0.4913,0.0318});
SoShape* SoShape324 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance325 = new SoVRMLAppearance();
SoMaterial* SoMaterial326 = new SoMaterial();
SoMaterial326->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance325->addChild(*SoMaterial326);

SoShape324->addChild(*SoVRMLAppearance325);

SoIndexedFaceSet* SoIndexedFaceSet327 = new SoIndexedFaceSet();
SoIndexedFaceSet327->setCreaseAngle(0.5);
SoIndexedFaceSet327->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate328 = new SoCoordinate();
SoCoordinate328->setUSE(QString("points"));
SoIndexedFaceSet327->setCoord(*SoCoordinate328);

SoShape324->setGeometry(*SoIndexedFaceSet327);

SoTransform323->addChild(*SoShape324);

SoHAnimSegment322->addChild(*SoTransform323);

SoHAnimJoint321->addChildren(*SoHAnimSegment322);

SoHAnimJoint* SoHAnimJoint329 = new SoHAnimJoint();
SoHAnimJoint329->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint329->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint329->setCenter(new float[]{-0.0801,0.0712,-0.0766});
SoHAnimSegment* SoHAnimSegment330 = new SoHAnimSegment();
SoHAnimSegment330->setDEF(QString("hanim_r_talus"));
SoHAnimSegment330->X3DNode::setName(QString("r_talus"));
SoTransform* SoTransform331 = new SoTransform();
SoTransform331->setTranslation(new float[]{-0.0801,0.0712,-0.0766});
SoShape* SoShape332 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance333 = new SoVRMLAppearance();
SoMaterial* SoMaterial334 = new SoMaterial();
SoMaterial334->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance333->addChild(*SoMaterial334);

SoShape332->addChild(*SoVRMLAppearance333);

SoIndexedFaceSet* SoIndexedFaceSet335 = new SoIndexedFaceSet();
SoIndexedFaceSet335->setCreaseAngle(0.5);
SoIndexedFaceSet335->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate336 = new SoCoordinate();
SoCoordinate336->setUSE(QString("points"));
SoIndexedFaceSet335->setCoord(*SoCoordinate336);

SoShape332->setGeometry(*SoIndexedFaceSet335);

SoTransform331->addChild(*SoShape332);

SoHAnimSegment330->addChild(*SoTransform331);

SoHAnimSite* SoHAnimSite337 = new SoHAnimSite();
SoHAnimSite337->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite337->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite337->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoShape* SoShape338 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance339 = new SoVRMLAppearance();
SoMaterial* SoMaterial340 = new SoMaterial();
SoMaterial340->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance339->addChild(*SoMaterial340);

SoShape338->addChild(*SoVRMLAppearance339);

SoIndexedFaceSet* SoIndexedFaceSet341 = new SoIndexedFaceSet();
SoIndexedFaceSet341->setCreaseAngle(0.5);
SoIndexedFaceSet341->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate342 = new SoCoordinate();
SoCoordinate342->setUSE(QString("points"));
SoIndexedFaceSet341->setCoord(*SoCoordinate342);

SoShape338->setGeometry(*SoIndexedFaceSet341);

SoHAnimSite337->addChild(*SoShape338);

SoHAnimSegment330->addChild(*SoHAnimSite337);

SoHAnimSite* SoHAnimSite343 = new SoHAnimSite();
SoHAnimSite343->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite343->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite343->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoShape* SoShape344 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance345 = new SoVRMLAppearance();
SoMaterial* SoMaterial346 = new SoMaterial();
SoMaterial346->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance345->addChild(*SoMaterial346);

SoShape344->addChild(*SoVRMLAppearance345);

SoIndexedFaceSet* SoIndexedFaceSet347 = new SoIndexedFaceSet();
SoIndexedFaceSet347->setCreaseAngle(0.5);
SoIndexedFaceSet347->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate348 = new SoCoordinate();
SoCoordinate348->setUSE(QString("points"));
SoIndexedFaceSet347->setCoord(*SoCoordinate348);

SoShape344->setGeometry(*SoIndexedFaceSet347);

SoHAnimSite343->addChild(*SoShape344);

SoHAnimSegment330->addChild(*SoHAnimSite343);

SoHAnimSite* SoHAnimSite349 = new SoHAnimSite();
SoHAnimSite349->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite349->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite349->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoShape* SoShape350 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance351 = new SoVRMLAppearance();
SoMaterial* SoMaterial352 = new SoMaterial();
SoMaterial352->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance351->addChild(*SoMaterial352);

SoShape350->addChild(*SoVRMLAppearance351);

SoIndexedFaceSet* SoIndexedFaceSet353 = new SoIndexedFaceSet();
SoIndexedFaceSet353->setCreaseAngle(0.5);
SoIndexedFaceSet353->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate354 = new SoCoordinate();
SoCoordinate354->setUSE(QString("points"));
SoIndexedFaceSet353->setCoord(*SoCoordinate354);

SoShape350->setGeometry(*SoIndexedFaceSet353);

SoHAnimSite349->addChild(*SoShape350);

SoHAnimSegment330->addChild(*SoHAnimSite349);

SoHAnimSite* SoHAnimSite355 = new SoHAnimSite();
SoHAnimSite355->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite355->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite355->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoShape* SoShape356 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance357 = new SoVRMLAppearance();
SoMaterial* SoMaterial358 = new SoMaterial();
SoMaterial358->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance357->addChild(*SoMaterial358);

SoShape356->addChild(*SoVRMLAppearance357);

SoIndexedFaceSet* SoIndexedFaceSet359 = new SoIndexedFaceSet();
SoIndexedFaceSet359->setCreaseAngle(0.5);
SoIndexedFaceSet359->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate360 = new SoCoordinate();
SoCoordinate360->setUSE(QString("points"));
SoIndexedFaceSet359->setCoord(*SoCoordinate360);

SoShape356->setGeometry(*SoIndexedFaceSet359);

SoHAnimSite355->addChild(*SoShape356);

SoHAnimSegment330->addChild(*SoHAnimSite355);

SoHAnimJoint329->addChildren(*SoHAnimSegment330);

SoHAnimJoint* SoHAnimJoint361 = new SoHAnimJoint();
SoHAnimJoint361->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint361->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint361->setCenter(new float[]{-0.0801,0.0,0.0368});
SoHAnimSegment* SoHAnimSegment362 = new SoHAnimSegment();
SoHAnimSegment362->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment362->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform363 = new SoTransform();
SoTransform363->setTranslation(new float[]{-0.0801,0.0,0.0368});
SoShape* SoShape364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance365 = new SoVRMLAppearance();
SoMaterial* SoMaterial366 = new SoMaterial();
SoMaterial366->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance365->addChild(*SoMaterial366);

SoShape364->addChild(*SoVRMLAppearance365);

SoIndexedFaceSet* SoIndexedFaceSet367 = new SoIndexedFaceSet();
SoIndexedFaceSet367->setCreaseAngle(0.5);
SoIndexedFaceSet367->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate368 = new SoCoordinate();
SoCoordinate368->setUSE(QString("points"));
SoIndexedFaceSet367->setCoord(*SoCoordinate368);

SoShape364->setGeometry(*SoIndexedFaceSet367);

SoTransform363->addChild(*SoShape364);

SoHAnimSegment362->addChild(*SoTransform363);

SoHAnimSite* SoHAnimSite369 = new SoHAnimSite();
SoHAnimSite369->setDEF(QString("hanim_r_middistal_tip"));
SoHAnimSite369->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite369->setTranslation(new float[]{-0.1043,-0.0227,0.145});
SoShape* SoShape370 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance371 = new SoVRMLAppearance();
SoMaterial* SoMaterial372 = new SoMaterial();
SoMaterial372->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance371->addChild(*SoMaterial372);

SoShape370->addChild(*SoVRMLAppearance371);

SoIndexedFaceSet* SoIndexedFaceSet373 = new SoIndexedFaceSet();
SoIndexedFaceSet373->setCreaseAngle(0.5);
SoIndexedFaceSet373->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate374 = new SoCoordinate();
SoCoordinate374->setUSE(QString("points"));
SoIndexedFaceSet373->setCoord(*SoCoordinate374);

SoShape370->setGeometry(*SoIndexedFaceSet373);

SoHAnimSite369->addChild(*SoShape370);

SoHAnimSegment362->addChild(*SoHAnimSite369);

SoHAnimSite* SoHAnimSite375 = new SoHAnimSite();
SoHAnimSite375->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite375->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite375->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoShape* SoShape376 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance377 = new SoVRMLAppearance();
SoMaterial* SoMaterial378 = new SoMaterial();
SoMaterial378->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance377->addChild(*SoMaterial378);

SoShape376->addChild(*SoVRMLAppearance377);

SoIndexedFaceSet* SoIndexedFaceSet379 = new SoIndexedFaceSet();
SoIndexedFaceSet379->setCreaseAngle(0.5);
SoIndexedFaceSet379->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate380 = new SoCoordinate();
SoCoordinate380->setUSE(QString("points"));
SoIndexedFaceSet379->setCoord(*SoCoordinate380);

SoShape376->setGeometry(*SoIndexedFaceSet379);

SoHAnimSite375->addChild(*SoShape376);

SoHAnimSegment362->addChild(*SoHAnimSite375);

SoHAnimSite* SoHAnimSite381 = new SoHAnimSite();
SoHAnimSite381->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite381->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite381->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoShape* SoShape382 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance383 = new SoVRMLAppearance();
SoMaterial* SoMaterial384 = new SoMaterial();
SoMaterial384->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance383->addChild(*SoMaterial384);

SoShape382->addChild(*SoVRMLAppearance383);

SoIndexedFaceSet* SoIndexedFaceSet385 = new SoIndexedFaceSet();
SoIndexedFaceSet385->setCreaseAngle(0.5);
SoIndexedFaceSet385->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate386 = new SoCoordinate();
SoCoordinate386->setUSE(QString("points"));
SoIndexedFaceSet385->setCoord(*SoCoordinate386);

SoShape382->setGeometry(*SoIndexedFaceSet385);

SoHAnimSite381->addChild(*SoShape382);

SoHAnimSegment362->addChild(*SoHAnimSite381);

SoHAnimSite* SoHAnimSite387 = new SoHAnimSite();
SoHAnimSite387->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite387->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite387->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoShape* SoShape388 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance389 = new SoVRMLAppearance();
SoMaterial* SoMaterial390 = new SoMaterial();
SoMaterial390->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance389->addChild(*SoMaterial390);

SoShape388->addChild(*SoVRMLAppearance389);

SoIndexedFaceSet* SoIndexedFaceSet391 = new SoIndexedFaceSet();
SoIndexedFaceSet391->setCreaseAngle(0.5);
SoIndexedFaceSet391->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate392 = new SoCoordinate();
SoCoordinate392->setUSE(QString("points"));
SoIndexedFaceSet391->setCoord(*SoCoordinate392);

SoShape388->setGeometry(*SoIndexedFaceSet391);

SoHAnimSite387->addChild(*SoShape388);

SoHAnimSegment362->addChild(*SoHAnimSite387);

SoHAnimJoint361->addChildren(*SoHAnimSegment362);

SoHAnimJoint329->addChildren(*SoHAnimJoint361);

SoHAnimJoint321->addChildren(*SoHAnimJoint329);

SoHAnimJoint295->addChildren(*SoHAnimJoint321);

SoHAnimJoint113->addChildren(*SoHAnimJoint295);

SoHAnimJoint98->addChildren(*SoHAnimJoint113);

SoHAnimJoint* SoHAnimJoint393 = new SoHAnimJoint();
SoHAnimJoint393->setDEF(QString("hanim_vl5"));
SoHAnimJoint393->X3DNode::setName(QString("vl5"));
SoHAnimJoint393->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment394 = new SoHAnimSegment();
SoHAnimSegment394->setDEF(QString("hanim_l5"));
SoHAnimSegment394->X3DNode::setName(QString("l5"));
SoTransform* SoTransform395 = new SoTransform();
SoTransform395->setTranslation(new float[]{0.0028,1.0568,-0.0776});
SoShape* SoShape396 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance397 = new SoVRMLAppearance();
SoMaterial* SoMaterial398 = new SoMaterial();
SoMaterial398->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance397->addChild(*SoMaterial398);

SoShape396->addChild(*SoVRMLAppearance397);

SoIndexedFaceSet* SoIndexedFaceSet399 = new SoIndexedFaceSet();
SoIndexedFaceSet399->setCreaseAngle(0.5);
SoIndexedFaceSet399->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate400 = new SoCoordinate();
SoCoordinate400->setUSE(QString("points"));
SoIndexedFaceSet399->setCoord(*SoCoordinate400);

SoShape396->setGeometry(*SoIndexedFaceSet399);

SoTransform395->addChild(*SoShape396);

SoHAnimSegment394->addChild(*SoTransform395);

SoHAnimJoint393->addChildren(*SoHAnimSegment394);

SoHAnimJoint* SoHAnimJoint401 = new SoHAnimJoint();
SoHAnimJoint401->setDEF(QString("hanim_vl4"));
SoHAnimJoint401->X3DNode::setName(QString("vl4"));
SoHAnimJoint401->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment402 = new SoHAnimSegment();
SoHAnimSegment402->setDEF(QString("hanim_l4"));
SoHAnimSegment402->X3DNode::setName(QString("l4"));
SoTransform* SoTransform403 = new SoTransform();
SoTransform403->setTranslation(new float[]{0.0035,1.0925,-0.0787});
SoShape* SoShape404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance405 = new SoVRMLAppearance();
SoMaterial* SoMaterial406 = new SoMaterial();
SoMaterial406->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance405->addChild(*SoMaterial406);

SoShape404->addChild(*SoVRMLAppearance405);

SoIndexedFaceSet* SoIndexedFaceSet407 = new SoIndexedFaceSet();
SoIndexedFaceSet407->setCreaseAngle(0.5);
SoIndexedFaceSet407->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate408 = new SoCoordinate();
SoCoordinate408->setUSE(QString("points"));
SoIndexedFaceSet407->setCoord(*SoCoordinate408);

SoShape404->setGeometry(*SoIndexedFaceSet407);

SoTransform403->addChild(*SoShape404);

SoHAnimSegment402->addChild(*SoTransform403);

SoHAnimJoint401->addChildren(*SoHAnimSegment402);

SoHAnimJoint* SoHAnimJoint409 = new SoHAnimJoint();
SoHAnimJoint409->setDEF(QString("hanim_vl3"));
SoHAnimJoint409->X3DNode::setName(QString("vl3"));
SoHAnimJoint409->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment410 = new SoHAnimSegment();
SoHAnimSegment410->setDEF(QString("hanim_l3"));
SoHAnimSegment410->X3DNode::setName(QString("l3"));
SoTransform* SoTransform411 = new SoTransform();
SoTransform411->setTranslation(new float[]{0.0041,1.1276,-0.0796});
SoShape* SoShape412 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance413 = new SoVRMLAppearance();
SoMaterial* SoMaterial414 = new SoMaterial();
SoMaterial414->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance413->addChild(*SoMaterial414);

SoShape412->addChild(*SoVRMLAppearance413);

SoIndexedFaceSet* SoIndexedFaceSet415 = new SoIndexedFaceSet();
SoIndexedFaceSet415->setCreaseAngle(0.5);
SoIndexedFaceSet415->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate416 = new SoCoordinate();
SoCoordinate416->setUSE(QString("points"));
SoIndexedFaceSet415->setCoord(*SoCoordinate416);

SoShape412->setGeometry(*SoIndexedFaceSet415);

SoTransform411->addChild(*SoShape412);

SoHAnimSegment410->addChild(*SoTransform411);

SoHAnimJoint409->addChildren(*SoHAnimSegment410);

SoHAnimJoint* SoHAnimJoint417 = new SoHAnimJoint();
SoHAnimJoint417->setDEF(QString("hanim_vl2"));
SoHAnimJoint417->X3DNode::setName(QString("vl2"));
SoHAnimJoint417->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment418 = new SoHAnimSegment();
SoHAnimSegment418->setDEF(QString("hanim_l2"));
SoHAnimSegment418->X3DNode::setName(QString("l2"));
SoTransform* SoTransform419 = new SoTransform();
SoTransform419->setTranslation(new float[]{0.0045,1.1546,-0.08});
SoShape* SoShape420 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance421 = new SoVRMLAppearance();
SoMaterial* SoMaterial422 = new SoMaterial();
SoMaterial422->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance421->addChild(*SoMaterial422);

SoShape420->addChild(*SoVRMLAppearance421);

SoIndexedFaceSet* SoIndexedFaceSet423 = new SoIndexedFaceSet();
SoIndexedFaceSet423->setCreaseAngle(0.5);
SoIndexedFaceSet423->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate424 = new SoCoordinate();
SoCoordinate424->setUSE(QString("points"));
SoIndexedFaceSet423->setCoord(*SoCoordinate424);

SoShape420->setGeometry(*SoIndexedFaceSet423);

SoTransform419->addChild(*SoShape420);

SoHAnimSegment418->addChild(*SoTransform419);

SoHAnimJoint417->addChildren(*SoHAnimSegment418);

SoHAnimJoint* SoHAnimJoint425 = new SoHAnimJoint();
SoHAnimJoint425->setDEF(QString("hanim_vl1"));
SoHAnimJoint425->X3DNode::setName(QString("vl1"));
SoHAnimJoint425->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment426 = new SoHAnimSegment();
SoHAnimSegment426->setDEF(QString("hanim_l1"));
SoHAnimSegment426->X3DNode::setName(QString("l1"));
SoTransform* SoTransform427 = new SoTransform();
SoTransform427->setTranslation(new float[]{0.0048,1.1912,-0.0805});
SoShape* SoShape428 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance429 = new SoVRMLAppearance();
SoMaterial* SoMaterial430 = new SoMaterial();
SoMaterial430->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance429->addChild(*SoMaterial430);

SoShape428->addChild(*SoVRMLAppearance429);

SoIndexedFaceSet* SoIndexedFaceSet431 = new SoIndexedFaceSet();
SoIndexedFaceSet431->setCreaseAngle(0.5);
SoIndexedFaceSet431->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate432 = new SoCoordinate();
SoCoordinate432->setUSE(QString("points"));
SoIndexedFaceSet431->setCoord(*SoCoordinate432);

SoShape428->setGeometry(*SoIndexedFaceSet431);

SoTransform427->addChild(*SoShape428);

SoHAnimSegment426->addChild(*SoTransform427);

SoHAnimJoint425->addChildren(*SoHAnimSegment426);

SoHAnimJoint* SoHAnimJoint433 = new SoHAnimJoint();
SoHAnimJoint433->setDEF(QString("hanim_vt12"));
SoHAnimJoint433->X3DNode::setName(QString("vt12"));
SoHAnimJoint433->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment434 = new SoHAnimSegment();
SoHAnimSegment434->setDEF(QString("hanim_t12"));
SoHAnimSegment434->X3DNode::setName(QString("t12"));
SoTransform* SoTransform435 = new SoTransform();
SoTransform435->setTranslation(new float[]{0.0051,1.2278,-0.0808});
SoShape* SoShape436 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance437 = new SoVRMLAppearance();
SoMaterial* SoMaterial438 = new SoMaterial();
SoMaterial438->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance437->addChild(*SoMaterial438);

SoShape436->addChild(*SoVRMLAppearance437);

SoIndexedFaceSet* SoIndexedFaceSet439 = new SoIndexedFaceSet();
SoIndexedFaceSet439->setCreaseAngle(0.5);
SoIndexedFaceSet439->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate440 = new SoCoordinate();
SoCoordinate440->setUSE(QString("points"));
SoIndexedFaceSet439->setCoord(*SoCoordinate440);

SoShape436->setGeometry(*SoIndexedFaceSet439);

SoTransform435->addChild(*SoShape436);

SoHAnimSegment434->addChild(*SoTransform435);

SoHAnimJoint433->addChildren(*SoHAnimSegment434);

SoHAnimJoint* SoHAnimJoint441 = new SoHAnimJoint();
SoHAnimJoint441->setDEF(QString("hanim_vt11"));
SoHAnimJoint441->X3DNode::setName(QString("vt11"));
SoHAnimJoint441->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment442 = new SoHAnimSegment();
SoHAnimSegment442->setDEF(QString("hanim_t11"));
SoHAnimSegment442->X3DNode::setName(QString("t11"));
SoTransform* SoTransform443 = new SoTransform();
SoTransform443->setTranslation(new float[]{0.0053,1.2679,-0.081});
SoShape* SoShape444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance445 = new SoVRMLAppearance();
SoMaterial* SoMaterial446 = new SoMaterial();
SoMaterial446->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance445->addChild(*SoMaterial446);

SoShape444->addChild(*SoVRMLAppearance445);

SoIndexedFaceSet* SoIndexedFaceSet447 = new SoIndexedFaceSet();
SoIndexedFaceSet447->setCreaseAngle(0.5);
SoIndexedFaceSet447->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate448 = new SoCoordinate();
SoCoordinate448->setUSE(QString("points"));
SoIndexedFaceSet447->setCoord(*SoCoordinate448);

SoShape444->setGeometry(*SoIndexedFaceSet447);

SoTransform443->addChild(*SoShape444);

SoHAnimSegment442->addChild(*SoTransform443);

SoHAnimJoint441->addChildren(*SoHAnimSegment442);

SoHAnimJoint* SoHAnimJoint449 = new SoHAnimJoint();
SoHAnimJoint449->setDEF(QString("hanim_vt10"));
SoHAnimJoint449->X3DNode::setName(QString("vt10"));
SoHAnimJoint449->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment450 = new SoHAnimSegment();
SoHAnimSegment450->setDEF(QString("hanim_t10"));
SoHAnimSegment450->X3DNode::setName(QString("t10"));
SoTransform* SoTransform451 = new SoTransform();
SoTransform451->setTranslation(new float[]{0.0056,1.2848,-0.0822});
SoShape* SoShape452 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance453 = new SoVRMLAppearance();
SoMaterial* SoMaterial454 = new SoMaterial();
SoMaterial454->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance453->addChild(*SoMaterial454);

SoShape452->addChild(*SoVRMLAppearance453);

SoIndexedFaceSet* SoIndexedFaceSet455 = new SoIndexedFaceSet();
SoIndexedFaceSet455->setCreaseAngle(0.5);
SoIndexedFaceSet455->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate456 = new SoCoordinate();
SoCoordinate456->setUSE(QString("points"));
SoIndexedFaceSet455->setCoord(*SoCoordinate456);

SoShape452->setGeometry(*SoIndexedFaceSet455);

SoTransform451->addChild(*SoShape452);

SoHAnimSegment450->addChild(*SoTransform451);

SoHAnimJoint449->addChildren(*SoHAnimSegment450);

SoHAnimJoint* SoHAnimJoint457 = new SoHAnimJoint();
SoHAnimJoint457->setDEF(QString("hanim_vt9"));
SoHAnimJoint457->X3DNode::setName(QString("vt9"));
SoHAnimJoint457->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment458 = new SoHAnimSegment();
SoHAnimSegment458->setDEF(QString("hanim_t9"));
SoHAnimSegment458->X3DNode::setName(QString("t9"));
SoTransform* SoTransform459 = new SoTransform();
SoTransform459->setTranslation(new float[]{0.0057,1.3126,-0.0838});
SoShape* SoShape460 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance461 = new SoVRMLAppearance();
SoMaterial* SoMaterial462 = new SoMaterial();
SoMaterial462->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance461->addChild(*SoMaterial462);

SoShape460->addChild(*SoVRMLAppearance461);

SoIndexedFaceSet* SoIndexedFaceSet463 = new SoIndexedFaceSet();
SoIndexedFaceSet463->setCreaseAngle(0.5);
SoIndexedFaceSet463->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate464 = new SoCoordinate();
SoCoordinate464->setUSE(QString("points"));
SoIndexedFaceSet463->setCoord(*SoCoordinate464);

SoShape460->setGeometry(*SoIndexedFaceSet463);

SoTransform459->addChild(*SoShape460);

SoHAnimSegment458->addChild(*SoTransform459);

SoHAnimJoint457->addChildren(*SoHAnimSegment458);

SoHAnimJoint* SoHAnimJoint465 = new SoHAnimJoint();
SoHAnimJoint465->setDEF(QString("hanim_vt8"));
SoHAnimJoint465->X3DNode::setName(QString("vt8"));
SoHAnimJoint465->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment466 = new SoHAnimSegment();
SoHAnimSegment466->setDEF(QString("hanim_t8"));
SoHAnimSegment466->X3DNode::setName(QString("t8"));
SoTransform* SoTransform467 = new SoTransform();
SoTransform467->setTranslation(new float[]{0.0057,1.3382,-0.0845});
SoShape* SoShape468 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance469 = new SoVRMLAppearance();
SoMaterial* SoMaterial470 = new SoMaterial();
SoMaterial470->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance469->addChild(*SoMaterial470);

SoShape468->addChild(*SoVRMLAppearance469);

SoIndexedFaceSet* SoIndexedFaceSet471 = new SoIndexedFaceSet();
SoIndexedFaceSet471->setCreaseAngle(0.5);
SoIndexedFaceSet471->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate472 = new SoCoordinate();
SoCoordinate472->setUSE(QString("points"));
SoIndexedFaceSet471->setCoord(*SoCoordinate472);

SoShape468->setGeometry(*SoIndexedFaceSet471);

SoTransform467->addChild(*SoShape468);

SoHAnimSegment466->addChild(*SoTransform467);

SoHAnimJoint465->addChildren(*SoHAnimSegment466);

SoHAnimJoint* SoHAnimJoint473 = new SoHAnimJoint();
SoHAnimJoint473->setDEF(QString("hanim_vt7"));
SoHAnimJoint473->X3DNode::setName(QString("vt7"));
SoHAnimJoint473->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment474 = new SoHAnimSegment();
SoHAnimSegment474->setDEF(QString("hanim_t7"));
SoHAnimSegment474->X3DNode::setName(QString("t7"));
SoTransform* SoTransform475 = new SoTransform();
SoTransform475->setTranslation(new float[]{0.0058,1.3625,-0.0833});
SoShape* SoShape476 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance477 = new SoVRMLAppearance();
SoMaterial* SoMaterial478 = new SoMaterial();
SoMaterial478->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance477->addChild(*SoMaterial478);

SoShape476->addChild(*SoVRMLAppearance477);

SoIndexedFaceSet* SoIndexedFaceSet479 = new SoIndexedFaceSet();
SoIndexedFaceSet479->setCreaseAngle(0.5);
SoIndexedFaceSet479->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate480 = new SoCoordinate();
SoCoordinate480->setUSE(QString("points"));
SoIndexedFaceSet479->setCoord(*SoCoordinate480);

SoShape476->setGeometry(*SoIndexedFaceSet479);

SoTransform475->addChild(*SoShape476);

SoHAnimSegment474->addChild(*SoTransform475);

SoHAnimJoint473->addChildren(*SoHAnimSegment474);

SoHAnimJoint* SoHAnimJoint481 = new SoHAnimJoint();
SoHAnimJoint481->setDEF(QString("hanim_vt6"));
SoHAnimJoint481->X3DNode::setName(QString("vt6"));
SoHAnimJoint481->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment482 = new SoHAnimSegment();
SoHAnimSegment482->setDEF(QString("hanim_t6"));
SoHAnimSegment482->X3DNode::setName(QString("t6"));
SoTransform* SoTransform483 = new SoTransform();
SoTransform483->setTranslation(new float[]{0.0059,1.3866,-0.08});
SoShape* SoShape484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance485 = new SoVRMLAppearance();
SoMaterial* SoMaterial486 = new SoMaterial();
SoMaterial486->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance485->addChild(*SoMaterial486);

SoShape484->addChild(*SoVRMLAppearance485);

SoIndexedFaceSet* SoIndexedFaceSet487 = new SoIndexedFaceSet();
SoIndexedFaceSet487->setCreaseAngle(0.5);
SoIndexedFaceSet487->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate488 = new SoCoordinate();
SoCoordinate488->setUSE(QString("points"));
SoIndexedFaceSet487->setCoord(*SoCoordinate488);

SoShape484->setGeometry(*SoIndexedFaceSet487);

SoTransform483->addChild(*SoShape484);

SoHAnimSegment482->addChild(*SoTransform483);

SoHAnimJoint481->addChildren(*SoHAnimSegment482);

SoHAnimJoint* SoHAnimJoint489 = new SoHAnimJoint();
SoHAnimJoint489->setDEF(QString("hanim_vt5"));
SoHAnimJoint489->X3DNode::setName(QString("vt5"));
SoHAnimJoint489->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment490 = new SoHAnimSegment();
SoHAnimSegment490->setDEF(QString("hanim_t5"));
SoHAnimSegment490->X3DNode::setName(QString("t5"));
SoTransform* SoTransform491 = new SoTransform();
SoTransform491->setTranslation(new float[]{0.006,1.4102,-0.0745});
SoShape* SoShape492 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance493 = new SoVRMLAppearance();
SoMaterial* SoMaterial494 = new SoMaterial();
SoMaterial494->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance493->addChild(*SoMaterial494);

SoShape492->addChild(*SoVRMLAppearance493);

SoIndexedFaceSet* SoIndexedFaceSet495 = new SoIndexedFaceSet();
SoIndexedFaceSet495->setCreaseAngle(0.5);
SoIndexedFaceSet495->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate496 = new SoCoordinate();
SoCoordinate496->setUSE(QString("points"));
SoIndexedFaceSet495->setCoord(*SoCoordinate496);

SoShape492->setGeometry(*SoIndexedFaceSet495);

SoTransform491->addChild(*SoShape492);

SoHAnimSegment490->addChild(*SoTransform491);

SoHAnimJoint489->addChildren(*SoHAnimSegment490);

SoHAnimJoint* SoHAnimJoint497 = new SoHAnimJoint();
SoHAnimJoint497->setDEF(QString("hanim_vt4"));
SoHAnimJoint497->X3DNode::setName(QString("vt4"));
SoHAnimJoint497->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment498 = new SoHAnimSegment();
SoHAnimSegment498->setDEF(QString("hanim_t4"));
SoHAnimSegment498->X3DNode::setName(QString("t4"));
SoTransform* SoTransform499 = new SoTransform();
SoTransform499->setTranslation(new float[]{0.0061,1.432,-0.0675});
SoShape* SoShape500 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance501 = new SoVRMLAppearance();
SoMaterial* SoMaterial502 = new SoMaterial();
SoMaterial502->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance501->addChild(*SoMaterial502);

SoShape500->addChild(*SoVRMLAppearance501);

SoIndexedFaceSet* SoIndexedFaceSet503 = new SoIndexedFaceSet();
SoIndexedFaceSet503->setCreaseAngle(0.5);
SoIndexedFaceSet503->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate504 = new SoCoordinate();
SoCoordinate504->setUSE(QString("points"));
SoIndexedFaceSet503->setCoord(*SoCoordinate504);

SoShape500->setGeometry(*SoIndexedFaceSet503);

SoTransform499->addChild(*SoShape500);

SoHAnimSegment498->addChild(*SoTransform499);

SoHAnimJoint497->addChildren(*SoHAnimSegment498);

SoHAnimJoint* SoHAnimJoint505 = new SoHAnimJoint();
SoHAnimJoint505->setDEF(QString("hanim_vt3"));
SoHAnimJoint505->X3DNode::setName(QString("vt3"));
SoHAnimJoint505->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment506 = new SoHAnimSegment();
SoHAnimSegment506->setDEF(QString("hanim_t3"));
SoHAnimSegment506->X3DNode::setName(QString("t3"));
SoTransform* SoTransform507 = new SoTransform();
SoTransform507->setTranslation(new float[]{0.0062,1.4583,-0.057});
SoShape* SoShape508 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance509 = new SoVRMLAppearance();
SoMaterial* SoMaterial510 = new SoMaterial();
SoMaterial510->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance509->addChild(*SoMaterial510);

SoShape508->addChild(*SoVRMLAppearance509);

SoIndexedFaceSet* SoIndexedFaceSet511 = new SoIndexedFaceSet();
SoIndexedFaceSet511->setCreaseAngle(0.5);
SoIndexedFaceSet511->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate512 = new SoCoordinate();
SoCoordinate512->setUSE(QString("points"));
SoIndexedFaceSet511->setCoord(*SoCoordinate512);

SoShape508->setGeometry(*SoIndexedFaceSet511);

SoTransform507->addChild(*SoShape508);

SoHAnimSegment506->addChild(*SoTransform507);

SoHAnimJoint505->addChildren(*SoHAnimSegment506);

SoHAnimJoint* SoHAnimJoint513 = new SoHAnimJoint();
SoHAnimJoint513->setDEF(QString("hanim_vt2"));
SoHAnimJoint513->X3DNode::setName(QString("vt2"));
SoHAnimJoint513->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment514 = new SoHAnimSegment();
SoHAnimSegment514->setDEF(QString("hanim_t2"));
SoHAnimSegment514->X3DNode::setName(QString("t2"));
SoTransform* SoTransform515 = new SoTransform();
SoTransform515->setTranslation(new float[]{0.0063,1.4761,-0.0484});
SoShape* SoShape516 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance517 = new SoVRMLAppearance();
SoMaterial* SoMaterial518 = new SoMaterial();
SoMaterial518->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance517->addChild(*SoMaterial518);

SoShape516->addChild(*SoVRMLAppearance517);

SoIndexedFaceSet* SoIndexedFaceSet519 = new SoIndexedFaceSet();
SoIndexedFaceSet519->setCreaseAngle(0.5);
SoIndexedFaceSet519->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate520 = new SoCoordinate();
SoCoordinate520->setUSE(QString("points"));
SoIndexedFaceSet519->setCoord(*SoCoordinate520);

SoShape516->setGeometry(*SoIndexedFaceSet519);

SoTransform515->addChild(*SoShape516);

SoHAnimSegment514->addChild(*SoTransform515);

SoHAnimJoint513->addChildren(*SoHAnimSegment514);

SoHAnimJoint* SoHAnimJoint521 = new SoHAnimJoint();
SoHAnimJoint521->setDEF(QString("hanim_vt1"));
SoHAnimJoint521->X3DNode::setName(QString("vt1"));
SoHAnimJoint521->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment522 = new SoHAnimSegment();
SoHAnimSegment522->setDEF(QString("hanim_t1"));
SoHAnimSegment522->X3DNode::setName(QString("t1"));
SoTransform* SoTransform523 = new SoTransform();
SoTransform523->setTranslation(new float[]{0.0065,1.4951,-0.0387});
SoShape* SoShape524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance525 = new SoVRMLAppearance();
SoMaterial* SoMaterial526 = new SoMaterial();
SoMaterial526->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance525->addChild(*SoMaterial526);

SoShape524->addChild(*SoVRMLAppearance525);

SoIndexedFaceSet* SoIndexedFaceSet527 = new SoIndexedFaceSet();
SoIndexedFaceSet527->setCreaseAngle(0.5);
SoIndexedFaceSet527->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate528 = new SoCoordinate();
SoCoordinate528->setUSE(QString("points"));
SoIndexedFaceSet527->setCoord(*SoCoordinate528);

SoShape524->setGeometry(*SoIndexedFaceSet527);

SoTransform523->addChild(*SoShape524);

SoHAnimSegment522->addChild(*SoTransform523);

SoHAnimJoint521->addChildren(*SoHAnimSegment522);

SoHAnimJoint* SoHAnimJoint529 = new SoHAnimJoint();
SoHAnimJoint529->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint529->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint529->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment530 = new SoHAnimSegment();
SoHAnimSegment530->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment530->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform531 = new SoTransform();
SoTransform531->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape532 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance533 = new SoVRMLAppearance();
SoMaterial* SoMaterial534 = new SoMaterial();
SoMaterial534->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance533->addChild(*SoMaterial534);

SoShape532->addChild(*SoVRMLAppearance533);

SoIndexedFaceSet* SoIndexedFaceSet535 = new SoIndexedFaceSet();
SoIndexedFaceSet535->setCreaseAngle(0.5);
SoIndexedFaceSet535->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate536 = new SoCoordinate();
SoCoordinate536->setUSE(QString("points"));
SoIndexedFaceSet535->setCoord(*SoCoordinate536);

SoShape532->setGeometry(*SoIndexedFaceSet535);

SoTransform531->addChild(*SoShape532);

SoHAnimSegment530->addChild(*SoTransform531);

SoTransform* SoTransform537 = new SoTransform();
SoTransform537->setDEF(QString("l_upperarm_adjust"));
SoTransform537->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoTransform537->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform537->setCenter(new float[]{0.182,1.22,-0.047});
SoHAnimSegment530->addChild(*SoTransform537);

SoHAnimSite* SoHAnimSite538 = new SoHAnimSite();
SoHAnimSite538->setDEF(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite538->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite538->setTranslation(new float[]{0.228,1.1482,-0.11});
SoShape* SoShape539 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance540 = new SoVRMLAppearance();
SoMaterial* SoMaterial541 = new SoMaterial();
SoMaterial541->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance540->addChild(*SoMaterial541);

SoShape539->addChild(*SoVRMLAppearance540);

SoIndexedFaceSet* SoIndexedFaceSet542 = new SoIndexedFaceSet();
SoIndexedFaceSet542->setCreaseAngle(0.5);
SoIndexedFaceSet542->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate543 = new SoCoordinate();
SoCoordinate543->setUSE(QString("points"));
SoIndexedFaceSet542->setCoord(*SoCoordinate543);

SoShape539->setGeometry(*SoIndexedFaceSet542);

SoHAnimSite538->addChild(*SoShape539);

SoHAnimSegment530->addChild(*SoHAnimSite538);

SoHAnimJoint529->addChildren(*SoHAnimSegment530);

SoHAnimJoint* SoHAnimJoint544 = new SoHAnimJoint();
SoHAnimJoint544->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint544->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint544->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment545 = new SoHAnimSegment();
SoHAnimSegment545->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment545->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform546 = new SoTransform();
SoTransform546->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape547 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance548 = new SoVRMLAppearance();
SoMaterial* SoMaterial549 = new SoMaterial();
SoMaterial549->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance548->addChild(*SoMaterial549);

SoShape547->addChild(*SoVRMLAppearance548);

SoIndexedFaceSet* SoIndexedFaceSet550 = new SoIndexedFaceSet();
SoIndexedFaceSet550->setCreaseAngle(0.5);
SoIndexedFaceSet550->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate551 = new SoCoordinate();
SoCoordinate551->setUSE(QString("points"));
SoIndexedFaceSet550->setCoord(*SoCoordinate551);

SoShape547->setGeometry(*SoIndexedFaceSet550);

SoTransform546->addChild(*SoShape547);

SoHAnimSegment545->addChild(*SoTransform546);

SoTransform* SoTransform552 = new SoTransform();
SoTransform552->setDEF(QString("l_forearm_adjust"));
SoTransform552->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoTransform552->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform552->setCenter(new float[]{0.198,0.961,-0.0405});
SoHAnimSegment545->addChild(*SoTransform552);

SoHAnimSite* SoHAnimSite553 = new SoHAnimSite();
SoHAnimSite553->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite553->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite553->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoShape* SoShape554 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance555 = new SoVRMLAppearance();
SoMaterial* SoMaterial556 = new SoMaterial();
SoMaterial556->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance555->addChild(*SoMaterial556);

SoShape554->addChild(*SoVRMLAppearance555);

SoIndexedFaceSet* SoIndexedFaceSet557 = new SoIndexedFaceSet();
SoIndexedFaceSet557->setCreaseAngle(0.5);
SoIndexedFaceSet557->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate558 = new SoCoordinate();
SoCoordinate558->setUSE(QString("points"));
SoIndexedFaceSet557->setCoord(*SoCoordinate558);

SoShape554->setGeometry(*SoIndexedFaceSet557);

SoHAnimSite553->addChild(*SoShape554);

SoHAnimSegment545->addChild(*SoHAnimSite553);

SoHAnimSite* SoHAnimSite559 = new SoHAnimSite();
SoHAnimSite559->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite559->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite559->setTranslation(new float[]{-0.1962,1.1375,-0.1123});
SoShape* SoShape560 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance561 = new SoVRMLAppearance();
SoMaterial* SoMaterial562 = new SoMaterial();
SoMaterial562->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance561->addChild(*SoMaterial562);

SoShape560->addChild(*SoVRMLAppearance561);

SoIndexedFaceSet* SoIndexedFaceSet563 = new SoIndexedFaceSet();
SoIndexedFaceSet563->setCreaseAngle(0.5);
SoIndexedFaceSet563->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate564 = new SoCoordinate();
SoCoordinate564->setUSE(QString("points"));
SoIndexedFaceSet563->setCoord(*SoCoordinate564);

SoShape560->setGeometry(*SoIndexedFaceSet563);

SoHAnimSite559->addChild(*SoShape560);

SoHAnimSegment545->addChild(*SoHAnimSite559);

SoHAnimSite* SoHAnimSite565 = new SoHAnimSite();
SoHAnimSite565->setDEF(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite565->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite565->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoShape* SoShape566 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance567 = new SoVRMLAppearance();
SoMaterial* SoMaterial568 = new SoMaterial();
SoMaterial568->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance567->addChild(*SoMaterial568);

SoShape566->addChild(*SoVRMLAppearance567);

SoIndexedFaceSet* SoIndexedFaceSet569 = new SoIndexedFaceSet();
SoIndexedFaceSet569->setCreaseAngle(0.5);
SoIndexedFaceSet569->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate570 = new SoCoordinate();
SoCoordinate570->setUSE(QString("points"));
SoIndexedFaceSet569->setCoord(*SoCoordinate570);

SoShape566->setGeometry(*SoIndexedFaceSet569);

SoHAnimSite565->addChild(*SoShape566);

SoHAnimSegment545->addChild(*SoHAnimSite565);

SoHAnimSite* SoHAnimSite571 = new SoHAnimSite();
SoHAnimSite571->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite571->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite571->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoShape* SoShape572 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance573 = new SoVRMLAppearance();
SoMaterial* SoMaterial574 = new SoMaterial();
SoMaterial574->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance573->addChild(*SoMaterial574);

SoShape572->addChild(*SoVRMLAppearance573);

SoIndexedFaceSet* SoIndexedFaceSet575 = new SoIndexedFaceSet();
SoIndexedFaceSet575->setCreaseAngle(0.5);
SoIndexedFaceSet575->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate576 = new SoCoordinate();
SoCoordinate576->setUSE(QString("points"));
SoIndexedFaceSet575->setCoord(*SoCoordinate576);

SoShape572->setGeometry(*SoIndexedFaceSet575);

SoHAnimSite571->addChild(*SoShape572);

SoHAnimSegment545->addChild(*SoHAnimSite571);

SoHAnimJoint544->addChildren(*SoHAnimSegment545);

SoHAnimJoint* SoHAnimJoint577 = new SoHAnimJoint();
SoHAnimJoint577->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint577->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint577->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment578 = new SoHAnimSegment();
SoHAnimSegment578->setDEF(QString("hanim_l_carpal"));
SoHAnimSegment578->X3DNode::setName(QString("l_carpal"));
SoTransform* SoTransform579 = new SoTransform();
SoTransform579->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape580 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance581 = new SoVRMLAppearance();
SoMaterial* SoMaterial582 = new SoMaterial();
SoMaterial582->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance581->addChild(*SoMaterial582);

SoShape580->addChild(*SoVRMLAppearance581);

SoIndexedFaceSet* SoIndexedFaceSet583 = new SoIndexedFaceSet();
SoIndexedFaceSet583->setCreaseAngle(0.5);
SoIndexedFaceSet583->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate584 = new SoCoordinate();
SoCoordinate584->setUSE(QString("points"));
SoIndexedFaceSet583->setCoord(*SoCoordinate584);

SoShape580->setGeometry(*SoIndexedFaceSet583);

SoTransform579->addChild(*SoShape580);

SoHAnimSegment578->addChild(*SoTransform579);

SoTransform* SoTransform585 = new SoTransform();
SoTransform585->setDEF(QString("l_hand_adjust"));
SoTransform585->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoTransform585->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform585->setCenter(new float[]{0.213,0.811,-0.0338});
SoHAnimSegment578->addChild(*SoTransform585);

SoHAnimSite* SoHAnimSite586 = new SoHAnimSite();
SoHAnimSite586->setDEF(QString("hanim_l_hand_tip"));
SoHAnimSite586->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite586->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoShape* SoShape587 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance588 = new SoVRMLAppearance();
SoMaterial* SoMaterial589 = new SoMaterial();
SoMaterial589->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance588->addChild(*SoMaterial589);

SoShape587->addChild(*SoVRMLAppearance588);

SoIndexedFaceSet* SoIndexedFaceSet590 = new SoIndexedFaceSet();
SoIndexedFaceSet590->setCreaseAngle(0.5);
SoIndexedFaceSet590->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate591 = new SoCoordinate();
SoCoordinate591->setUSE(QString("points"));
SoIndexedFaceSet590->setCoord(*SoCoordinate591);

SoShape587->setGeometry(*SoIndexedFaceSet590);

SoHAnimSite586->addChild(*SoShape587);

SoHAnimSegment578->addChild(*SoHAnimSite586);

SoHAnimSite* SoHAnimSite592 = new SoHAnimSite();
SoHAnimSite592->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite592->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite592->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoShape* SoShape593 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance594 = new SoVRMLAppearance();
SoMaterial* SoMaterial595 = new SoMaterial();
SoMaterial595->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance594->addChild(*SoMaterial595);

SoShape593->addChild(*SoVRMLAppearance594);

SoIndexedFaceSet* SoIndexedFaceSet596 = new SoIndexedFaceSet();
SoIndexedFaceSet596->setCreaseAngle(0.5);
SoIndexedFaceSet596->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate597 = new SoCoordinate();
SoCoordinate597->setUSE(QString("points"));
SoIndexedFaceSet596->setCoord(*SoCoordinate597);

SoShape593->setGeometry(*SoIndexedFaceSet596);

SoHAnimSite592->addChild(*SoShape593);

SoHAnimSegment578->addChild(*SoHAnimSite592);

SoHAnimSite* SoHAnimSite598 = new SoHAnimSite();
SoHAnimSite598->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite598->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite598->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoShape* SoShape599 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance600 = new SoVRMLAppearance();
SoMaterial* SoMaterial601 = new SoMaterial();
SoMaterial601->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance600->addChild(*SoMaterial601);

SoShape599->addChild(*SoVRMLAppearance600);

SoIndexedFaceSet* SoIndexedFaceSet602 = new SoIndexedFaceSet();
SoIndexedFaceSet602->setCreaseAngle(0.5);
SoIndexedFaceSet602->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate603 = new SoCoordinate();
SoCoordinate603->setUSE(QString("points"));
SoIndexedFaceSet602->setCoord(*SoCoordinate603);

SoShape599->setGeometry(*SoIndexedFaceSet602);

SoHAnimSite598->addChild(*SoShape599);

SoHAnimSegment578->addChild(*SoHAnimSite598);

SoHAnimSite* SoHAnimSite604 = new SoHAnimSite();
SoHAnimSite604->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite604->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite604->setTranslation(new float[]{-0.2142,0.8529,-0.0648});
SoShape* SoShape605 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance606 = new SoVRMLAppearance();
SoMaterial* SoMaterial607 = new SoMaterial();
SoMaterial607->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance606->addChild(*SoMaterial607);

SoShape605->addChild(*SoVRMLAppearance606);

SoIndexedFaceSet* SoIndexedFaceSet608 = new SoIndexedFaceSet();
SoIndexedFaceSet608->setCreaseAngle(0.5);
SoIndexedFaceSet608->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate609 = new SoCoordinate();
SoCoordinate609->setUSE(QString("points"));
SoIndexedFaceSet608->setCoord(*SoCoordinate609);

SoShape605->setGeometry(*SoIndexedFaceSet608);

SoHAnimSite604->addChild(*SoShape605);

SoHAnimSegment578->addChild(*SoHAnimSite604);

SoHAnimSite* SoHAnimSite610 = new SoHAnimSite();
SoHAnimSite610->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite610->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite610->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoShape* SoShape611 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance612 = new SoVRMLAppearance();
SoMaterial* SoMaterial613 = new SoMaterial();
SoMaterial613->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance612->addChild(*SoMaterial613);

SoShape611->addChild(*SoVRMLAppearance612);

SoIndexedFaceSet* SoIndexedFaceSet614 = new SoIndexedFaceSet();
SoIndexedFaceSet614->setCreaseAngle(0.5);
SoIndexedFaceSet614->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate615 = new SoCoordinate();
SoCoordinate615->setUSE(QString("points"));
SoIndexedFaceSet614->setCoord(*SoCoordinate615);

SoShape611->setGeometry(*SoIndexedFaceSet614);

SoHAnimSite610->addChild(*SoShape611);

SoHAnimSegment578->addChild(*SoHAnimSite610);

SoHAnimJoint577->addChildren(*SoHAnimSegment578);

SoHAnimJoint* SoHAnimJoint616 = new SoHAnimJoint();
SoHAnimJoint616->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint616->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint616->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment617 = new SoHAnimSegment();
SoHAnimSegment617->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimSegment617->X3DNode::setName(QString("l_metacarpal_1"));
SoTransform* SoTransform618 = new SoTransform();
SoTransform618->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape619 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance620 = new SoVRMLAppearance();
SoMaterial* SoMaterial621 = new SoMaterial();
SoMaterial621->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance620->addChild(*SoMaterial621);

SoShape619->addChild(*SoVRMLAppearance620);

SoIndexedFaceSet* SoIndexedFaceSet622 = new SoIndexedFaceSet();
SoIndexedFaceSet622->setCreaseAngle(0.5);
SoIndexedFaceSet622->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate623 = new SoCoordinate();
SoCoordinate623->setUSE(QString("points"));
SoIndexedFaceSet622->setCoord(*SoCoordinate623);

SoShape619->setGeometry(*SoIndexedFaceSet622);

SoTransform618->addChild(*SoShape619);

SoHAnimSegment617->addChild(*SoTransform618);

SoHAnimJoint616->addChildren(*SoHAnimSegment617);

SoHAnimJoint* SoHAnimJoint624 = new SoHAnimJoint();
SoHAnimJoint624->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint624->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint624->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment625 = new SoHAnimSegment();
SoHAnimSegment625->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimSegment625->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoTransform* SoTransform626 = new SoTransform();
SoTransform626->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape627 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance628 = new SoVRMLAppearance();
SoMaterial* SoMaterial629 = new SoMaterial();
SoMaterial629->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance628->addChild(*SoMaterial629);

SoShape627->addChild(*SoVRMLAppearance628);

SoIndexedFaceSet* SoIndexedFaceSet630 = new SoIndexedFaceSet();
SoIndexedFaceSet630->setCreaseAngle(0.5);
SoIndexedFaceSet630->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate631 = new SoCoordinate();
SoCoordinate631->setUSE(QString("points"));
SoIndexedFaceSet630->setCoord(*SoCoordinate631);

SoShape627->setGeometry(*SoIndexedFaceSet630);

SoTransform626->addChild(*SoShape627);

SoHAnimSegment625->addChild(*SoTransform626);

SoHAnimJoint624->addChildren(*SoHAnimSegment625);

SoHAnimJoint* SoHAnimJoint632 = new SoHAnimJoint();
SoHAnimJoint632->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint632->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint632->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment633 = new SoHAnimSegment();
SoHAnimSegment633->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimSegment633->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoTransform* SoTransform634 = new SoTransform();
SoTransform634->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape635 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance636 = new SoVRMLAppearance();
SoMaterial* SoMaterial637 = new SoMaterial();
SoMaterial637->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance636->addChild(*SoMaterial637);

SoShape635->addChild(*SoVRMLAppearance636);

SoIndexedFaceSet* SoIndexedFaceSet638 = new SoIndexedFaceSet();
SoIndexedFaceSet638->setCreaseAngle(0.5);
SoIndexedFaceSet638->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate639 = new SoCoordinate();
SoCoordinate639->setUSE(QString("points"));
SoIndexedFaceSet638->setCoord(*SoCoordinate639);

SoShape635->setGeometry(*SoIndexedFaceSet638);

SoTransform634->addChild(*SoShape635);

SoHAnimSegment633->addChild(*SoTransform634);

SoHAnimSite* SoHAnimSite640 = new SoHAnimSite();
SoHAnimSite640->setDEF(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite640->X3DNode::setName(QString("l_carpal_distal_phalanx_1_tip"));
SoHAnimSite640->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoShape* SoShape641 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance642 = new SoVRMLAppearance();
SoMaterial* SoMaterial643 = new SoMaterial();
SoMaterial643->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance642->addChild(*SoMaterial643);

SoShape641->addChild(*SoVRMLAppearance642);

SoIndexedFaceSet* SoIndexedFaceSet644 = new SoIndexedFaceSet();
SoIndexedFaceSet644->setCreaseAngle(0.5);
SoIndexedFaceSet644->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate645 = new SoCoordinate();
SoCoordinate645->setUSE(QString("points"));
SoIndexedFaceSet644->setCoord(*SoCoordinate645);

SoShape641->setGeometry(*SoIndexedFaceSet644);

SoHAnimSite640->addChild(*SoShape641);

SoHAnimSegment633->addChild(*SoHAnimSite640);

SoHAnimJoint632->addChildren(*SoHAnimSegment633);

SoHAnimJoint624->addChildren(*SoHAnimJoint632);

SoHAnimJoint616->addChildren(*SoHAnimJoint624);

SoHAnimJoint577->addChildren(*SoHAnimJoint616);

SoHAnimJoint* SoHAnimJoint646 = new SoHAnimJoint();
SoHAnimJoint646->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint646->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint646->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment647 = new SoHAnimSegment();
SoHAnimSegment647->setDEF(QString("hanim_l_metacarpal_2"));
SoHAnimSegment647->X3DNode::setName(QString("l_metacarpal_2"));
SoTransform* SoTransform648 = new SoTransform();
SoTransform648->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape649 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance650 = new SoVRMLAppearance();
SoMaterial* SoMaterial651 = new SoMaterial();
SoMaterial651->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance650->addChild(*SoMaterial651);

SoShape649->addChild(*SoVRMLAppearance650);

SoIndexedFaceSet* SoIndexedFaceSet652 = new SoIndexedFaceSet();
SoIndexedFaceSet652->setCreaseAngle(0.5);
SoIndexedFaceSet652->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate653 = new SoCoordinate();
SoCoordinate653->setUSE(QString("points"));
SoIndexedFaceSet652->setCoord(*SoCoordinate653);

SoShape649->setGeometry(*SoIndexedFaceSet652);

SoTransform648->addChild(*SoShape649);

SoHAnimSegment647->addChild(*SoTransform648);

SoHAnimJoint646->addChildren(*SoHAnimSegment647);

SoHAnimJoint* SoHAnimJoint654 = new SoHAnimJoint();
SoHAnimJoint654->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint654->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint654->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment655 = new SoHAnimSegment();
SoHAnimSegment655->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimSegment655->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoTransform* SoTransform656 = new SoTransform();
SoTransform656->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape657 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance658 = new SoVRMLAppearance();
SoMaterial* SoMaterial659 = new SoMaterial();
SoMaterial659->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance658->addChild(*SoMaterial659);

SoShape657->addChild(*SoVRMLAppearance658);

SoIndexedFaceSet* SoIndexedFaceSet660 = new SoIndexedFaceSet();
SoIndexedFaceSet660->setCreaseAngle(0.5);
SoIndexedFaceSet660->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate661 = new SoCoordinate();
SoCoordinate661->setUSE(QString("points"));
SoIndexedFaceSet660->setCoord(*SoCoordinate661);

SoShape657->setGeometry(*SoIndexedFaceSet660);

SoTransform656->addChild(*SoShape657);

SoHAnimSegment655->addChild(*SoTransform656);

SoHAnimJoint654->addChildren(*SoHAnimSegment655);

SoHAnimJoint* SoHAnimJoint662 = new SoHAnimJoint();
SoHAnimJoint662->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint662->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint662->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment663 = new SoHAnimSegment();
SoHAnimSegment663->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimSegment663->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoTransform* SoTransform664 = new SoTransform();
SoTransform664->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape665 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance666 = new SoVRMLAppearance();
SoMaterial* SoMaterial667 = new SoMaterial();
SoMaterial667->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance666->addChild(*SoMaterial667);

SoShape665->addChild(*SoVRMLAppearance666);

SoIndexedFaceSet* SoIndexedFaceSet668 = new SoIndexedFaceSet();
SoIndexedFaceSet668->setCreaseAngle(0.5);
SoIndexedFaceSet668->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate669 = new SoCoordinate();
SoCoordinate669->setUSE(QString("points"));
SoIndexedFaceSet668->setCoord(*SoCoordinate669);

SoShape665->setGeometry(*SoIndexedFaceSet668);

SoTransform664->addChild(*SoShape665);

SoHAnimSegment663->addChild(*SoTransform664);

SoHAnimJoint662->addChildren(*SoHAnimSegment663);

SoHAnimJoint* SoHAnimJoint670 = new SoHAnimJoint();
SoHAnimJoint670->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint670->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint670->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment671 = new SoHAnimSegment();
SoHAnimSegment671->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimSegment671->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoTransform* SoTransform672 = new SoTransform();
SoTransform672->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape673 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance674 = new SoVRMLAppearance();
SoMaterial* SoMaterial675 = new SoMaterial();
SoMaterial675->setUSE(QString("JOINT_COLOR"));
SoVRMLAppearance674->addChild(*SoMaterial675);

SoShape673->addChild(*SoVRMLAppearance674);

SoIndexedFaceSet* SoIndexedFaceSet676 = new SoIndexedFaceSet();
SoIndexedFaceSet676->setCreaseAngle(0.5);
SoIndexedFaceSet676->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate677 = new SoCoordinate();
SoCoordinate677->setUSE(QString("points"));
SoIndexedFaceSet676->setCoord(*SoCoordinate677);

SoShape673->setGeometry(*SoIndexedFaceSet676);

SoTransform672->addChild(*SoShape673);

SoHAnimSegment671->addChild(*SoTransform672);

SoHAnimSite* SoHAnimSite678 = new SoHAnimSite();
SoHAnimSite678->setDEF(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite678->X3DNode::setName(QString("l_carpal_distal_phalanx_2_tip"));
SoHAnimSite678->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoShape* SoShape679 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance680 = new SoVRMLAppearance();
SoMaterial* SoMaterial681 = new SoMaterial();
SoMaterial681->setUSE(QString("HAND_FEET_COLOR"));
SoVRMLAppearance680->addChild(*SoMaterial681);

SoShape679->addChild(*SoVRMLAppearance680);

SoIndexedFaceSet* SoIndexedFaceSet682 = new SoIndexedFaceSet();
SoIndexedFaceSet682->setCreaseAngle(0.5);
SoIndexedFaceSet682->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate683 = new SoCoordinate();
SoCoordinate683->setUSE(QString("points"));
SoIndexedFaceSet682->setCoord(*SoCoordinate683);

SoShape679->setGeometry(*SoIndexedFaceSet682);

SoHAnimSite678->addChild(*SoShape679);

SoHAnimSegment671->addChild(*SoHAnimSite678);

SoHAnimJoint670->addChildren(*SoHAnimSegment671);

SoHAnimJoint662->addChildren(*SoHAnimJoint670);

SoHAnimJoint654->addChildren(*SoHAnimJoint662);

SoHAnimJoint646->addChildren(*SoHAnimJoint654);

SoHAnimJoint577->addChildren(*SoHAnimJoint646);

SoHAnimJoint544->addChildren(*SoHAnimJoint577);

SoHAnimJoint529->addChildren(*SoHAnimJoint544);

SoHAnimJoint521->addChildren(*SoHAnimJoint529);

SoHAnimJoint* SoHAnimJoint684 = new SoHAnimJoint();
SoHAnimJoint684->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint684->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint684->setCenter(new float[]{-0.1907,1.4407,-0.0325});
SoHAnimSegment* SoHAnimSegment685 = new SoHAnimSegment();
SoHAnimSegment685->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment685->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform686 = new SoTransform();
SoTransform686->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoShape* SoShape687 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance688 = new SoVRMLAppearance();
SoMaterial* SoMaterial689 = new SoMaterial();
SoMaterial689->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance688->addChild(*SoMaterial689);

SoShape687->addChild(*SoVRMLAppearance688);

SoIndexedFaceSet* SoIndexedFaceSet690 = new SoIndexedFaceSet();
SoIndexedFaceSet690->setCreaseAngle(0.5);
SoIndexedFaceSet690->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate691 = new SoCoordinate();
SoCoordinate691->setUSE(QString("points"));
SoIndexedFaceSet690->setCoord(*SoCoordinate691);

SoShape687->setGeometry(*SoIndexedFaceSet690);

SoTransform686->addChild(*SoShape687);

SoHAnimSegment685->addChild(*SoTransform686);

SoTransform* SoTransform692 = new SoTransform();
SoTransform692->setDEF(QString("r_upperarm_adjust"));
SoTransform692->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoTransform692->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform692->setCenter(new float[]{-0.182,1.22,-0.047});
SoHAnimSegment685->addChild(*SoTransform692);

SoHAnimSite* SoHAnimSite693 = new SoHAnimSite();
SoHAnimSite693->setDEF(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite693->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite693->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoShape* SoShape694 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance695 = new SoVRMLAppearance();
SoMaterial* SoMaterial696 = new SoMaterial();
SoMaterial696->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance695->addChild(*SoMaterial696);

SoShape694->addChild(*SoVRMLAppearance695);

SoIndexedFaceSet* SoIndexedFaceSet697 = new SoIndexedFaceSet();
SoIndexedFaceSet697->setCreaseAngle(0.5);
SoIndexedFaceSet697->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate698 = new SoCoordinate();
SoCoordinate698->setUSE(QString("points"));
SoIndexedFaceSet697->setCoord(*SoCoordinate698);

SoShape694->setGeometry(*SoIndexedFaceSet697);

SoHAnimSite693->addChild(*SoShape694);

SoHAnimSegment685->addChild(*SoHAnimSite693);

SoHAnimJoint684->addChildren(*SoHAnimSegment685);

SoHAnimJoint* SoHAnimJoint699 = new SoHAnimJoint();
SoHAnimJoint699->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint699->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint699->setCenter(new float[]{-0.1949,1.1388,-0.062});
SoHAnimSegment* SoHAnimSegment700 = new SoHAnimSegment();
SoHAnimSegment700->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment700->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform701 = new SoTransform();
SoTransform701->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoShape* SoShape702 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance703 = new SoVRMLAppearance();
SoMaterial* SoMaterial704 = new SoMaterial();
SoMaterial704->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance703->addChild(*SoMaterial704);

SoShape702->addChild(*SoVRMLAppearance703);

SoIndexedFaceSet* SoIndexedFaceSet705 = new SoIndexedFaceSet();
SoIndexedFaceSet705->setCreaseAngle(0.5);
SoIndexedFaceSet705->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate706 = new SoCoordinate();
SoCoordinate706->setUSE(QString("points"));
SoIndexedFaceSet705->setCoord(*SoCoordinate706);

SoShape702->setGeometry(*SoIndexedFaceSet705);

SoTransform701->addChild(*SoShape702);

SoHAnimSegment700->addChild(*SoTransform701);

SoTransform* SoTransform707 = new SoTransform();
SoTransform707->setDEF(QString("r_forearm_adjust"));
SoTransform707->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoTransform707->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform707->setCenter(new float[]{-0.198,0.961,-0.0397});
SoHAnimSegment700->addChild(*SoTransform707);

SoHAnimSite* SoHAnimSite708 = new SoHAnimSite();
SoHAnimSite708->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite708->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite708->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoShape* SoShape709 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance710 = new SoVRMLAppearance();
SoMaterial* SoMaterial711 = new SoMaterial();
SoMaterial711->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance710->addChild(*SoMaterial711);

SoShape709->addChild(*SoVRMLAppearance710);

SoIndexedFaceSet* SoIndexedFaceSet712 = new SoIndexedFaceSet();
SoIndexedFaceSet712->setCreaseAngle(0.5);
SoIndexedFaceSet712->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate713 = new SoCoordinate();
SoCoordinate713->setUSE(QString("points"));
SoIndexedFaceSet712->setCoord(*SoCoordinate713);

SoShape709->setGeometry(*SoIndexedFaceSet712);

SoHAnimSite708->addChild(*SoShape709);

SoHAnimSegment700->addChild(*SoHAnimSite708);

SoHAnimSite* SoHAnimSite714 = new SoHAnimSite();
SoHAnimSite714->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite714->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite714->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoShape* SoShape715 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance716 = new SoVRMLAppearance();
SoMaterial* SoMaterial717 = new SoMaterial();
SoMaterial717->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance716->addChild(*SoMaterial717);

SoShape715->addChild(*SoVRMLAppearance716);

SoIndexedFaceSet* SoIndexedFaceSet718 = new SoIndexedFaceSet();
SoIndexedFaceSet718->setCreaseAngle(0.5);
SoIndexedFaceSet718->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate719 = new SoCoordinate();
SoCoordinate719->setUSE(QString("points"));
SoIndexedFaceSet718->setCoord(*SoCoordinate719);

SoShape715->setGeometry(*SoIndexedFaceSet718);

SoHAnimSite714->addChild(*SoShape715);

SoHAnimSegment700->addChild(*SoHAnimSite714);

SoHAnimSite* SoHAnimSite720 = new SoHAnimSite();
SoHAnimSite720->setDEF(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite720->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite720->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoShape* SoShape721 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance722 = new SoVRMLAppearance();
SoMaterial* SoMaterial723 = new SoMaterial();
SoMaterial723->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance722->addChild(*SoMaterial723);

SoShape721->addChild(*SoVRMLAppearance722);

SoIndexedFaceSet* SoIndexedFaceSet724 = new SoIndexedFaceSet();
SoIndexedFaceSet724->setCreaseAngle(0.5);
SoIndexedFaceSet724->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate725 = new SoCoordinate();
SoCoordinate725->setUSE(QString("points"));
SoIndexedFaceSet724->setCoord(*SoCoordinate725);

SoShape721->setGeometry(*SoIndexedFaceSet724);

SoHAnimSite720->addChild(*SoShape721);

SoHAnimSegment700->addChild(*SoHAnimSite720);

SoHAnimSite* SoHAnimSite726 = new SoHAnimSite();
SoHAnimSite726->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite726->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite726->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoShape* SoShape727 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance728 = new SoVRMLAppearance();
SoMaterial* SoMaterial729 = new SoMaterial();
SoMaterial729->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance728->addChild(*SoMaterial729);

SoShape727->addChild(*SoVRMLAppearance728);

SoIndexedFaceSet* SoIndexedFaceSet730 = new SoIndexedFaceSet();
SoIndexedFaceSet730->setCreaseAngle(0.5);
SoIndexedFaceSet730->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate731 = new SoCoordinate();
SoCoordinate731->setUSE(QString("points"));
SoIndexedFaceSet730->setCoord(*SoCoordinate731);

SoShape727->setGeometry(*SoIndexedFaceSet730);

SoHAnimSite726->addChild(*SoShape727);

SoHAnimSegment700->addChild(*SoHAnimSite726);

SoHAnimJoint699->addChildren(*SoHAnimSegment700);

SoHAnimJoint* SoHAnimJoint732 = new SoHAnimJoint();
SoHAnimJoint732->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint732->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint732->setCenter(new float[]{-0.1959,0.8694,-0.0521});
SoHAnimSegment* SoHAnimSegment733 = new SoHAnimSegment();
SoHAnimSegment733->setDEF(QString("hanim_r_carpal"));
SoHAnimSegment733->X3DNode::setName(QString("r_carpal"));
SoTransform* SoTransform734 = new SoTransform();
SoTransform734->setTranslation(new float[]{-0.1959,0.8694,-0.0521});
SoShape* SoShape735 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance736 = new SoVRMLAppearance();
SoMaterial* SoMaterial737 = new SoMaterial();
SoMaterial737->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance736->addChild(*SoMaterial737);

SoShape735->addChild(*SoVRMLAppearance736);

SoIndexedFaceSet* SoIndexedFaceSet738 = new SoIndexedFaceSet();
SoIndexedFaceSet738->setCreaseAngle(0.5);
SoIndexedFaceSet738->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate739 = new SoCoordinate();
SoCoordinate739->setUSE(QString("points"));
SoIndexedFaceSet738->setCoord(*SoCoordinate739);

SoShape735->setGeometry(*SoIndexedFaceSet738);

SoTransform734->addChild(*SoShape735);

SoHAnimSegment733->addChild(*SoTransform734);

SoTransform* SoTransform740 = new SoTransform();
SoTransform740->setDEF(QString("r_hand_adjust"));
SoTransform740->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform740->setCenter(new float[]{-0.217,0.811,-0.0338});
SoHAnimSegment733->addChild(*SoTransform740);

SoHAnimSite* SoHAnimSite741 = new SoHAnimSite();
SoHAnimSite741->setDEF(QString("hanim_r_hand_tip"));
SoHAnimSite741->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite741->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoShape* SoShape742 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance743 = new SoVRMLAppearance();
SoMaterial* SoMaterial744 = new SoMaterial();
SoMaterial744->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance743->addChild(*SoMaterial744);

SoShape742->addChild(*SoVRMLAppearance743);

SoIndexedFaceSet* SoIndexedFaceSet745 = new SoIndexedFaceSet();
SoIndexedFaceSet745->setCreaseAngle(0.5);
SoIndexedFaceSet745->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate746 = new SoCoordinate();
SoCoordinate746->setUSE(QString("points"));
SoIndexedFaceSet745->setCoord(*SoCoordinate746);

SoShape742->setGeometry(*SoIndexedFaceSet745);

SoHAnimSite741->addChild(*SoShape742);

SoHAnimSegment733->addChild(*SoHAnimSite741);

SoHAnimSite* SoHAnimSite747 = new SoHAnimSite();
SoHAnimSite747->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite747->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite747->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoShape* SoShape748 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance749 = new SoVRMLAppearance();
SoMaterial* SoMaterial750 = new SoMaterial();
SoMaterial750->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance749->addChild(*SoMaterial750);

SoShape748->addChild(*SoVRMLAppearance749);

SoIndexedFaceSet* SoIndexedFaceSet751 = new SoIndexedFaceSet();
SoIndexedFaceSet751->setCreaseAngle(0.5);
SoIndexedFaceSet751->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate752 = new SoCoordinate();
SoCoordinate752->setUSE(QString("points"));
SoIndexedFaceSet751->setCoord(*SoCoordinate752);

SoShape748->setGeometry(*SoIndexedFaceSet751);

SoHAnimSite747->addChild(*SoShape748);

SoHAnimSegment733->addChild(*SoHAnimSite747);

SoHAnimSite* SoHAnimSite753 = new SoHAnimSite();
SoHAnimSite753->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite753->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite753->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoShape* SoShape754 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance755 = new SoVRMLAppearance();
SoMaterial* SoMaterial756 = new SoMaterial();
SoMaterial756->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance755->addChild(*SoMaterial756);

SoShape754->addChild(*SoVRMLAppearance755);

SoIndexedFaceSet* SoIndexedFaceSet757 = new SoIndexedFaceSet();
SoIndexedFaceSet757->setCreaseAngle(0.5);
SoIndexedFaceSet757->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate758 = new SoCoordinate();
SoCoordinate758->setUSE(QString("points"));
SoIndexedFaceSet757->setCoord(*SoCoordinate758);

SoShape754->setGeometry(*SoIndexedFaceSet757);

SoHAnimSite753->addChild(*SoShape754);

SoHAnimSegment733->addChild(*SoHAnimSite753);

SoHAnimSite* SoHAnimSite759 = new SoHAnimSite();
SoHAnimSite759->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite759->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite759->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoShape* SoShape760 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance761 = new SoVRMLAppearance();
SoMaterial* SoMaterial762 = new SoMaterial();
SoMaterial762->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance761->addChild(*SoMaterial762);

SoShape760->addChild(*SoVRMLAppearance761);

SoIndexedFaceSet* SoIndexedFaceSet763 = new SoIndexedFaceSet();
SoIndexedFaceSet763->setCreaseAngle(0.5);
SoIndexedFaceSet763->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate764 = new SoCoordinate();
SoCoordinate764->setUSE(QString("points"));
SoIndexedFaceSet763->setCoord(*SoCoordinate764);

SoShape760->setGeometry(*SoIndexedFaceSet763);

SoHAnimSite759->addChild(*SoShape760);

SoHAnimSegment733->addChild(*SoHAnimSite759);

SoHAnimSite* SoHAnimSite765 = new SoHAnimSite();
SoHAnimSite765->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite765->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite765->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoShape* SoShape766 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance767 = new SoVRMLAppearance();
SoMaterial* SoMaterial768 = new SoMaterial();
SoMaterial768->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance767->addChild(*SoMaterial768);

SoShape766->addChild(*SoVRMLAppearance767);

SoIndexedFaceSet* SoIndexedFaceSet769 = new SoIndexedFaceSet();
SoIndexedFaceSet769->setCreaseAngle(0.5);
SoIndexedFaceSet769->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate770 = new SoCoordinate();
SoCoordinate770->setUSE(QString("points"));
SoIndexedFaceSet769->setCoord(*SoCoordinate770);

SoShape766->setGeometry(*SoIndexedFaceSet769);

SoHAnimSite765->addChild(*SoShape766);

SoHAnimSegment733->addChild(*SoHAnimSite765);

SoHAnimJoint732->addChildren(*SoHAnimSegment733);

SoHAnimJoint699->addChildren(*SoHAnimJoint732);

SoHAnimJoint684->addChildren(*SoHAnimJoint699);

SoHAnimJoint521->addChildren(*SoHAnimJoint684);

SoHAnimJoint* SoHAnimJoint771 = new SoHAnimJoint();
SoHAnimJoint771->setDEF(QString("hanim_vc7"));
SoHAnimJoint771->X3DNode::setName(QString("vc7"));
SoHAnimJoint771->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment772 = new SoHAnimSegment();
SoHAnimSegment772->setDEF(QString("hanim_c7"));
SoHAnimSegment772->X3DNode::setName(QString("c7"));
SoTransform* SoTransform773 = new SoTransform();
SoTransform773->setTranslation(new float[]{0.0066,1.5132,-0.0301});
SoShape* SoShape774 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance775 = new SoVRMLAppearance();
SoMaterial* SoMaterial776 = new SoMaterial();
SoMaterial776->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance775->addChild(*SoMaterial776);

SoShape774->addChild(*SoVRMLAppearance775);

SoIndexedFaceSet* SoIndexedFaceSet777 = new SoIndexedFaceSet();
SoIndexedFaceSet777->setCreaseAngle(0.5);
SoIndexedFaceSet777->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate778 = new SoCoordinate();
SoCoordinate778->setUSE(QString("points"));
SoIndexedFaceSet777->setCoord(*SoCoordinate778);

SoShape774->setGeometry(*SoIndexedFaceSet777);

SoTransform773->addChild(*SoShape774);

SoHAnimSegment772->addChild(*SoTransform773);

SoHAnimJoint771->addChildren(*SoHAnimSegment772);

SoHAnimJoint* SoHAnimJoint779 = new SoHAnimJoint();
SoHAnimJoint779->setDEF(QString("hanim_vc6"));
SoHAnimJoint779->X3DNode::setName(QString("vc6"));
SoHAnimJoint779->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment780 = new SoHAnimSegment();
SoHAnimSegment780->setDEF(QString("hanim_c6"));
SoHAnimSegment780->X3DNode::setName(QString("c6"));
SoTransform* SoTransform781 = new SoTransform();
SoTransform781->setTranslation(new float[]{0.0066,1.5357,-0.0143});
SoShape* SoShape782 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance783 = new SoVRMLAppearance();
SoMaterial* SoMaterial784 = new SoMaterial();
SoMaterial784->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance783->addChild(*SoMaterial784);

SoShape782->addChild(*SoVRMLAppearance783);

SoIndexedFaceSet* SoIndexedFaceSet785 = new SoIndexedFaceSet();
SoIndexedFaceSet785->setCreaseAngle(0.5);
SoIndexedFaceSet785->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate786 = new SoCoordinate();
SoCoordinate786->setUSE(QString("points"));
SoIndexedFaceSet785->setCoord(*SoCoordinate786);

SoShape782->setGeometry(*SoIndexedFaceSet785);

SoTransform781->addChild(*SoShape782);

SoHAnimSegment780->addChild(*SoTransform781);

SoHAnimJoint779->addChildren(*SoHAnimSegment780);

SoHAnimJoint* SoHAnimJoint787 = new SoHAnimJoint();
SoHAnimJoint787->setDEF(QString("hanim_vc5"));
SoHAnimJoint787->X3DNode::setName(QString("vc5"));
SoHAnimJoint787->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment788 = new SoHAnimSegment();
SoHAnimSegment788->setDEF(QString("hanim_c5"));
SoHAnimSegment788->X3DNode::setName(QString("c5"));
SoTransform* SoTransform789 = new SoTransform();
SoTransform789->setTranslation(new float[]{0.0066,1.552,-0.0082});
SoShape* SoShape790 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance791 = new SoVRMLAppearance();
SoMaterial* SoMaterial792 = new SoMaterial();
SoMaterial792->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance791->addChild(*SoMaterial792);

SoShape790->addChild(*SoVRMLAppearance791);

SoIndexedFaceSet* SoIndexedFaceSet793 = new SoIndexedFaceSet();
SoIndexedFaceSet793->setCreaseAngle(0.5);
SoIndexedFaceSet793->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate794 = new SoCoordinate();
SoCoordinate794->setUSE(QString("points"));
SoIndexedFaceSet793->setCoord(*SoCoordinate794);

SoShape790->setGeometry(*SoIndexedFaceSet793);

SoTransform789->addChild(*SoShape790);

SoHAnimSegment788->addChild(*SoTransform789);

SoHAnimJoint787->addChildren(*SoHAnimSegment788);

SoHAnimJoint* SoHAnimJoint795 = new SoHAnimJoint();
SoHAnimJoint795->setDEF(QString("hanim_vc4"));
SoHAnimJoint795->X3DNode::setName(QString("vc4"));
SoHAnimJoint795->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment796 = new SoHAnimSegment();
SoHAnimSegment796->setDEF(QString("hanim_c4"));
SoHAnimSegment796->X3DNode::setName(QString("c4"));
SoTransform* SoTransform797 = new SoTransform();
SoTransform797->setTranslation(new float[]{0.0066,1.5662,-0.0084});
SoShape* SoShape798 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance799 = new SoVRMLAppearance();
SoMaterial* SoMaterial800 = new SoMaterial();
SoMaterial800->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance799->addChild(*SoMaterial800);

SoShape798->addChild(*SoVRMLAppearance799);

SoIndexedFaceSet* SoIndexedFaceSet801 = new SoIndexedFaceSet();
SoIndexedFaceSet801->setCreaseAngle(0.5);
SoIndexedFaceSet801->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate802 = new SoCoordinate();
SoCoordinate802->setUSE(QString("points"));
SoIndexedFaceSet801->setCoord(*SoCoordinate802);

SoShape798->setGeometry(*SoIndexedFaceSet801);

SoTransform797->addChild(*SoShape798);

SoHAnimSegment796->addChild(*SoTransform797);

SoHAnimJoint795->addChildren(*SoHAnimSegment796);

SoHAnimJoint* SoHAnimJoint803 = new SoHAnimJoint();
SoHAnimJoint803->setDEF(QString("hanim_vc3"));
SoHAnimJoint803->X3DNode::setName(QString("vc3"));
SoHAnimJoint803->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment804 = new SoHAnimSegment();
SoHAnimSegment804->setDEF(QString("hanim_c3"));
SoHAnimSegment804->X3DNode::setName(QString("c3"));
SoTransform* SoTransform805 = new SoTransform();
SoTransform805->setTranslation(new float[]{0.0066,1.58,-0.0103});
SoShape* SoShape806 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance807 = new SoVRMLAppearance();
SoMaterial* SoMaterial808 = new SoMaterial();
SoMaterial808->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance807->addChild(*SoMaterial808);

SoShape806->addChild(*SoVRMLAppearance807);

SoIndexedFaceSet* SoIndexedFaceSet809 = new SoIndexedFaceSet();
SoIndexedFaceSet809->setCreaseAngle(0.5);
SoIndexedFaceSet809->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate810 = new SoCoordinate();
SoCoordinate810->setUSE(QString("points"));
SoIndexedFaceSet809->setCoord(*SoCoordinate810);

SoShape806->setGeometry(*SoIndexedFaceSet809);

SoTransform805->addChild(*SoShape806);

SoHAnimSegment804->addChild(*SoTransform805);

SoHAnimJoint803->addChildren(*SoHAnimSegment804);

SoHAnimJoint* SoHAnimJoint811 = new SoHAnimJoint();
SoHAnimJoint811->setDEF(QString("hanim_vc2"));
SoHAnimJoint811->X3DNode::setName(QString("vc2"));
SoHAnimJoint811->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment812 = new SoHAnimSegment();
SoHAnimSegment812->setDEF(QString("hanim_c2"));
SoHAnimSegment812->X3DNode::setName(QString("c2"));
SoTransform* SoTransform813 = new SoTransform();
SoTransform813->setTranslation(new float[]{0.0066,1.5928,-0.0103});
SoShape* SoShape814 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance815 = new SoVRMLAppearance();
SoMaterial* SoMaterial816 = new SoMaterial();
SoMaterial816->setUSE(QString("REC_SPINAL_COLOR"));
SoVRMLAppearance815->addChild(*SoMaterial816);

SoShape814->addChild(*SoVRMLAppearance815);

SoIndexedFaceSet* SoIndexedFaceSet817 = new SoIndexedFaceSet();
SoIndexedFaceSet817->setCreaseAngle(0.5);
SoIndexedFaceSet817->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate818 = new SoCoordinate();
SoCoordinate818->setUSE(QString("points"));
SoIndexedFaceSet817->setCoord(*SoCoordinate818);

SoShape814->setGeometry(*SoIndexedFaceSet817);

SoTransform813->addChild(*SoShape814);

SoHAnimSegment812->addChild(*SoTransform813);

SoHAnimJoint811->addChildren(*SoHAnimSegment812);

SoHAnimJoint* SoHAnimJoint819 = new SoHAnimJoint();
SoHAnimJoint819->setDEF(QString("hanim_vc1"));
SoHAnimJoint819->X3DNode::setName(QString("vc1"));
SoHAnimJoint819->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment820 = new SoHAnimSegment();
SoHAnimSegment820->setDEF(QString("hanim_c1"));
SoHAnimSegment820->X3DNode::setName(QString("c1"));
SoTransform* SoTransform821 = new SoTransform();
SoTransform821->setTranslation(new float[]{0.0066,1.6144,-0.0034});
SoShape* SoShape822 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance823 = new SoVRMLAppearance();
SoMaterial* SoMaterial824 = new SoMaterial();
SoMaterial824->setUSE(QString("SPINAL_COLOR"));
SoVRMLAppearance823->addChild(*SoMaterial824);

SoShape822->addChild(*SoVRMLAppearance823);

SoIndexedFaceSet* SoIndexedFaceSet825 = new SoIndexedFaceSet();
SoIndexedFaceSet825->setCreaseAngle(0.5);
SoIndexedFaceSet825->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate826 = new SoCoordinate();
SoCoordinate826->setUSE(QString("points"));
SoIndexedFaceSet825->setCoord(*SoCoordinate826);

SoShape822->setGeometry(*SoIndexedFaceSet825);

SoTransform821->addChild(*SoShape822);

SoHAnimSegment820->addChild(*SoTransform821);

SoHAnimJoint819->addChildren(*SoHAnimSegment820);

SoHAnimJoint* SoHAnimJoint827 = new SoHAnimJoint();
SoHAnimJoint827->setDEF(QString("hanim_skullbase"));
SoHAnimJoint827->X3DNode::setName(QString("skullbase"));
SoHAnimJoint827->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment828 = new SoHAnimSegment();
SoHAnimSegment828->setDEF(QString("hanim_skull"));
SoHAnimSegment828->X3DNode::setName(QString("skull"));
SoTransform* SoTransform829 = new SoTransform();
SoTransform829->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape830 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance831 = new SoVRMLAppearance();
SoMaterial* SoMaterial832 = new SoMaterial();
SoMaterial832->setUSE(QString("MIN_COLOR"));
SoVRMLAppearance831->addChild(*SoMaterial832);

SoShape830->addChild(*SoVRMLAppearance831);

SoIndexedFaceSet* SoIndexedFaceSet833 = new SoIndexedFaceSet();
SoIndexedFaceSet833->setCreaseAngle(0.5);
SoIndexedFaceSet833->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate834 = new SoCoordinate();
SoCoordinate834->setUSE(QString("points"));
SoIndexedFaceSet833->setCoord(*SoCoordinate834);

SoShape830->setGeometry(*SoIndexedFaceSet833);

SoTransform829->addChild(*SoShape830);

SoHAnimSegment828->addChild(*SoTransform829);

SoHAnimSite* SoHAnimSite835 = new SoHAnimSite();
SoHAnimSite835->setDEF(QString("hanim_skull_vertex_tip"));
SoHAnimSite835->X3DNode::setName(QString("skull_vertex_tip"));
SoHAnimSite835->setTranslation(new float[]{0.005,1.7504,0.0055});
SoShape* SoShape836 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance837 = new SoVRMLAppearance();
SoMaterial* SoMaterial838 = new SoMaterial();
SoMaterial838->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance837->addChild(*SoMaterial838);

SoShape836->addChild(*SoVRMLAppearance837);

SoIndexedFaceSet* SoIndexedFaceSet839 = new SoIndexedFaceSet();
SoIndexedFaceSet839->setCreaseAngle(0.5);
SoIndexedFaceSet839->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate840 = new SoCoordinate();
SoCoordinate840->setUSE(QString("points"));
SoIndexedFaceSet839->setCoord(*SoCoordinate840);

SoShape836->setGeometry(*SoIndexedFaceSet839);

SoHAnimSite835->addChild(*SoShape836);

SoHAnimSegment828->addChild(*SoHAnimSite835);

SoHAnimSite* SoHAnimSite841 = new SoHAnimSite();
SoHAnimSite841->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite841->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite841->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoShape* SoShape842 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance843 = new SoVRMLAppearance();
SoMaterial* SoMaterial844 = new SoMaterial();
SoMaterial844->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance843->addChild(*SoMaterial844);

SoShape842->addChild(*SoVRMLAppearance843);

SoIndexedFaceSet* SoIndexedFaceSet845 = new SoIndexedFaceSet();
SoIndexedFaceSet845->setCreaseAngle(0.5);
SoIndexedFaceSet845->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate846 = new SoCoordinate();
SoCoordinate846->setUSE(QString("points"));
SoIndexedFaceSet845->setCoord(*SoCoordinate846);

SoShape842->setGeometry(*SoIndexedFaceSet845);

SoHAnimSite841->addChild(*SoShape842);

SoHAnimSegment828->addChild(*SoHAnimSite841);

SoHAnimSite* SoHAnimSite847 = new SoHAnimSite();
SoHAnimSite847->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite847->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite847->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoShape* SoShape848 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance849 = new SoVRMLAppearance();
SoMaterial* SoMaterial850 = new SoMaterial();
SoMaterial850->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance849->addChild(*SoMaterial850);

SoShape848->addChild(*SoVRMLAppearance849);

SoIndexedFaceSet* SoIndexedFaceSet851 = new SoIndexedFaceSet();
SoIndexedFaceSet851->setCreaseAngle(0.5);
SoIndexedFaceSet851->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate852 = new SoCoordinate();
SoCoordinate852->setUSE(QString("points"));
SoIndexedFaceSet851->setCoord(*SoCoordinate852);

SoShape848->setGeometry(*SoIndexedFaceSet851);

SoHAnimSite847->addChild(*SoShape848);

SoHAnimSegment828->addChild(*SoHAnimSite847);

SoHAnimSite* SoHAnimSite853 = new SoHAnimSite();
SoHAnimSite853->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite853->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite853->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoShape* SoShape854 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance855 = new SoVRMLAppearance();
SoMaterial* SoMaterial856 = new SoMaterial();
SoMaterial856->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance855->addChild(*SoMaterial856);

SoShape854->addChild(*SoVRMLAppearance855);

SoIndexedFaceSet* SoIndexedFaceSet857 = new SoIndexedFaceSet();
SoIndexedFaceSet857->setCreaseAngle(0.5);
SoIndexedFaceSet857->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate858 = new SoCoordinate();
SoCoordinate858->setUSE(QString("points"));
SoIndexedFaceSet857->setCoord(*SoCoordinate858);

SoShape854->setGeometry(*SoIndexedFaceSet857);

SoHAnimSite853->addChild(*SoShape854);

SoHAnimSegment828->addChild(*SoHAnimSite853);

SoHAnimSite* SoHAnimSite859 = new SoHAnimSite();
SoHAnimSite859->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite859->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite859->setTranslation(new float[]{0.0061,1.541,0.0805});
SoShape* SoShape860 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance861 = new SoVRMLAppearance();
SoMaterial* SoMaterial862 = new SoMaterial();
SoMaterial862->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance861->addChild(*SoMaterial862);

SoShape860->addChild(*SoVRMLAppearance861);

SoIndexedFaceSet* SoIndexedFaceSet863 = new SoIndexedFaceSet();
SoIndexedFaceSet863->setCreaseAngle(0.5);
SoIndexedFaceSet863->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate864 = new SoCoordinate();
SoCoordinate864->setUSE(QString("points"));
SoIndexedFaceSet863->setCoord(*SoCoordinate864);

SoShape860->setGeometry(*SoIndexedFaceSet863);

SoHAnimSite859->addChild(*SoShape860);

SoHAnimSegment828->addChild(*SoHAnimSite859);

SoHAnimSite* SoHAnimSite865 = new SoHAnimSite();
SoHAnimSite865->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite865->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite865->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoShape* SoShape866 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance867 = new SoVRMLAppearance();
SoMaterial* SoMaterial868 = new SoMaterial();
SoMaterial868->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance867->addChild(*SoMaterial868);

SoShape866->addChild(*SoVRMLAppearance867);

SoIndexedFaceSet* SoIndexedFaceSet869 = new SoIndexedFaceSet();
SoIndexedFaceSet869->setCreaseAngle(0.5);
SoIndexedFaceSet869->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate870 = new SoCoordinate();
SoCoordinate870->setUSE(QString("points"));
SoIndexedFaceSet869->setCoord(*SoCoordinate870);

SoShape866->setGeometry(*SoIndexedFaceSet869);

SoHAnimSite865->addChild(*SoShape866);

SoHAnimSegment828->addChild(*SoHAnimSite865);

SoHAnimSite* SoHAnimSite871 = new SoHAnimSite();
SoHAnimSite871->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite871->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite871->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoShape* SoShape872 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance873 = new SoVRMLAppearance();
SoMaterial* SoMaterial874 = new SoMaterial();
SoMaterial874->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance873->addChild(*SoMaterial874);

SoShape872->addChild(*SoVRMLAppearance873);

SoIndexedFaceSet* SoIndexedFaceSet875 = new SoIndexedFaceSet();
SoIndexedFaceSet875->setCreaseAngle(0.5);
SoIndexedFaceSet875->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate876 = new SoCoordinate();
SoCoordinate876->setUSE(QString("points"));
SoIndexedFaceSet875->setCoord(*SoCoordinate876);

SoShape872->setGeometry(*SoIndexedFaceSet875);

SoHAnimSite871->addChild(*SoShape872);

SoHAnimSegment828->addChild(*SoHAnimSite871);

SoHAnimSite* SoHAnimSite877 = new SoHAnimSite();
SoHAnimSite877->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite877->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite877->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoShape* SoShape878 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance879 = new SoVRMLAppearance();
SoMaterial* SoMaterial880 = new SoMaterial();
SoMaterial880->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance879->addChild(*SoMaterial880);

SoShape878->addChild(*SoVRMLAppearance879);

SoIndexedFaceSet* SoIndexedFaceSet881 = new SoIndexedFaceSet();
SoIndexedFaceSet881->setCreaseAngle(0.5);
SoIndexedFaceSet881->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate882 = new SoCoordinate();
SoCoordinate882->setUSE(QString("points"));
SoIndexedFaceSet881->setCoord(*SoCoordinate882);

SoShape878->setGeometry(*SoIndexedFaceSet881);

SoHAnimSite877->addChild(*SoShape878);

SoHAnimSegment828->addChild(*SoHAnimSite877);

SoHAnimSite* SoHAnimSite883 = new SoHAnimSite();
SoHAnimSite883->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite883->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite883->setTranslation(new float[]{0.0631,1.553,0.033});
SoShape* SoShape884 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance885 = new SoVRMLAppearance();
SoMaterial* SoMaterial886 = new SoMaterial();
SoMaterial886->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance885->addChild(*SoMaterial886);

SoShape884->addChild(*SoVRMLAppearance885);

SoIndexedFaceSet* SoIndexedFaceSet887 = new SoIndexedFaceSet();
SoIndexedFaceSet887->setCreaseAngle(0.5);
SoIndexedFaceSet887->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate888 = new SoCoordinate();
SoCoordinate888->setUSE(QString("points"));
SoIndexedFaceSet887->setCoord(*SoCoordinate888);

SoShape884->setGeometry(*SoIndexedFaceSet887);

SoHAnimSite883->addChild(*SoShape884);

SoHAnimSegment828->addChild(*SoHAnimSite883);

SoHAnimSite* SoHAnimSite889 = new SoHAnimSite();
SoHAnimSite889->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite889->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite889->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoShape* SoShape890 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance891 = new SoVRMLAppearance();
SoMaterial* SoMaterial892 = new SoMaterial();
SoMaterial892->setUSE(QString("SITE_COLOR"));
SoVRMLAppearance891->addChild(*SoMaterial892);

SoShape890->addChild(*SoVRMLAppearance891);

SoIndexedFaceSet* SoIndexedFaceSet893 = new SoIndexedFaceSet();
SoIndexedFaceSet893->setCreaseAngle(0.5);
SoIndexedFaceSet893->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate894 = new SoCoordinate();
SoCoordinate894->setUSE(QString("points"));
SoIndexedFaceSet893->setCoord(*SoCoordinate894);

SoShape890->setGeometry(*SoIndexedFaceSet893);

SoHAnimSite889->addChild(*SoShape890);

SoHAnimSegment828->addChild(*SoHAnimSite889);

SoHAnimJoint827->addChildren(*SoHAnimSegment828);

SoHAnimJoint819->addChildren(*SoHAnimJoint827);

SoHAnimJoint811->addChildren(*SoHAnimJoint819);

SoHAnimJoint803->addChildren(*SoHAnimJoint811);

SoHAnimJoint795->addChildren(*SoHAnimJoint803);

SoHAnimJoint787->addChildren(*SoHAnimJoint795);

SoHAnimJoint779->addChildren(*SoHAnimJoint787);

SoHAnimJoint771->addChildren(*SoHAnimJoint779);

SoHAnimJoint521->addChildren(*SoHAnimJoint771);

SoHAnimJoint513->addChildren(*SoHAnimJoint521);

SoHAnimJoint505->addChildren(*SoHAnimJoint513);

SoHAnimJoint497->addChildren(*SoHAnimJoint505);

SoHAnimJoint489->addChildren(*SoHAnimJoint497);

SoHAnimJoint481->addChildren(*SoHAnimJoint489);

SoHAnimJoint473->addChildren(*SoHAnimJoint481);

SoHAnimJoint465->addChildren(*SoHAnimJoint473);

SoHAnimJoint457->addChildren(*SoHAnimJoint465);

SoHAnimJoint449->addChildren(*SoHAnimJoint457);

SoHAnimJoint441->addChildren(*SoHAnimJoint449);

SoHAnimJoint433->addChildren(*SoHAnimJoint441);

SoHAnimJoint425->addChildren(*SoHAnimJoint433);

SoHAnimJoint417->addChildren(*SoHAnimJoint425);

SoHAnimJoint409->addChildren(*SoHAnimJoint417);

SoHAnimJoint401->addChildren(*SoHAnimJoint409);

SoHAnimJoint393->addChildren(*SoHAnimJoint401);

SoHAnimJoint98->addChildren(*SoHAnimJoint393);

SoHAnimHumanoid93->setSkeleton(*SoHAnimJoint98);

SoHAnimJoint* SoHAnimJoint895 = new SoHAnimJoint();
SoHAnimJoint895->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint895);

SoHAnimJoint* SoHAnimJoint896 = new SoHAnimJoint();
SoHAnimJoint896->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint896);

SoHAnimJoint* SoHAnimJoint897 = new SoHAnimJoint();
SoHAnimJoint897->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint897);

SoHAnimJoint* SoHAnimJoint898 = new SoHAnimJoint();
SoHAnimJoint898->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint898);

SoHAnimJoint* SoHAnimJoint899 = new SoHAnimJoint();
SoHAnimJoint899->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint899);

SoHAnimJoint* SoHAnimJoint900 = new SoHAnimJoint();
SoHAnimJoint900->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint900);

SoHAnimJoint* SoHAnimJoint901 = new SoHAnimJoint();
SoHAnimJoint901->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint901);

SoHAnimJoint* SoHAnimJoint902 = new SoHAnimJoint();
SoHAnimJoint902->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint902);

SoHAnimJoint* SoHAnimJoint903 = new SoHAnimJoint();
SoHAnimJoint903->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint903);

SoHAnimJoint* SoHAnimJoint904 = new SoHAnimJoint();
SoHAnimJoint904->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint904);

SoHAnimJoint* SoHAnimJoint905 = new SoHAnimJoint();
SoHAnimJoint905->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint905);

SoHAnimJoint* SoHAnimJoint906 = new SoHAnimJoint();
SoHAnimJoint906->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint906);

SoHAnimJoint* SoHAnimJoint907 = new SoHAnimJoint();
SoHAnimJoint907->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint907);

SoHAnimJoint* SoHAnimJoint908 = new SoHAnimJoint();
SoHAnimJoint908->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint908);

SoHAnimJoint* SoHAnimJoint909 = new SoHAnimJoint();
SoHAnimJoint909->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint909);

SoHAnimJoint* SoHAnimJoint910 = new SoHAnimJoint();
SoHAnimJoint910->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint910);

SoHAnimJoint* SoHAnimJoint911 = new SoHAnimJoint();
SoHAnimJoint911->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint911);

SoHAnimJoint* SoHAnimJoint912 = new SoHAnimJoint();
SoHAnimJoint912->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint912);

SoHAnimJoint* SoHAnimJoint913 = new SoHAnimJoint();
SoHAnimJoint913->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint913);

SoHAnimJoint* SoHAnimJoint914 = new SoHAnimJoint();
SoHAnimJoint914->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint914);

SoHAnimJoint* SoHAnimJoint915 = new SoHAnimJoint();
SoHAnimJoint915->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint915);

SoHAnimJoint* SoHAnimJoint916 = new SoHAnimJoint();
SoHAnimJoint916->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint916);

SoHAnimJoint* SoHAnimJoint917 = new SoHAnimJoint();
SoHAnimJoint917->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint917);

SoHAnimJoint* SoHAnimJoint918 = new SoHAnimJoint();
SoHAnimJoint918->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint918);

SoHAnimJoint* SoHAnimJoint919 = new SoHAnimJoint();
SoHAnimJoint919->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint919);

SoHAnimJoint* SoHAnimJoint920 = new SoHAnimJoint();
SoHAnimJoint920->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint920);

SoHAnimJoint* SoHAnimJoint921 = new SoHAnimJoint();
SoHAnimJoint921->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint921);

SoHAnimJoint* SoHAnimJoint922 = new SoHAnimJoint();
SoHAnimJoint922->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint922);

SoHAnimJoint* SoHAnimJoint923 = new SoHAnimJoint();
SoHAnimJoint923->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint923);

SoHAnimJoint* SoHAnimJoint924 = new SoHAnimJoint();
SoHAnimJoint924->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint924);

SoHAnimJoint* SoHAnimJoint925 = new SoHAnimJoint();
SoHAnimJoint925->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint925);

SoHAnimJoint* SoHAnimJoint926 = new SoHAnimJoint();
SoHAnimJoint926->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint926);

SoHAnimJoint* SoHAnimJoint927 = new SoHAnimJoint();
SoHAnimJoint927->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint927);

SoHAnimJoint* SoHAnimJoint928 = new SoHAnimJoint();
SoHAnimJoint928->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint928);

SoHAnimJoint* SoHAnimJoint929 = new SoHAnimJoint();
SoHAnimJoint929->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint929);

SoHAnimJoint* SoHAnimJoint930 = new SoHAnimJoint();
SoHAnimJoint930->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint930);

SoHAnimJoint* SoHAnimJoint931 = new SoHAnimJoint();
SoHAnimJoint931->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint931);

SoHAnimJoint* SoHAnimJoint932 = new SoHAnimJoint();
SoHAnimJoint932->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint932);

SoHAnimJoint* SoHAnimJoint933 = new SoHAnimJoint();
SoHAnimJoint933->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint933);

SoHAnimJoint* SoHAnimJoint934 = new SoHAnimJoint();
SoHAnimJoint934->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint934);

SoHAnimJoint* SoHAnimJoint935 = new SoHAnimJoint();
SoHAnimJoint935->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint935);

SoHAnimJoint* SoHAnimJoint936 = new SoHAnimJoint();
SoHAnimJoint936->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint936);

SoHAnimJoint* SoHAnimJoint937 = new SoHAnimJoint();
SoHAnimJoint937->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint937);

SoHAnimJoint* SoHAnimJoint938 = new SoHAnimJoint();
SoHAnimJoint938->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint938);

SoHAnimJoint* SoHAnimJoint939 = new SoHAnimJoint();
SoHAnimJoint939->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint939);

SoHAnimJoint* SoHAnimJoint940 = new SoHAnimJoint();
SoHAnimJoint940->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint940);

SoHAnimJoint* SoHAnimJoint941 = new SoHAnimJoint();
SoHAnimJoint941->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint941);

SoHAnimJoint* SoHAnimJoint942 = new SoHAnimJoint();
SoHAnimJoint942->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint942);

SoHAnimJoint* SoHAnimJoint943 = new SoHAnimJoint();
SoHAnimJoint943->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint943);

SoHAnimJoint* SoHAnimJoint944 = new SoHAnimJoint();
SoHAnimJoint944->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid93->setJoints(*SoHAnimJoint944);

SoHAnimSegment* SoHAnimSegment945 = new SoHAnimSegment();
SoHAnimSegment945->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment945);

SoHAnimSegment* SoHAnimSegment946 = new SoHAnimSegment();
SoHAnimSegment946->setUSE(QString("hanim_c7"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment946);

SoHAnimSegment* SoHAnimSegment947 = new SoHAnimSegment();
SoHAnimSegment947->setUSE(QString("hanim_c4"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment947);

SoHAnimSegment* SoHAnimSegment948 = new SoHAnimSegment();
SoHAnimSegment948->setUSE(QString("hanim_skull"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment948);

SoHAnimSegment* SoHAnimSegment949 = new SoHAnimSegment();
SoHAnimSegment949->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment949);

SoHAnimSegment* SoHAnimSegment950 = new SoHAnimSegment();
SoHAnimSegment950->setUSE(QString("hanim_l5"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment950);

SoHAnimSegment* SoHAnimSegment951 = new SoHAnimSegment();
SoHAnimSegment951->setUSE(QString("hanim_l4"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment951);

SoHAnimSegment* SoHAnimSegment952 = new SoHAnimSegment();
SoHAnimSegment952->setUSE(QString("hanim_l3"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment952);

SoHAnimSegment* SoHAnimSegment953 = new SoHAnimSegment();
SoHAnimSegment953->setUSE(QString("hanim_l2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment953);

SoHAnimSegment* SoHAnimSegment954 = new SoHAnimSegment();
SoHAnimSegment954->setUSE(QString("hanim_l1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment954);

SoHAnimSegment* SoHAnimSegment955 = new SoHAnimSegment();
SoHAnimSegment955->setUSE(QString("hanim_t12"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment955);

SoHAnimSegment* SoHAnimSegment956 = new SoHAnimSegment();
SoHAnimSegment956->setUSE(QString("hanim_t11"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment956);

SoHAnimSegment* SoHAnimSegment957 = new SoHAnimSegment();
SoHAnimSegment957->setUSE(QString("hanim_t10"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment957);

SoHAnimSegment* SoHAnimSegment958 = new SoHAnimSegment();
SoHAnimSegment958->setUSE(QString("hanim_t9"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment958);

SoHAnimSegment* SoHAnimSegment959 = new SoHAnimSegment();
SoHAnimSegment959->setUSE(QString("hanim_t8"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment959);

SoHAnimSegment* SoHAnimSegment960 = new SoHAnimSegment();
SoHAnimSegment960->setUSE(QString("hanim_t7"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment960);

SoHAnimSegment* SoHAnimSegment961 = new SoHAnimSegment();
SoHAnimSegment961->setUSE(QString("hanim_t6"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment961);

SoHAnimSegment* SoHAnimSegment962 = new SoHAnimSegment();
SoHAnimSegment962->setUSE(QString("hanim_t5"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment962);

SoHAnimSegment* SoHAnimSegment963 = new SoHAnimSegment();
SoHAnimSegment963->setUSE(QString("hanim_t4"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment963);

SoHAnimSegment* SoHAnimSegment964 = new SoHAnimSegment();
SoHAnimSegment964->setUSE(QString("hanim_t3"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment964);

SoHAnimSegment* SoHAnimSegment965 = new SoHAnimSegment();
SoHAnimSegment965->setUSE(QString("hanim_t2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment965);

SoHAnimSegment* SoHAnimSegment966 = new SoHAnimSegment();
SoHAnimSegment966->setUSE(QString("hanim_t1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment966);

SoHAnimSegment* SoHAnimSegment967 = new SoHAnimSegment();
SoHAnimSegment967->setUSE(QString("hanim_c6"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment967);

SoHAnimSegment* SoHAnimSegment968 = new SoHAnimSegment();
SoHAnimSegment968->setUSE(QString("hanim_c5"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment968);

SoHAnimSegment* SoHAnimSegment969 = new SoHAnimSegment();
SoHAnimSegment969->setUSE(QString("hanim_c3"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment969);

SoHAnimSegment* SoHAnimSegment970 = new SoHAnimSegment();
SoHAnimSegment970->setUSE(QString("hanim_c2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment970);

SoHAnimSegment* SoHAnimSegment971 = new SoHAnimSegment();
SoHAnimSegment971->setUSE(QString("hanim_c1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment971);

SoHAnimSegment* SoHAnimSegment972 = new SoHAnimSegment();
SoHAnimSegment972->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment972);

SoHAnimSegment* SoHAnimSegment973 = new SoHAnimSegment();
SoHAnimSegment973->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment973);

SoHAnimSegment* SoHAnimSegment974 = new SoHAnimSegment();
SoHAnimSegment974->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment974);

SoHAnimSegment* SoHAnimSegment975 = new SoHAnimSegment();
SoHAnimSegment975->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment975);

SoHAnimSegment* SoHAnimSegment976 = new SoHAnimSegment();
SoHAnimSegment976->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment976);

SoHAnimSegment* SoHAnimSegment977 = new SoHAnimSegment();
SoHAnimSegment977->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment977);

SoHAnimSegment* SoHAnimSegment978 = new SoHAnimSegment();
SoHAnimSegment978->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment978);

SoHAnimSegment* SoHAnimSegment979 = new SoHAnimSegment();
SoHAnimSegment979->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment979);

SoHAnimSegment* SoHAnimSegment980 = new SoHAnimSegment();
SoHAnimSegment980->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment980);

SoHAnimSegment* SoHAnimSegment981 = new SoHAnimSegment();
SoHAnimSegment981->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment981);

SoHAnimSegment* SoHAnimSegment982 = new SoHAnimSegment();
SoHAnimSegment982->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment982);

SoHAnimSegment* SoHAnimSegment983 = new SoHAnimSegment();
SoHAnimSegment983->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment983);

SoHAnimSegment* SoHAnimSegment984 = new SoHAnimSegment();
SoHAnimSegment984->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment984);

SoHAnimSegment* SoHAnimSegment985 = new SoHAnimSegment();
SoHAnimSegment985->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment985);

SoHAnimSegment* SoHAnimSegment986 = new SoHAnimSegment();
SoHAnimSegment986->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment986);

SoHAnimSegment* SoHAnimSegment987 = new SoHAnimSegment();
SoHAnimSegment987->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment987);

SoHAnimSegment* SoHAnimSegment988 = new SoHAnimSegment();
SoHAnimSegment988->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment988);

SoHAnimSegment* SoHAnimSegment989 = new SoHAnimSegment();
SoHAnimSegment989->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment989);

SoHAnimSegment* SoHAnimSegment990 = new SoHAnimSegment();
SoHAnimSegment990->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment990);

SoHAnimSegment* SoHAnimSegment991 = new SoHAnimSegment();
SoHAnimSegment991->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment991);

SoHAnimSegment* SoHAnimSegment992 = new SoHAnimSegment();
SoHAnimSegment992->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment992);

SoHAnimSegment* SoHAnimSegment993 = new SoHAnimSegment();
SoHAnimSegment993->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment993);

SoHAnimSegment* SoHAnimSegment994 = new SoHAnimSegment();
SoHAnimSegment994->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid93->setSegments(*SoHAnimSegment994);

SoHAnimSite* SoHAnimSite995 = new SoHAnimSite();
SoHAnimSite995->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite995);

SoHAnimSite* SoHAnimSite996 = new SoHAnimSite();
SoHAnimSite996->setUSE(QString("hanim_skull_vertex_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite996);

SoHAnimSite* SoHAnimSite997 = new SoHAnimSite();
SoHAnimSite997->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite997);

SoHAnimSite* SoHAnimSite998 = new SoHAnimSite();
SoHAnimSite998->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite998);

SoHAnimSite* SoHAnimSite999 = new SoHAnimSite();
SoHAnimSite999->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite999);

SoHAnimSite* SoHAnimSite1000 = new SoHAnimSite();
SoHAnimSite1000->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1000);

SoHAnimSite* SoHAnimSite1001 = new SoHAnimSite();
SoHAnimSite1001->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1001);

SoHAnimSite* SoHAnimSite1002 = new SoHAnimSite();
SoHAnimSite1002->setUSE(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1002);

SoHAnimSite* SoHAnimSite1003 = new SoHAnimSite();
SoHAnimSite1003->setUSE(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1003);

SoHAnimSite* SoHAnimSite1004 = new SoHAnimSite();
SoHAnimSite1004->setUSE(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1004);

SoHAnimSite* SoHAnimSite1005 = new SoHAnimSite();
SoHAnimSite1005->setUSE(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1005);

SoHAnimSite* SoHAnimSite1006 = new SoHAnimSite();
SoHAnimSite1006->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1006);

SoHAnimSite* SoHAnimSite1007 = new SoHAnimSite();
SoHAnimSite1007->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1007);

SoHAnimSite* SoHAnimSite1008 = new SoHAnimSite();
SoHAnimSite1008->setUSE(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1008);

SoHAnimSite* SoHAnimSite1009 = new SoHAnimSite();
SoHAnimSite1009->setUSE(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1009);

SoHAnimSite* SoHAnimSite1010 = new SoHAnimSite();
SoHAnimSite1010->setUSE(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1010);

SoHAnimSite* SoHAnimSite1011 = new SoHAnimSite();
SoHAnimSite1011->setUSE(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1011);

SoHAnimSite* SoHAnimSite1012 = new SoHAnimSite();
SoHAnimSite1012->setUSE(QString("hanim_l_forefoot_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1012);

SoHAnimSite* SoHAnimSite1013 = new SoHAnimSite();
SoHAnimSite1013->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1013);

SoHAnimSite* SoHAnimSite1014 = new SoHAnimSite();
SoHAnimSite1014->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1014);

SoHAnimSite* SoHAnimSite1015 = new SoHAnimSite();
SoHAnimSite1015->setUSE(QString("hanim_l_hand_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1015);

SoHAnimSite* SoHAnimSite1016 = new SoHAnimSite();
SoHAnimSite1016->setUSE(QString("hanim_r_hand_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1016);

SoHAnimSite* SoHAnimSite1017 = new SoHAnimSite();
SoHAnimSite1017->setUSE(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1017);

SoHAnimSite* SoHAnimSite1018 = new SoHAnimSite();
SoHAnimSite1018->setUSE(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1018);

SoHAnimSite* SoHAnimSite1019 = new SoHAnimSite();
SoHAnimSite1019->setUSE(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1019);

SoHAnimSite* SoHAnimSite1020 = new SoHAnimSite();
SoHAnimSite1020->setUSE(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1020);

SoHAnimSite* SoHAnimSite1021 = new SoHAnimSite();
SoHAnimSite1021->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1021);

SoHAnimSite* SoHAnimSite1022 = new SoHAnimSite();
SoHAnimSite1022->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1022);

SoHAnimSite* SoHAnimSite1023 = new SoHAnimSite();
SoHAnimSite1023->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1023);

SoHAnimSite* SoHAnimSite1024 = new SoHAnimSite();
SoHAnimSite1024->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1024);

SoHAnimSite* SoHAnimSite1025 = new SoHAnimSite();
SoHAnimSite1025->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1025);

SoHAnimSite* SoHAnimSite1026 = new SoHAnimSite();
SoHAnimSite1026->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1026);

SoHAnimSite* SoHAnimSite1027 = new SoHAnimSite();
SoHAnimSite1027->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1027);

SoHAnimSite* SoHAnimSite1028 = new SoHAnimSite();
SoHAnimSite1028->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1028);

SoHAnimSite* SoHAnimSite1029 = new SoHAnimSite();
SoHAnimSite1029->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1029);

SoHAnimSite* SoHAnimSite1030 = new SoHAnimSite();
SoHAnimSite1030->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1030);

SoHAnimSite* SoHAnimSite1031 = new SoHAnimSite();
SoHAnimSite1031->setUSE(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1031);

SoHAnimSite* SoHAnimSite1032 = new SoHAnimSite();
SoHAnimSite1032->setUSE(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1032);

SoHAnimSite* SoHAnimSite1033 = new SoHAnimSite();
SoHAnimSite1033->setUSE(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1033);

SoHAnimSite* SoHAnimSite1034 = new SoHAnimSite();
SoHAnimSite1034->setUSE(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1034);

SoHAnimSite* SoHAnimSite1035 = new SoHAnimSite();
SoHAnimSite1035->setUSE(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1035);

SoHAnimSite* SoHAnimSite1036 = new SoHAnimSite();
SoHAnimSite1036->setUSE(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1036);

SoHAnimSite* SoHAnimSite1037 = new SoHAnimSite();
SoHAnimSite1037->setUSE(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1037);

SoHAnimSite* SoHAnimSite1038 = new SoHAnimSite();
SoHAnimSite1038->setUSE(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1038);

SoHAnimSite* SoHAnimSite1039 = new SoHAnimSite();
SoHAnimSite1039->setUSE(QString("hanim_l_middistal_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1039);

SoHAnimSite* SoHAnimSite1040 = new SoHAnimSite();
SoHAnimSite1040->setUSE(QString("hanim_r_middistal_tip"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1040);

SoHAnimSite* SoHAnimSite1041 = new SoHAnimSite();
SoHAnimSite1041->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1041);

SoHAnimSite* SoHAnimSite1042 = new SoHAnimSite();
SoHAnimSite1042->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1042);

SoHAnimSite* SoHAnimSite1043 = new SoHAnimSite();
SoHAnimSite1043->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1043);

SoHAnimSite* SoHAnimSite1044 = new SoHAnimSite();
SoHAnimSite1044->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1044);

SoHAnimSite* SoHAnimSite1045 = new SoHAnimSite();
SoHAnimSite1045->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1045);

SoHAnimSite* SoHAnimSite1046 = new SoHAnimSite();
SoHAnimSite1046->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1046);

SoHAnimSite* SoHAnimSite1047 = new SoHAnimSite();
SoHAnimSite1047->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1047);

SoHAnimSite* SoHAnimSite1048 = new SoHAnimSite();
SoHAnimSite1048->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1048);

SoHAnimSite* SoHAnimSite1049 = new SoHAnimSite();
SoHAnimSite1049->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1049);

SoHAnimSite* SoHAnimSite1050 = new SoHAnimSite();
SoHAnimSite1050->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1050);

SoHAnimSite* SoHAnimSite1051 = new SoHAnimSite();
SoHAnimSite1051->setUSE(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1051);

SoHAnimSite* SoHAnimSite1052 = new SoHAnimSite();
SoHAnimSite1052->setUSE(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1052);

SoHAnimSite* SoHAnimSite1053 = new SoHAnimSite();
SoHAnimSite1053->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1053);

SoHAnimSite* SoHAnimSite1054 = new SoHAnimSite();
SoHAnimSite1054->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1054);

SoHAnimSite* SoHAnimSite1055 = new SoHAnimSite();
SoHAnimSite1055->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1055);

SoHAnimSite* SoHAnimSite1056 = new SoHAnimSite();
SoHAnimSite1056->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1056);

SoHAnimSite* SoHAnimSite1057 = new SoHAnimSite();
SoHAnimSite1057->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1057);

SoHAnimSite* SoHAnimSite1058 = new SoHAnimSite();
SoHAnimSite1058->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid93->setSites(*SoHAnimSite1058);

SoHAnimSite* SoHAnimSite1059 = new SoHAnimSite();
SoHAnimSite1059->setDEF(QString("hanim_DiamondManLOA2_view"));
SoHAnimSite1059->X3DNode::setName(QString("DiamondManLOA2_view"));
SoViewpoint* SoViewpoint1060 = new SoViewpoint();
SoViewpoint1060->setDEF(QString("FrontView"));
SoViewpoint1060->setDescription(QString("Front View"));
SoViewpoint1060->setPosition(new float[]{0.35,0.854,2.57665});
SoHAnimSite1059->addChild(*SoViewpoint1060);

SoViewpoint* SoViewpoint1061 = new SoViewpoint();
SoViewpoint1061->setDEF(QString("SideView"));
SoViewpoint1061->setDescription(QString("Side View"));
SoViewpoint1061->setPosition(new float[]{2.0,0.854,0.0});
SoViewpoint1061->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoHAnimSite1059->addChild(*SoViewpoint1061);

SoViewpoint* SoViewpoint1062 = new SoViewpoint();
SoViewpoint1062->setDEF(QString("TopView"));
SoViewpoint1062->setDescription(QString("Top View"));
SoViewpoint1062->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint1062->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoHAnimSite1059->addChild(*SoViewpoint1062);

SoViewpoint* SoViewpoint1063 = new SoViewpoint();
SoViewpoint1063->setDEF(QString("RootView"));
SoViewpoint1063->setDescription(QString("Humanoid Root View"));
SoViewpoint1063->setPosition(new float[]{0.0,0.824,0.277});
SoHAnimSite1059->addChild(*SoViewpoint1063);

SoViewpoint* SoViewpoint1064 = new SoViewpoint();
SoViewpoint1064->setDEF(QString("InclinedView"));
SoViewpoint1064->setDescription(QString("Inclined View"));
SoViewpoint1064->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint1064->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoHAnimSite1059->addChild(*SoViewpoint1064);

SoHAnimHumanoid93->setViewpoints(*SoHAnimSite1059);

SoNode16->addChild(*SoHAnimHumanoid93);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
