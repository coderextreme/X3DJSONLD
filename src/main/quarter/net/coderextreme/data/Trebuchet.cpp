
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
Someta2->setContent(QString("Trebuchet.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Working model of a 14th century Trebuchet Catapult."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("LT Joe Roth"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("20 June 2001"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("version"));
Someta7->setContent(QString("7.8"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("identifier"));
Someta8->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("http://trebuchet.com"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://members.home.net/dimona"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("subject"));
Someta11->setContent(QString("trebuchet catapult Monty Python"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoWorldInfo* SoWorldInfo18 = new SoWorldInfo();
SoWorldInfo18->setTitle(QString("Trebuchet.x3d"));
SoNode17->addChild(*SoWorldInfo18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setBackUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg")}, 1);
SoBackground19->setBottomUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg")}, 1);
SoBackground19->setFrontUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg")}, 1);
SoBackground19->setGroundAngle(new float[]{1.309,1.570796}, 2);
SoBackground19->setGroundColor(new float[]{0.1,0.1,0.0,0.4,0.25,0.2,0.6,0.6,0.6}, 9);
SoBackground19->setLeftUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg")}, 1);
SoBackground19->setRightUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg")}, 1);
SoBackground19->setSkyAngle(new float[]{1.309,1.57079}, 2);
SoBackground19->setSkyColor(new float[]{0.0,0.2,0.7,0.0,0.5,1.0,1.0,1.0,1.0}, 9);
SoBackground19->setTopUrl(new QString[]{QString("https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg")}, 1);
SoNode17->addChild(*SoBackground19);

SoSound* SoSound20 = new SoSound();
SoSound20->setMaxBack(1000);
SoSound20->setMaxFront(1000);
SoAudioClip* SoAudioClip21 = new SoAudioClip();
SoAudioClip21->setDEF(QString("HolyGrail"));
SoAudioClip21->setDescription(QString("HolyGrail"));
SoAudioClip21->setLoop(true);
SoAudioClip21->setUrl(new QString[]{QString("holygral.mp3"), QString("http://www.nps.navy.mil/code32/vrml/holygral.mp3")}, 2);
SoSound20->setSource(*SoAudioClip21);

SoNode17->addChild(*SoSound20);

SoShape* SoShape22 = new SoShape();
SoBox* SoBox23 = new SoBox();
SoBox23->setSize(new float[]{10000.0,1.0,10000.0});
SoShape22->setGeometry(*SoBox23);

SoVRMLAppearance* SoVRMLAppearance24 = new SoVRMLAppearance();
SoImageTexture* SoImageTexture25 = new SoImageTexture();
SoImageTexture25->setUrl(new QString[]{QString("grass.jpg"), QString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg")}, 2);
SoVRMLAppearance24->addChild(*SoImageTexture25);

SoShape22->addChild(*SoVRMLAppearance24);

SoNode17->addChild(*SoShape22);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform26->setScale(new float[]{0.5,0.5,0.5});
SoTransform26->setTranslation(new float[]{10.5,6.5,4.5});
SoShape* SoShape27 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoVRMLAppearance28->setDEF(QString("TextAppearance"));
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial29->setEmissiveColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance28->addChild(*SoMaterial29);

SoShape27->addChild(*SoVRMLAppearance28);

SoText* SoText30 = new SoText();
SoText30->setString(new QString[]{QString("Click Sling to Select Projectile")}, 1);
SoFontStyle* SoFontStyle31 = new SoFontStyle();
SoText30->setFontStyle(*SoFontStyle31);

SoShape27->setGeometry(*SoText30);

SoTransform26->addChild(*SoShape27);

SoNode17->addChild(*SoTransform26);

SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform32->setScale(new float[]{0.5,0.5,0.5});
SoTransform32->setTranslation(new float[]{11.0,5.5,6.0});
SoSwitch* SoSwitch33 = new SoSwitch();
SoSwitch33->setDEF(QString("Weight"));
SoSwitch33->setWhichChoice(0);
SoGroup* SoGroup34 = new SoGroup();
SoShape* SoShape35 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance36 = new SoVRMLAppearance();
SoVRMLAppearance36->setUSE(QString("TextAppearance"));
SoShape35->addChild(*SoVRMLAppearance36);

SoText* SoText37 = new SoText();
SoText37->setString(new QString[]{QString("Click Here to Change Counter Weight (50 lbs)")}, 1);
SoShape35->setGeometry(*SoText37);

SoGroup34->addChild(*SoShape35);

SoSwitch33->addChild(*SoGroup34);

SoGroup* SoGroup38 = new SoGroup();
SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoVRMLAppearance40->setUSE(QString("TextAppearance"));
SoShape39->addChild(*SoVRMLAppearance40);

SoText* SoText41 = new SoText();
SoText41->setString(new QString[]{QString("Click Here to Change Counter Weight (500 lbs)")}, 1);
SoShape39->setGeometry(*SoText41);

SoGroup38->addChild(*SoShape39);

SoSwitch33->addChild(*SoGroup38);

SoGroup* SoGroup42 = new SoGroup();
SoShape* SoShape43 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoVRMLAppearance44->setUSE(QString("TextAppearance"));
SoShape43->addChild(*SoVRMLAppearance44);

SoText* SoText45 = new SoText();
SoText45->setString(new QString[]{QString("Click Here to Change Counter Weight (1000 lbs)")}, 1);
SoShape43->setGeometry(*SoText45);

SoGroup42->addChild(*SoShape43);

SoSwitch33->addChild(*SoGroup42);

SoGroup* SoGroup46 = new SoGroup();
SoShape* SoShape47 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoVRMLAppearance48->setUSE(QString("TextAppearance"));
SoShape47->addChild(*SoVRMLAppearance48);

SoText* SoText49 = new SoText();
SoText49->setString(new QString[]{QString("Click Here to Change Counter Weight (10000 lbs)")}, 1);
SoShape47->setGeometry(*SoText49);

SoGroup46->addChild(*SoShape47);

SoSwitch33->addChild(*SoGroup46);

SoTransform32->addChild(*SoSwitch33);

SoTouchSensor* SoTouchSensor50 = new SoTouchSensor();
SoTouchSensor50->setDEF(QString("weightselector"));
SoTouchSensor50->setDescription(QString("weight selector"));
SoTransform32->addChild(*SoTouchSensor50);

SoTransform* SoTransform51 = new SoTransform();
SoTransform51->setTranslation(new float[]{8.0,0.0,0.0});
SoShape* SoShape52 = new SoShape();
SoBox* SoBox53 = new SoBox();
SoBox53->setSize(new float[]{20.0,1.0,1.0});
SoShape52->setGeometry(*SoBox53);

SoVRMLAppearance* SoVRMLAppearance54 = new SoVRMLAppearance();
SoMaterial* SoMaterial55 = new SoMaterial();
SoMaterial55->setTransparency(1);
SoVRMLAppearance54->addChild(*SoMaterial55);

SoShape52->addChild(*SoVRMLAppearance54);

SoTransform51->addChild(*SoShape52);

SoTransform32->addChild(*SoTransform51);

SoNode17->addChild(*SoTransform32);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform56->setTranslation(new float[]{10.0,0.5,4.5});
SoTransform* SoTransform57 = new SoTransform();
SoTransform57->setDEF(QString("launch"));
SoTransform57->setTranslation(new float[]{0.0,2.0,5.0});
SoBillboard* SoBillboard58 = new SoBillboard();
SoShape* SoShape59 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoMaterial* SoMaterial61 = new SoMaterial();
SoMaterial61->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance60->addChild(*SoMaterial61);

SoShape59->addChild(*SoVRMLAppearance60);

SoText* SoText62 = new SoText();
SoText62->setString(new QString[]{QString("LAUNCH")}, 1);
SoFontStyle* SoFontStyle63 = new SoFontStyle();
SoText62->setFontStyle(*SoFontStyle63);

SoShape59->setGeometry(*SoText62);

SoBillboard58->addChild(*SoShape59);

SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setTranslation(new float[]{2.0,0.3,0.0});
SoShape* SoShape65 = new SoShape();
SoBox* SoBox66 = new SoBox();
SoBox66->setSize(new float[]{5.0,1.0,1.0});
SoShape65->setGeometry(*SoBox66);

SoVRMLAppearance* SoVRMLAppearance67 = new SoVRMLAppearance();
SoMaterial* SoMaterial68 = new SoMaterial();
SoMaterial68->setTransparency(1);
SoVRMLAppearance67->addChild(*SoMaterial68);

SoShape65->addChild(*SoVRMLAppearance67);

SoTransform64->addChild(*SoShape65);

SoBillboard58->addChild(*SoTransform64);

SoSwitch* SoSwitch69 = new SoSwitch();
SoSwitch69->setDEF(QString("PigdogMonk"));
SoSwitch69->setWhichChoice(-1);
SoGroup* SoGroup70 = new SoGroup();
SoSound* SoSound71 = new SoSound();
SoSound71->setMaxBack(1000);
SoSound71->setMaxFront(1000);
SoAudioClip* SoAudioClip72 = new SoAudioClip();
SoAudioClip72->setDEF(QString("PigDogSound"));
SoAudioClip72->setDescription(QString("PigDogSound"));
SoAudioClip72->setUrl(new QString[]{QString("pigdog.wav"), QString("http://www.nps.navy.mil/code32/vrml/pigdog.wav")}, 2);
SoSound71->setSource(*SoAudioClip72);

SoGroup70->addChild(*SoSound71);

SoSwitch69->addChild(*SoGroup70);

SoGroup* SoGroup73 = new SoGroup();
SoSound* SoSound74 = new SoSound();
SoSound74->setMaxBack(1000);
SoSound74->setMaxFront(1000);
SoAudioClip* SoAudioClip75 = new SoAudioClip();
SoAudioClip75->setDEF(QString("MonkSound"));
SoAudioClip75->setDescription(QString("MonkSound"));
SoAudioClip75->setUrl(new QString[]{QString("monks.wav"), QString("http://www.nps.navy.mil/code32/vrml/monks.wav")}, 2);
SoSound74->setSource(*SoAudioClip75);

SoGroup73->addChild(*SoSound74);

SoSwitch69->addChild(*SoGroup73);

SoBillboard58->addChild(*SoSwitch69);

SoTransform57->addChild(*SoBillboard58);

SoTouchSensor* SoTouchSensor76 = new SoTouchSensor();
SoTouchSensor76->setDEF(QString("Launch"));
SoTouchSensor76->setDescription(QString("launch!"));
SoTransform57->addChild(*SoTouchSensor76);

SoTransform56->addChild(*SoTransform57);

SoTransform* SoTransform77 = new SoTransform();
SoSwitch* SoSwitch78 = new SoSwitch();
SoSwitch78->setDEF(QString("projectilename"));
SoSwitch78->setWhichChoice(0);
SoGroup* SoGroup79 = new SoGroup();
SoShape* SoShape80 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance81 = new SoVRMLAppearance();
SoVRMLAppearance81->setUSE(QString("TextAppearance"));
SoShape80->addChild(*SoVRMLAppearance81);

SoText* SoText82 = new SoText();
SoText82->setString(new QString[]{QString("Bowling Ball (10 lbs)")}, 1);
SoFontStyle* SoFontStyle83 = new SoFontStyle();
SoFontStyle83->setSize(0.5);
SoText82->setFontStyle(*SoFontStyle83);

SoShape80->setGeometry(*SoText82);

SoGroup79->addChild(*SoShape80);

SoSound* SoSound84 = new SoSound();
SoSound84->setMaxBack(1000);
SoSound84->setMaxFront(1000);
SoSound84->setPriority(1);
SoAudioClip* SoAudioClip85 = new SoAudioClip();
SoAudioClip85->setDEF(QString("HolyHandGrenadeSound"));
SoAudioClip85->setDescription(QString("HolyHandGrenadeSound"));
SoAudioClip85->setUrl(new QString[]{QString("grenade.wav"), QString("http://www.nps.navy.mil/code32/vrml/grenade.wav")}, 2);
SoSound84->setSource(*SoAudioClip85);

SoGroup79->addChild(*SoSound84);

SoSwitch78->addChild(*SoGroup79);

SoGroup* SoGroup86 = new SoGroup();
SoShape* SoShape87 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance88 = new SoVRMLAppearance();
SoVRMLAppearance88->setUSE(QString("TextAppearance"));
SoShape87->addChild(*SoVRMLAppearance88);

SoText* SoText89 = new SoText();
SoText89->setString(new QString[]{QString("Cow (1000 lbs)")}, 1);
SoFontStyle* SoFontStyle90 = new SoFontStyle();
SoFontStyle90->setSize(0.5);
SoText89->setFontStyle(*SoFontStyle90);

SoShape87->setGeometry(*SoText89);

SoGroup86->addChild(*SoShape87);

SoSound* SoSound91 = new SoSound();
SoSound91->setMaxBack(1000);
SoSound91->setMaxFront(1000);
SoAudioClip* SoAudioClip92 = new SoAudioClip();
SoAudioClip92->setDEF(QString("CowSound"));
SoAudioClip92->setDescription(QString("CowSound"));
SoAudioClip92->setUrl(new QString[]{QString("lavache.wav"), QString("http://www.nps.navy.mil/code32/vrml/lavache.wav")}, 2);
SoSound91->setSource(*SoAudioClip92);

SoGroup86->addChild(*SoSound91);

SoSwitch78->addChild(*SoGroup86);

SoGroup* SoGroup93 = new SoGroup();
SoShape* SoShape94 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance95 = new SoVRMLAppearance();
SoVRMLAppearance95->setUSE(QString("TextAppearance"));
SoShape94->addChild(*SoVRMLAppearance95);

SoText* SoText96 = new SoText();
SoText96->setString(new QString[]{QString("Chicken (5 lbs)")}, 1);
SoFontStyle* SoFontStyle97 = new SoFontStyle();
SoFontStyle97->setSize(0.5);
SoText96->setFontStyle(*SoFontStyle97);

SoShape94->setGeometry(*SoText96);

SoGroup93->addChild(*SoShape94);

SoSound* SoSound98 = new SoSound();
SoSound98->setMaxBack(1000);
SoSound98->setMaxFront(1000);
SoSound98->setPriority(1);
SoAudioClip* SoAudioClip99 = new SoAudioClip();
SoAudioClip99->setDEF(QString("HamsterSound"));
SoAudioClip99->setDescription(QString("HamsterSound"));
SoAudioClip99->setUrl(new QString[]{QString("hamster.wav"), QString("http://www.nps.navy.mil/code32/vrml/hamster.wav")}, 2);
SoSound98->setSource(*SoAudioClip99);

SoGroup93->addChild(*SoSound98);

SoSwitch78->addChild(*SoGroup93);

SoTransform77->addChild(*SoSwitch78);

SoTransform56->addChild(*SoTransform77);

SoNode17->addChild(*SoTransform56);

SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setRotation(new float[]{0.0,1.0,0.0,-1.67});
SoTransform* SoTransform101 = new SoTransform();
SoTransform101->setDEF(QString("aft"));
SoTransform101->setTranslation(new float[]{5.0,5.0,15.0});
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setTranslation(new float[]{-2.5,-4.5,-2.0});
SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setUSE(QString("launch"));
SoTransform102->addChild(*SoTransform103);

SoTransform101->addChild(*SoTransform102);

SoTransform100->addChild(*SoTransform101);

SoNode17->addChild(*SoTransform100);

SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{0.0,3.0,0.0});
SoShape* SoShape105 = new SoShape();
SoShape105->setDEF(QString("plank"));
SoBox* SoBox106 = new SoBox();
SoBox106->setSize(new float[]{25.0,1.0,1.0});
SoShape105->setGeometry(*SoBox106);

SoVRMLAppearance* SoVRMLAppearance107 = new SoVRMLAppearance();
SoVRMLAppearance107->setDEF(QString("wood"));
SoImageTexture* SoImageTexture108 = new SoImageTexture();
SoImageTexture108->setDEF(QString("woodTexture"));
SoImageTexture108->setUrl(new QString[]{QString("wood.gif"), QString("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif")}, 2);
SoVRMLAppearance107->addChild(*SoImageTexture108);

SoShape105->addChild(*SoVRMLAppearance107);

SoTransform104->addChild(*SoShape105);

SoTransform* SoTransform109 = new SoTransform();
SoTransform109->setDEF(QString("angledsupport"));
SoTransform109->setRotation(new float[]{0.0,0.0,1.0,1.0});
SoTransform109->setTranslation(new float[]{-5.0,10.0,0.0});
SoShape* SoShape110 = new SoShape();
SoShape110->setUSE(QString("plank"));
SoTransform109->addChild(*SoShape110);

SoTransform104->addChild(*SoTransform109);

SoTransform* SoTransform111 = new SoTransform();
SoTransform111->setDEF(QString("angledsupport2"));
SoTransform111->setRotation(new float[]{0.0,0.0,1.0,-1.0});
SoTransform111->setTranslation(new float[]{5.0,10.0,0.0});
SoShape* SoShape112 = new SoShape();
SoShape112->setUSE(QString("plank"));
SoTransform111->addChild(*SoShape112);

SoTransform104->addChild(*SoTransform111);

SoTransform* SoTransform113 = new SoTransform();
SoTransform113->setDEF(QString("verticalsupport"));
SoTransform113->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform113->setScale(new float[]{0.9,1.0,1.0});
SoTransform113->setTranslation(new float[]{0.0,11.0,0.0});
SoShape* SoShape114 = new SoShape();
SoShape114->setUSE(QString("plank"));
SoTransform113->addChild(*SoShape114);

//Main Verticle Support
SoTransform104->addChild(*SoTransform113);

SoTransform* SoTransform115 = new SoTransform();
SoTransform115->setDEF(QString("horizontalsupport"));
SoTransform115->setScale(new float[]{0.4,1.0,1.0});
SoTransform115->setTranslation(new float[]{0.0,10.0,0.0});
SoShape* SoShape116 = new SoShape();
SoShape116->setUSE(QString("plank"));
SoTransform115->addChild(*SoShape116);

SoTransform104->addChild(*SoTransform115);

SoTransform* SoTransform117 = new SoTransform();
SoTransform117->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform117->setScale(new float[]{0.6,1.0,1.0});
SoTransform117->setTranslation(new float[]{0.0,5.0,10.0});
SoTransform* SoTransform118 = new SoTransform();
SoTransform118->setRotation(new float[]{0.0,1.0,0.0,0.4});
SoShape* SoShape119 = new SoShape();
SoShape119->setUSE(QString("plank"));
SoTransform118->addChild(*SoShape119);

SoTransform117->addChild(*SoTransform118);

SoTransform104->addChild(*SoTransform117);

SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setDEF(QString("panel"));
SoTransform120->setTranslation(new float[]{0.0,18.2,-0.3});
SoShape* SoShape121 = new SoShape();
SoBox* SoBox122 = new SoBox();
SoBox122->setSize(new float[]{5.0,5.0,0.5});
SoShape121->setGeometry(*SoBox122);

SoVRMLAppearance* SoVRMLAppearance123 = new SoVRMLAppearance();
SoVRMLAppearance123->setUSE(QString("wood"));
SoShape121->addChild(*SoVRMLAppearance123);

SoTransform120->addChild(*SoShape121);

SoTransform104->addChild(*SoTransform120);

SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoTransform124->setTranslation(new float[]{0.0,0.6,2.5});
SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape126 = new SoShape();
SoExtrusion* SoExtrusion127 = new SoExtrusion();
SoExtrusion127->setBeginCap(false);
SoExtrusion127->setCrossSection(new float[]{1.0,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,-0.38,-1.0,-1.1,1.0,-1.1,1.0,-0.38}, 24);
SoExtrusion127->setEndCap(false);
SoExtrusion127->setSolid(false);
SoExtrusion127->setSpine(new float[]{0.0,6.0,0.0,0.0,-11.0,0.0}, 6);
SoShape126->setGeometry(*SoExtrusion127);

SoVRMLAppearance* SoVRMLAppearance128 = new SoVRMLAppearance();
SoVRMLAppearance128->setUSE(QString("wood"));
SoShape126->addChild(*SoVRMLAppearance128);

SoTransform125->addChild(*SoShape126);

SoTransform124->addChild(*SoTransform125);

SoTransform104->addChild(*SoTransform124);

SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setDEF(QString("flinger"));
SoTransform129->setCenter(new float[]{7.0,0.0,0.0});
SoTransform129->setRotation(new float[]{0.0,0.0,1.0,0.82});
SoTransform129->setScale(new float[]{0.9,1.0,1.0});
SoTransform129->setTranslation(new float[]{-7.0,18.0,2.5});
SoTransform* SoTransform130 = new SoTransform();
SoShape* SoShape131 = new SoShape();
SoBox* SoBox132 = new SoBox();
SoBox132->setSize(new float[]{35.0,1.0,1.0});
SoShape131->setGeometry(*SoBox132);

SoVRMLAppearance* SoVRMLAppearance133 = new SoVRMLAppearance();
SoVRMLAppearance133->setUSE(QString("wood"));
SoShape131->addChild(*SoVRMLAppearance133);

SoTransform130->addChild(*SoShape131);

SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{7.0,0.0,0.0});
SoShape* SoShape135 = new SoShape();
SoBox* SoBox136 = new SoBox();
SoBox136->setSize(new float[]{8.0,2.0,2.0});
SoShape135->setGeometry(*SoBox136);

SoVRMLAppearance* SoVRMLAppearance137 = new SoVRMLAppearance();
SoVRMLAppearance137->setUSE(QString("wood"));
SoShape135->addChild(*SoVRMLAppearance137);

SoTransform134->addChild(*SoShape135);

SoTransform130->addChild(*SoTransform134);

SoTransform129->addChild(*SoTransform130);

SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform138->setScale(new float[]{0.2,0.2,0.2});
SoTransform138->setTranslation(new float[]{-15.0,-1.0,0.0});
SoShape* SoShape139 = new SoShape();
SoShape139->setDEF(QString("Torus"));
SoVRMLAppearance* SoVRMLAppearance140 = new SoVRMLAppearance();
SoMaterial* SoMaterial141 = new SoMaterial();
SoMaterial141->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance140->addChild(*SoMaterial141);

SoShape139->addChild(*SoVRMLAppearance140);

SoExtrusion* SoExtrusion142 = new SoExtrusion();
SoExtrusion142->setBeginCap(false);
SoExtrusion142->setConvex(false);
SoExtrusion142->setCreaseAngle(1.57);
SoExtrusion142->setCrossSection(new float[]{0.9,0.0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0.0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0.0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0.0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0.0}, 34);
SoExtrusion142->setEndCap(false);
SoExtrusion142->setSpine(new float[]{2.0,0.0,0.0,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.0,0.0,2.0,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.0,0.0,0.0,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.0,0.0,-2.0,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.0,0.0,0.0}, 51);
SoShape139->setGeometry(*SoExtrusion142);

SoTransform138->addChild(*SoShape139);

SoTransform* SoTransform143 = new SoTransform();
SoTransform143->setTranslation(new float[]{1.0,0.0,2.0});
SoShape* SoShape144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance145 = new SoVRMLAppearance();
SoVRMLAppearance145->setDEF(QString("rope"));
SoImageTexture* SoImageTexture146 = new SoImageTexture();
SoImageTexture146->setUSE(QString("woodTexture"));
SoVRMLAppearance145->addChild(*SoImageTexture146);

SoShape144->addChild(*SoVRMLAppearance145);

SoSphere* SoSphere147 = new SoSphere();
SoSphere147->setRadius(1.5);
SoShape144->setGeometry(*SoSphere147);

SoTransform143->addChild(*SoShape144);

//knott
SoTransform138->addChild(*SoTransform143);

SoTransform129->addChild(*SoTransform138);

//The Unicorn
SoTransform* SoTransform148 = new SoTransform();
SoTransform148->setRotation(new float[]{0.0,0.0,1.0,1.2});
SoTransform148->setScale(new float[]{0.2,0.2,0.2});
SoTransform148->setTranslation(new float[]{-18.3,0.3,0.0});
SoShape* SoShape149 = new SoShape();
SoCylinder* SoCylinder150 = new SoCylinder();
SoCylinder150->setHeight(10);
SoShape149->setGeometry(*SoCylinder150);

SoVRMLAppearance* SoVRMLAppearance151 = new SoVRMLAppearance();
SoMaterial* SoMaterial152 = new SoMaterial();
SoMaterial152->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance151->addChild(*SoMaterial152);

SoShape149->addChild(*SoVRMLAppearance151);

SoTransform148->addChild(*SoShape149);

SoTransform* SoTransform153 = new SoTransform();
SoTransform153->setTranslation(new float[]{0.0,-2.5,0.0});
//The Unicorn
SoShape* SoShape154 = new SoShape();
SoShape154->setUSE(QString("Torus"));
SoTransform153->addChild(*SoShape154);

SoTransform* SoTransform155 = new SoTransform();
SoTransform155->setTranslation(new float[]{-2.0,0.0,0.0});
SoShape* SoShape156 = new SoShape();
SoSphere* SoSphere157 = new SoSphere();
SoSphere157->setRadius(1.5);
SoShape156->setGeometry(*SoSphere157);

SoVRMLAppearance* SoVRMLAppearance158 = new SoVRMLAppearance();
SoVRMLAppearance158->setUSE(QString("rope"));
SoShape156->addChild(*SoVRMLAppearance158);

SoTransform155->addChild(*SoShape156);

//Knott
SoTransform153->addChild(*SoTransform155);

SoTransform148->addChild(*SoTransform153);

SoTransform* SoTransform159 = new SoTransform();
SoTransform159->setRotation(new float[]{0.0,0.0,1.0,1.2});
SoTransform159->setTranslation(new float[]{15.0,55.0,-11.0});
SoTransform* SoTransform160 = new SoTransform();
SoTransform160->setScale(new float[]{5.0,5.0,5.0});
SoShape* SoShape161 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance162 = new SoVRMLAppearance();
SoVRMLAppearance162->setUSE(QString("rope"));
SoShape161->addChild(*SoVRMLAppearance162);

SoExtrusion* SoExtrusion163 = new SoExtrusion();
SoExtrusion163->setBeginCap(false);
SoExtrusion163->setCreaseAngle(0.76);
SoExtrusion163->setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
SoExtrusion163->setEndCap(false);
SoExtrusion163->setSolid(false);
SoExtrusion163->setSpine(new float[]{-15.2,1.4,2.2,-12.0,-0.8,2.2}, 6);
SoShape161->setGeometry(*SoExtrusion163);

SoTransform160->addChild(*SoShape161);

SoTransform159->addChild(*SoTransform160);

SoTransform148->addChild(*SoTransform159);

SoTransform129->addChild(*SoTransform148);

SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setRotation(new float[]{1.0,0.0,0.0,-1.7});
SoTransform164->setTranslation(new float[]{-17.0,-4.5,0.0});
SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setScale(new float[]{0.2,0.2,0.2});
//Knot
SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("Torus"));
SoTransform165->addChild(*SoShape166);

SoTransform* SoTransform167 = new SoTransform();
SoTransform167->setTranslation(new float[]{-1.0,0.0,1.7});
SoShape* SoShape168 = new SoShape();
SoSphere* SoSphere169 = new SoSphere();
SoSphere169->setRadius(1.5);
SoShape168->setGeometry(*SoSphere169);

SoVRMLAppearance* SoVRMLAppearance170 = new SoVRMLAppearance();
SoVRMLAppearance170->setUSE(QString("rope"));
SoShape168->addChild(*SoVRMLAppearance170);

SoTransform167->addChild(*SoShape168);

SoTransform165->addChild(*SoTransform167);

SoTransform164->addChild(*SoTransform165);

SoTransform129->addChild(*SoTransform164);

SoTransform* SoTransform171 = new SoTransform();
SoTransform171->setDEF(QString("RnS"));
SoTransform* SoTransform172 = new SoTransform();
SoTransform172->setDEF(QString("ropes"));
SoTransform* SoTransform173 = new SoTransform();
SoTransform173->setRotation(new float[]{0.0,0.0,1.0,-0.82});
SoTransform173->setTranslation(new float[]{7.0,-26.0,-2.5});
SoShape* SoShape174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance175 = new SoVRMLAppearance();
SoVRMLAppearance175->setUSE(QString("rope"));
SoShape174->addChild(*SoVRMLAppearance175);

SoExtrusion* SoExtrusion176 = new SoExtrusion();
SoExtrusion176->setBeginCap(false);
SoExtrusion176->setCreaseAngle(0.76);
SoExtrusion176->setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
SoExtrusion176->setEndCap(false);
SoExtrusion176->setSolid(false);
SoExtrusion176->setSpine(new float[]{-33.0,0.9,2.5,-18.5,1.9,2.55}, 6);
SoShape174->setGeometry(*SoExtrusion176);

SoTransform173->addChild(*SoShape174);

SoShape* SoShape177 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance178 = new SoVRMLAppearance();
SoVRMLAppearance178->setUSE(QString("rope"));
SoShape177->addChild(*SoVRMLAppearance178);

SoExtrusion* SoExtrusion179 = new SoExtrusion();
SoExtrusion179->setBeginCap(false);
SoExtrusion179->setCreaseAngle(0.76);
SoExtrusion179->setCrossSection(new float[]{0.1,0.0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0.0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0.0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0.0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0.0}, 34);
SoExtrusion179->setEndCap(false);
SoExtrusion179->setSolid(false);
SoExtrusion179->setSpine(new float[]{-35.7,-0.8,2.5,-18.8,-0.8,2.55}, 6);
SoShape177->setGeometry(*SoExtrusion179);

SoTransform173->addChild(*SoShape177);

SoTransform172->addChild(*SoTransform173);

SoTransform171->addChild(*SoTransform172);

SoTransform* SoTransform180 = new SoTransform();
SoTransform180->setDEF(QString("sling"));
SoTransform180->setRotation(new float[]{0.0,0.0,1.0,-0.82});
SoTransform180->setTranslation(new float[]{-4.0,-15.3,0.0});
SoTransform* SoTransform181 = new SoTransform();
SoTransform* SoTransform182 = new SoTransform();
SoTransform182->setRotation(new float[]{0.0,1.0,0.0,-1.57});
SoTransform182->setScale(new float[]{1.0,1.3,1.0});
SoTransform182->setTranslation(new float[]{0.5,0.0,-1.0});
SoTransform* SoTransform183 = new SoTransform();
SoTransform183->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setScale(new float[]{0.3,0.3,0.3});
SoShape* SoShape185 = new SoShape();
SoShape185->setDEF(QString("halfsling"));
SoVRMLAppearance* SoVRMLAppearance186 = new SoVRMLAppearance();
SoVRMLAppearance186->setDEF(QString("clear"));
SoMaterial* SoMaterial187 = new SoMaterial();
SoMaterial187->setTransparency(0.5);
SoVRMLAppearance186->addChild(*SoMaterial187);

SoShape185->addChild(*SoVRMLAppearance186);

SoExtrusion* SoExtrusion188 = new SoExtrusion();
SoExtrusion188->setCrossSection(new float[]{0.0,0.0,0.0,5.0,0.5,7.0,1.0,8.0,2.0,9.0,3.0,11.0,3.5,11.2,4.0,11.0,5.0,9.0,6.0,8.0,6.5,7.0,6.7,5.0,6.7,0.0,0.0,0.0}, 28);
SoExtrusion188->setSpine(new float[]{0.0,0.0,0.0,0.1,0.0,0.0}, 6);
SoShape185->setGeometry(*SoExtrusion188);

SoTransform184->addChild(*SoShape185);

SoTransform* SoTransform189 = new SoTransform();
SoTransform189->setScale(new float[]{0.3,0.3,0.3});
SoTransform189->setTranslation(new float[]{0.0,-3.5,11.5});
SoShape* SoShape190 = new SoShape();
SoShape190->setUSE(QString("Torus"));
SoTransform189->addChild(*SoShape190);

SoTransform* SoTransform191 = new SoTransform();
SoTransform191->setTranslation(new float[]{0.0,0.0,2.0});
SoShape* SoShape192 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance193 = new SoVRMLAppearance();
SoVRMLAppearance193->setUSE(QString("rope"));
SoShape192->addChild(*SoVRMLAppearance193);

SoSphere* SoSphere194 = new SoSphere();
SoSphere194->setRadius(1.5);
SoShape192->setGeometry(*SoSphere194);

SoTransform191->addChild(*SoShape192);

SoTransform189->addChild(*SoTransform191);

SoTransform184->addChild(*SoTransform189);

SoTransform183->addChild(*SoTransform184);

SoTransform* SoTransform195 = new SoTransform();
SoTransform195->setScale(new float[]{0.3,0.3,0.3});
SoTransform195->setTranslation(new float[]{2.0,0.0,0.0});
SoShape* SoShape196 = new SoShape();
SoShape196->setUSE(QString("halfsling"));
SoTransform195->addChild(*SoShape196);

SoTransform* SoTransform197 = new SoTransform();
SoTransform197->setScale(new float[]{0.3,0.3,0.3});
SoTransform197->setTranslation(new float[]{0.0,-3.5,11.3});
SoShape* SoShape198 = new SoShape();
SoShape198->setUSE(QString("Torus"));
SoTransform197->addChild(*SoShape198);

SoTransform* SoTransform199 = new SoTransform();
SoTransform199->setTranslation(new float[]{0.0,0.0,2.0});
SoShape* SoShape200 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance201 = new SoVRMLAppearance();
SoVRMLAppearance201->setUSE(QString("rope"));
SoShape200->addChild(*SoVRMLAppearance201);

SoSphere* SoSphere202 = new SoSphere();
SoSphere202->setRadius(1.5);
SoShape200->setGeometry(*SoSphere202);

SoTransform199->addChild(*SoShape200);

SoTransform197->addChild(*SoTransform199);

SoTransform195->addChild(*SoTransform197);

SoTransform183->addChild(*SoTransform195);

SoTransform* SoTransform203 = new SoTransform();
SoTransform203->setTranslation(new float[]{1.0,-1.0,0.0});
SoShape* SoShape204 = new SoShape();
SoExtrusion* SoExtrusion205 = new SoExtrusion();
SoExtrusion205->setBeginCap(false);
SoExtrusion205->setCreaseAngle(0.785);
SoExtrusion205->setCrossSection(new float[]{1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0}, 18);
SoExtrusion205->setEndCap(false);
SoExtrusion205->setSolid(false);
SoExtrusion205->setSpine(new float[]{0.0,-1.0,0.0,0.0,1.0,0.0}, 6);
SoShape204->setGeometry(*SoExtrusion205);

SoVRMLAppearance* SoVRMLAppearance206 = new SoVRMLAppearance();
SoVRMLAppearance206->setUSE(QString("clear"));
SoShape204->addChild(*SoVRMLAppearance206);

SoTransform203->addChild(*SoShape204);

SoTransform183->addChild(*SoTransform203);

SoTransform182->addChild(*SoTransform183);

SoTouchSensor* SoTouchSensor207 = new SoTouchSensor();
SoTouchSensor207->setDEF(QString("LauncheeChoice"));
SoTouchSensor207->setDescription(QString("launcher choice"));
SoTransform182->addChild(*SoTouchSensor207);

SoTransform181->addChild(*SoTransform182);

SoTransform* SoTransform208 = new SoTransform();
SoTransform208->setDEF(QString("projectiletransform"));
SoTransform208->setScale(new float[]{0.01,0.01,0.01});
SoSwitch* SoSwitch209 = new SoSwitch();
SoSwitch209->setDEF(QString("projectile"));
SoSwitch209->setWhichChoice(0);
SoGroup* SoGroup210 = new SoGroup();
SoTransform* SoTransform211 = new SoTransform();
SoTransform211->setTranslation(new float[]{0.0,0.7,0.0});
SoShape* SoShape212 = new SoShape();
SoSphere* SoSphere213 = new SoSphere();
SoSphere213->setRadius(0.7);
SoShape212->setGeometry(*SoSphere213);

SoVRMLAppearance* SoVRMLAppearance214 = new SoVRMLAppearance();
SoVRMLAppearance214->setDEF(QString("black"));
SoMaterial* SoMaterial215 = new SoMaterial();
SoMaterial215->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial215->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance214->addChild(*SoMaterial215);

SoShape212->addChild(*SoVRMLAppearance214);

SoTransform211->addChild(*SoShape212);

SoGroup210->addChild(*SoTransform211);

SoSwitch209->addChild(*SoGroup210);

SoGroup* SoGroup216 = new SoGroup();
SoTransform* SoTransform217 = new SoTransform();
SoInline* SoInline218 = new SoInline();
SoInline218->setUrl(new QString[]{QString("cow.wrl"), QString("http://www.uoguelph.ca/~dchiu/cow.wrl")}, 2);
SoTransform217->addChild(*SoInline218);

SoGroup216->addChild(*SoTransform217);

SoSwitch209->addChild(*SoGroup216);

SoGroup* SoGroup219 = new SoGroup();
SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform220->setScale(new float[]{0.4,0.4,0.4});
SoTransform220->setTranslation(new float[]{0.0,0.7,0.0});
SoInline* SoInline221 = new SoInline();
SoInline221->setUrl(new QString[]{QString("vrml_ginger.wrl"), QString("http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl")}, 2);
SoTransform220->addChild(*SoInline221);

SoGroup219->addChild(*SoTransform220);

SoSwitch209->addChild(*SoGroup219);

SoTransform208->addChild(*SoSwitch209);

SoTransform181->addChild(*SoTransform208);

SoTransform180->addChild(*SoTransform181);

SoTransform171->addChild(*SoTransform180);

SoTransform129->addChild(*SoTransform171);

SoTransform104->addChild(*SoTransform129);

SoTransform* SoTransform222 = new SoTransform();
SoTransform222->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform222->setTranslation(new float[]{0.0,18.0,2.5});
SoShape* SoShape223 = new SoShape();
SoCylinder* SoCylinder224 = new SoCylinder();
SoCylinder224->setHeight(8);
SoCylinder224->setRadius(0.4);
SoShape223->setGeometry(*SoCylinder224);

SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial226->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance225->addChild(*SoMaterial226);

SoShape223->addChild(*SoVRMLAppearance225);

SoTransform222->addChild(*SoShape223);

//Top Pivot
SoTransform104->addChild(*SoTransform222);

SoTransform* SoTransform227 = new SoTransform();
SoTransform227->setDEF(QString("verticalweight"));
SoTransform* SoTransform228 = new SoTransform();
SoTransform228->setTranslation(new float[]{4.0,18.0,1.8});
SoShape* SoShape229 = new SoShape();
SoBox* SoBox230 = new SoBox();
SoBox230->setSize(new float[]{1.0,10.0,0.5});
SoShape229->setGeometry(*SoBox230);

SoVRMLAppearance* SoVRMLAppearance231 = new SoVRMLAppearance();
SoVRMLAppearance231->setUSE(QString("wood"));
SoShape229->addChild(*SoVRMLAppearance231);

SoTransform228->addChild(*SoShape229);

SoTransform227->addChild(*SoTransform228);

SoTransform* SoTransform232 = new SoTransform();
SoTransform232->setTranslation(new float[]{4.0,18.0,3.2});
SoShape* SoShape233 = new SoShape();
SoBox* SoBox234 = new SoBox();
SoBox234->setSize(new float[]{1.0,10.0,0.5});
SoShape233->setGeometry(*SoBox234);

SoVRMLAppearance* SoVRMLAppearance235 = new SoVRMLAppearance();
SoVRMLAppearance235->setUSE(QString("wood"));
SoShape233->addChild(*SoVRMLAppearance235);

SoTransform232->addChild(*SoShape233);

SoTransform227->addChild(*SoTransform232);

SoTransform* SoTransform236 = new SoTransform();
SoTransform236->setTranslation(new float[]{4.0,14.0,2.5});
//CounterWeight
SoShape* SoShape237 = new SoShape();
SoCylinder* SoCylinder238 = new SoCylinder();
SoCylinder238->setHeight(4);
SoCylinder238->setRadius(1.5);
SoShape237->setGeometry(*SoCylinder238);

SoVRMLAppearance* SoVRMLAppearance239 = new SoVRMLAppearance();
SoMaterial* SoMaterial240 = new SoMaterial();
SoMaterial240->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial240->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance239->addChild(*SoMaterial240);

SoShape237->addChild(*SoVRMLAppearance239);

SoTransform236->addChild(*SoShape237);

SoTransform227->addChild(*SoTransform236);

SoTransform* SoTransform241 = new SoTransform();
SoTransform241->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform241->setTranslation(new float[]{4.0,22.0,2.5});
SoShape* SoShape242 = new SoShape();
SoCylinder* SoCylinder243 = new SoCylinder();
SoCylinder243->setHeight(2.5);
SoCylinder243->setRadius(0.3);
SoShape242->setGeometry(*SoCylinder243);

SoVRMLAppearance* SoVRMLAppearance244 = new SoVRMLAppearance();
SoMaterial* SoMaterial245 = new SoMaterial();
SoMaterial245->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial245->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance244->addChild(*SoMaterial245);

SoShape242->addChild(*SoVRMLAppearance244);

SoTransform241->addChild(*SoShape242);

SoTransform227->addChild(*SoTransform241);

SoTransform104->addChild(*SoTransform227);

SoTransform* SoTransform246 = new SoTransform();
SoTransform246->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform246->setScale(new float[]{0.2,0.2,0.2});
SoTransform246->setTranslation(new float[]{-11.5,-1.0,2.0});
SoTransform* SoTransform247 = new SoTransform();
SoTransform247->setDEF(QString("screw"));
SoTransform247->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape248 = new SoShape();
SoShape248->setUSE(QString("Torus"));
SoTransform247->addChild(*SoShape248);

SoTransform* SoTransform249 = new SoTransform();
SoTransform249->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoTransform249->setTranslation(new float[]{0.0,0.0,7.0});
SoShape* SoShape250 = new SoShape();
SoCylinder* SoCylinder251 = new SoCylinder();
SoCylinder251->setHeight(10);
SoCylinder251->setRadius(0.7);
SoShape250->setGeometry(*SoCylinder251);

SoVRMLAppearance* SoVRMLAppearance252 = new SoVRMLAppearance();
SoMaterial* SoMaterial253 = new SoMaterial();
SoMaterial253->setSpecularColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance252->addChild(*SoMaterial253);

SoShape250->addChild(*SoVRMLAppearance252);

SoTransform249->addChild(*SoShape250);

SoTransform247->addChild(*SoTransform249);

SoTransform246->addChild(*SoTransform247);

SoTransform* SoTransform254 = new SoTransform();
SoTransform254->setTranslation(new float[]{0.0,0.0,7.0});
SoTransform* SoTransform255 = new SoTransform();
SoTransform255->setUSE(QString("screw"));
SoTransform254->addChild(*SoTransform255);

SoTransform246->addChild(*SoTransform254);

//Release Pin
SoTransform* SoTransform256 = new SoTransform();
SoTransform256->setDEF(QString("Pin"));
SoTransform256->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoTransform256->setTranslation(new float[]{0.0,0.0,-3.0});
SoTransform* SoTransform257 = new SoTransform();
SoTransform257->setUSE(QString("screw"));
SoTransform256->addChild(*SoTransform257);

SoTransform246->addChild(*SoTransform256);

SoTransform104->addChild(*SoTransform246);

SoTransform* SoTransform258 = new SoTransform();
SoTransform258->setTranslation(new float[]{0.0,0.0,5.0});
SoShape* SoShape259 = new SoShape();
SoShape259->setUSE(QString("plank"));
SoTransform258->addChild(*SoShape259);

SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setUSE(QString("angledsupport"));
SoTransform258->addChild(*SoTransform260);

SoTransform* SoTransform261 = new SoTransform();
SoTransform261->setUSE(QString("angledsupport2"));
SoTransform258->addChild(*SoTransform261);

SoTransform* SoTransform262 = new SoTransform();
SoTransform262->setUSE(QString("verticalsupport"));
SoTransform258->addChild(*SoTransform262);

SoTransform* SoTransform263 = new SoTransform();
SoTransform263->setUSE(QString("horizontalsupport"));
SoTransform258->addChild(*SoTransform263);

SoTransform* SoTransform264 = new SoTransform();
SoTransform264->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform264->setScale(new float[]{0.6,1.0,1.0});
SoTransform264->setTranslation(new float[]{0.0,-11.0,-2.5});
SoTransform* SoTransform265 = new SoTransform();
SoTransform265->setUSE(QString("horizontalsupport"));
SoTransform264->addChild(*SoTransform265);

SoTransform258->addChild(*SoTransform264);

SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setRotation(new float[]{0.0,0.0,1.0,-1.57});
SoTransform266->setScale(new float[]{0.6,1.0,1.0});
SoTransform266->setTranslation(new float[]{0.0,5.0,-10.0});
SoTransform* SoTransform267 = new SoTransform();
SoTransform267->setRotation(new float[]{0.0,1.0,0.0,0.4});
SoShape* SoShape268 = new SoShape();
SoShape268->setUSE(QString("plank"));
SoTransform267->addChild(*SoShape268);

SoTransform266->addChild(*SoTransform267);

SoTransform258->addChild(*SoTransform266);

SoTransform* SoTransform269 = new SoTransform();
SoTransform269->setTranslation(new float[]{0.0,0.0,0.6});
SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setUSE(QString("panel"));
SoTransform269->addChild(*SoTransform270);

SoTransform258->addChild(*SoTransform269);

SoTransform104->addChild(*SoTransform258);

SoTransform* SoTransform271 = new SoTransform();
SoTransform271->setTranslation(new float[]{10.0,-1.0,2.5});
SoShape* SoShape272 = new SoShape();
SoShape272->setDEF(QString("Axle"));
SoBox* SoBox273 = new SoBox();
SoBox273->setSize(new float[]{1.0,1.0,8.0});
SoShape272->setGeometry(*SoBox273);

SoVRMLAppearance* SoVRMLAppearance274 = new SoVRMLAppearance();
SoVRMLAppearance274->setUSE(QString("wood"));
SoShape272->addChild(*SoVRMLAppearance274);

SoTransform271->addChild(*SoShape272);

SoTransform* SoTransform275 = new SoTransform();
SoTransform275->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform275->setTranslation(new float[]{0.0,0.0,4.5});
SoShape* SoShape276 = new SoShape();
SoShape276->setDEF(QString("wheel"));
SoCylinder* SoCylinder277 = new SoCylinder();
SoCylinder277->setRadius(2);
SoShape276->setGeometry(*SoCylinder277);

SoVRMLAppearance* SoVRMLAppearance278 = new SoVRMLAppearance();
SoVRMLAppearance278->setUSE(QString("wood"));
SoShape276->addChild(*SoVRMLAppearance278);

SoTransform275->addChild(*SoShape276);

SoShape* SoShape279 = new SoShape();
SoShape279->setDEF(QString("tracks"));
SoSphere* SoSphere280 = new SoSphere();
SoSphere280->setRadius(1.5);
SoShape279->setGeometry(*SoSphere280);

SoVRMLAppearance* SoVRMLAppearance281 = new SoVRMLAppearance();
SoVRMLAppearance281->setUSE(QString("black"));
SoShape279->addChild(*SoVRMLAppearance281);

SoTransform275->addChild(*SoShape279);

SoTransform* SoTransform282 = new SoTransform();
SoTransform282->setTranslation(new float[]{0.0,0.55,0.0});
SoShape* SoShape283 = new SoShape();
SoShape283->setDEF(QString("hub"));
SoSphere* SoSphere284 = new SoSphere();
SoSphere284->setRadius(1.5);
SoShape283->setGeometry(*SoSphere284);

SoVRMLAppearance* SoVRMLAppearance285 = new SoVRMLAppearance();
SoVRMLAppearance285->setUSE(QString("black"));
SoShape283->addChild(*SoVRMLAppearance285);

SoTransform282->addChild(*SoShape283);

SoTransform275->addChild(*SoTransform282);

SoTransform271->addChild(*SoTransform275);

SoTransform* SoTransform286 = new SoTransform();
SoTransform286->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform286->setTranslation(new float[]{0.0,0.0,-4.5});
SoShape* SoShape287 = new SoShape();
SoShape287->setUSE(QString("wheel"));
SoTransform286->addChild(*SoShape287);

SoShape* SoShape288 = new SoShape();
SoShape288->setUSE(QString("tracks"));
SoTransform286->addChild(*SoShape288);

SoTransform* SoTransform289 = new SoTransform();
SoTransform289->setTranslation(new float[]{0.0,-0.55,0.0});
SoShape* SoShape290 = new SoShape();
SoShape290->setUSE(QString("hub"));
SoTransform289->addChild(*SoShape290);

SoTransform286->addChild(*SoTransform289);

SoTransform271->addChild(*SoTransform286);

SoTransform104->addChild(*SoTransform271);

SoTransform* SoTransform291 = new SoTransform();
SoTransform291->setTranslation(new float[]{-10.0,-1.0,2.5});
SoShape* SoShape292 = new SoShape();
SoShape292->setUSE(QString("Axle"));
SoTransform291->addChild(*SoShape292);

SoTransform* SoTransform293 = new SoTransform();
SoTransform293->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform293->setTranslation(new float[]{0.0,0.0,4.5});
SoShape* SoShape294 = new SoShape();
SoShape294->setUSE(QString("wheel"));
SoTransform293->addChild(*SoShape294);

SoShape* SoShape295 = new SoShape();
SoShape295->setUSE(QString("tracks"));
SoTransform293->addChild(*SoShape295);

SoTransform* SoTransform296 = new SoTransform();
SoTransform296->setTranslation(new float[]{0.0,0.55,0.0});
SoShape* SoShape297 = new SoShape();
SoShape297->setUSE(QString("hub"));
SoTransform296->addChild(*SoShape297);

SoTransform293->addChild(*SoTransform296);

SoTransform291->addChild(*SoTransform293);

SoTransform* SoTransform298 = new SoTransform();
SoTransform298->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform298->setTranslation(new float[]{0.0,0.0,-4.5});
SoShape* SoShape299 = new SoShape();
SoShape299->setUSE(QString("wheel"));
SoTransform298->addChild(*SoShape299);

SoShape* SoShape300 = new SoShape();
SoShape300->setUSE(QString("tracks"));
SoTransform298->addChild(*SoShape300);

SoTransform* SoTransform301 = new SoTransform();
SoTransform301->setTranslation(new float[]{0.0,-0.55,0.0});
SoShape* SoShape302 = new SoShape();
SoShape302->setUSE(QString("hub"));
SoTransform301->addChild(*SoShape302);

SoTransform298->addChild(*SoTransform301);

SoTransform291->addChild(*SoTransform298);

SoTransform* SoTransform303 = new SoTransform();
SoTransform303->setRotation(new float[]{0.0,1.0,0.0,-0.6});
SoTransform303->setTranslation(new float[]{0.0,100.0,400.0});
SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{1.0,3.0,0.0});
SoViewpoint* SoViewpoint305 = new SoViewpoint();
SoViewpoint305->setDescription(QString("Side"));
SoTransform304->addChild(*SoViewpoint305);

SoTransform303->addChild(*SoTransform304);

SoTransform* SoTransform306 = new SoTransform();
SoTransform306->setUSE(QString("launch"));
SoTransform303->addChild(*SoTransform306);

SoTransform* SoTransform307 = new SoTransform();
SoTouchSensor* SoTouchSensor308 = new SoTouchSensor();
SoTouchSensor308->setUSE(QString("LauncheeChoice"));
SoTransform307->addChild(*SoTouchSensor308);

SoSwitch* SoSwitch309 = new SoSwitch();
SoSwitch309->setUSE(QString("projectilename"));
SoTransform307->addChild(*SoSwitch309);

SoTransform* SoTransform310 = new SoTransform();
SoTransform310->setTranslation(new float[]{2.5,0.0,0.0});
SoShape* SoShape311 = new SoShape();
SoBox* SoBox312 = new SoBox();
SoBox312->setSize(new float[]{5.0,0.5,0.5});
SoShape311->setGeometry(*SoBox312);

SoVRMLAppearance* SoVRMLAppearance313 = new SoVRMLAppearance();
SoMaterial* SoMaterial314 = new SoMaterial();
SoMaterial314->setTransparency(1);
SoVRMLAppearance313->addChild(*SoMaterial314);

SoShape311->addChild(*SoVRMLAppearance313);

SoTransform310->addChild(*SoShape311);

SoTransform307->addChild(*SoTransform310);

SoTransform303->addChild(*SoTransform307);

SoTransform* SoTransform315 = new SoTransform();
SoTransform315->setScale(new float[]{0.5,0.5,0.5});
SoTransform315->setTranslation(new float[]{0.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor316 = new SoTouchSensor();
SoTouchSensor316->setUSE(QString("weightselector"));
SoTransform315->addChild(*SoTouchSensor316);

SoSwitch* SoSwitch317 = new SoSwitch();
SoSwitch317->setUSE(QString("Weight"));
SoTransform315->addChild(*SoSwitch317);

SoTransform* SoTransform318 = new SoTransform();
SoTransform318->setTranslation(new float[]{8.0,0.0,0.0});
SoShape* SoShape319 = new SoShape();
SoBox* SoBox320 = new SoBox();
SoBox320->setSize(new float[]{17.0,1.0,0.5});
SoShape319->setGeometry(*SoBox320);

SoVRMLAppearance* SoVRMLAppearance321 = new SoVRMLAppearance();
SoMaterial* SoMaterial322 = new SoMaterial();
SoMaterial322->setTransparency(1);
SoVRMLAppearance321->addChild(*SoMaterial322);

SoShape319->addChild(*SoVRMLAppearance321);

SoTransform318->addChild(*SoShape319);

SoTransform315->addChild(*SoTransform318);

SoTransform303->addChild(*SoTransform315);

SoTransform291->addChild(*SoTransform303);

SoTransform* SoTransform323 = new SoTransform();
SoTransform323->setDEF(QString("ProjectileTransform"));
SoTransform323->setTranslation(new float[]{14.25,1.25,0.0});
SoSwitch* SoSwitch324 = new SoSwitch();
SoSwitch324->setUSE(QString("projectile"));
SoTransform323->addChild(*SoSwitch324);

SoTransform* SoTransform325 = new SoTransform();
SoTransform325->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform325->setTranslation(new float[]{0.0,1.0,0.0});
SoViewpoint* SoViewpoint326 = new SoViewpoint();
SoViewpoint326->setDescription(QString("Projectile Cam"));
SoViewpoint326->setPosition(new float[]{0.0,0.0,15.0});
SoTransform325->addChild(*SoViewpoint326);

SoTransform323->addChild(*SoTransform325);

SoTransform291->addChild(*SoTransform323);

SoTransform* SoTransform327 = new SoTransform();
SoTransform327->setTranslation(new float[]{20.0,2.0,0.0});
SoTransform* SoTransform328 = new SoTransform();
SoTransform328->setDEF(QString("Front"));
SoTransform328->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint* SoViewpoint329 = new SoViewpoint();
SoViewpoint329->setDescription(QString("Fore"));
SoTransform328->addChild(*SoViewpoint329);

SoTransform327->addChild(*SoTransform328);

SoTransform291->addChild(*SoTransform327);

SoTransform* SoTransform330 = new SoTransform();
SoTransform330->setTranslation(new float[]{-8.0,4.0,0.0});
SoTransform* SoTransform331 = new SoTransform();
SoTransform331->setRotation(new float[]{0.0,1.0,0.0,-1.57});
SoViewpoint* SoViewpoint332 = new SoViewpoint();
SoViewpoint332->setDescription(QString("Aft"));
SoTransform331->addChild(*SoViewpoint332);

SoTransform330->addChild(*SoTransform331);

SoTransform291->addChild(*SoTransform330);

SoScript* SoScript333 = new SoScript();
SoScript333->setDEF(QString("WeightScript"));
Sofield* Sofield334 = new Sofield();
Sofield334->setName(QString("set_boolean"));
Sofield334->setAccessType(QString("inputOnly"));
Sofield334->setType(QString("SFBool"));
SoScript333->addChild(*Sofield334);

Sofield* Sofield335 = new Sofield();
Sofield335->setName(QString("whichchoice"));
Sofield335->setAccessType(QString("outputOnly"));
Sofield335->setType(QString("SFInt32"));
SoScript333->addChild(*Sofield335);

Sofield* Sofield336 = new Sofield();
Sofield336->setName(QString("CounterWeight"));
Sofield336->setAccessType(QString("outputOnly"));
Sofield336->setType(QString("SFFloat"));
SoScript333->addChild(*Sofield336);


//SoScript333->setSourceCode(QString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	whichchoice =0;")+
//_T("	CounterWeight=100;")+
//_T("}")+
//_T("function set_boolean ( boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore the unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("	if (whichchoice == 0)CounterWeight=50.00;")+
//_T("	if (whichchoice == 1)CounterWeight=500.00;")+
//_T("	if (whichchoice == 2)CounterWeight=1000.00;")+
//_T("	if (whichchoice == 3)CounterWeight=10000.00;")+
//_T("        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }")+
//_T("        Browser.println ('CounterWeight ='+CounterWeight);")+
//_T("}"));
SoTransform291->addChild(*SoScript333);

SoScript* SoScript337 = new SoScript();
SoScript337->setDEF(QString("LauncheeScript"));
Sofield* Sofield338 = new Sofield();
Sofield338->setName(QString("set_boolean"));
Sofield338->setAccessType(QString("inputOnly"));
Sofield338->setType(QString("SFBool"));
SoScript337->addChild(*Sofield338);

Sofield* Sofield339 = new Sofield();
Sofield339->setName(QString("whichchoice"));
Sofield339->setAccessType(QString("outputOnly"));
Sofield339->setType(QString("SFInt32"));
SoScript337->addChild(*Sofield339);

Sofield* Sofield340 = new Sofield();
Sofield340->setName(QString("ProjectileWeight"));
Sofield340->setAccessType(QString("outputOnly"));
Sofield340->setType(QString("SFFloat"));
SoScript337->addChild(*Sofield340);


//SoScript337->setSourceCode(QString("ecmascript:")+
//_T("function set_boolean (boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("        if (whichchoice == 0)ProjectileWeight=10.00;")+
//_T("        if (whichchoice == 1)ProjectileWeight=1000.00;")+
//_T("	if (whichchoice == 2)ProjectileWeight=5;")+
//_T("	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }")+
//_T("	Browser.println ('Projectile Weight'+ProjectileWeight);")+
//_T("}"));
SoTransform291->addChild(*SoScript337);

SoScript* SoScript341 = new SoScript();
SoScript341->setDEF(QString("PigdogMonkScript"));
Sofield* Sofield342 = new Sofield();
Sofield342->setName(QString("set_boolean"));
Sofield342->setAccessType(QString("inputOnly"));
Sofield342->setType(QString("SFBool"));
SoScript341->addChild(*Sofield342);

Sofield* Sofield343 = new Sofield();
Sofield343->setName(QString("whichchoice"));
Sofield343->setAccessType(QString("outputOnly"));
Sofield343->setType(QString("SFInt32"));
SoScript341->addChild(*Sofield343);


//SoScript341->setSourceCode(QString("ecmascript:")+
//_T("function set_boolean (boolean_input, eventTime)")+
//_T("{")+
//_T("	if ( boolean_input== false ) { return; } // ignore unclick")+
//_T("        whichchoice = whichchoice +1;")+
//_T("        if ( whichchoice ==2 )  whichchoice = 0;")+
//_T("}"));
SoTransform291->addChild(*SoScript341);

SoScript* SoScript344 = new SoScript();
SoScript344->setDEF(QString("Mover"));
Sofield* Sofield345 = new Sofield();
Sofield345->setName(QString("set_fraction"));
Sofield345->setAccessType(QString("inputOnly"));
Sofield345->setType(QString("SFFloat"));
SoScript344->addChild(*Sofield345);

Sofield* Sofield346 = new Sofield();
Sofield346->setName(QString("set_MassCounterWeight"));
Sofield346->setAccessType(QString("inputOnly"));
Sofield346->setType(QString("SFFloat"));
SoScript344->addChild(*Sofield346);

Sofield* Sofield347 = new Sofield();
Sofield347->setName(QString("set_MassProjectileWeight"));
Sofield347->setAccessType(QString("inputOnly"));
Sofield347->setType(QString("SFFloat"));
SoScript344->addChild(*Sofield347);

Sofield* Sofield348 = new Sofield();
Sofield348->setName(QString("MassCounterWeight"));
Sofield348->setAccessType(QString("initializeOnly"));
Sofield348->setType(QString("SFFloat"));
Sofield348->setValue(QString("1"));
SoScript344->addChild(*Sofield348);

Sofield* Sofield349 = new Sofield();
Sofield349->setName(QString("MassProjectileWeight"));
Sofield349->setAccessType(QString("initializeOnly"));
Sofield349->setType(QString("SFFloat"));
Sofield349->setValue(QString("1"));
SoScript344->addChild(*Sofield349);

Sofield* Sofield350 = new Sofield();
Sofield350->setName(QString("transparent"));
Sofield350->setAccessType(QString("outputOnly"));
Sofield350->setType(QString("SFVec3f"));
SoScript344->addChild(*Sofield350);

Sofield* Sofield351 = new Sofield();
Sofield351->setName(QString("value_changed"));
Sofield351->setAccessType(QString("outputOnly"));
Sofield351->setType(QString("SFVec3f"));
SoScript344->addChild(*Sofield351);


//SoScript344->setSourceCode(QString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	MassCounterWeight=100;")+
//_T("	MassProjectileWeight=10;")+
//_T("	Browser.println ('MassCounterWeight =' + MassCounterWeight);")+
//_T("	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);")+
//_T("}")+
//_T("function set_MassProjectileWeight (value, timestamp)")+
//_T("{")+
//_T("	MassProjectileWeight = value;")+
//_T("	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);")+
//_T("}")+
//_T("function set_MassCounterWeight (value2, timestamp)")+
//_T("{")+
//_T("	MassCounterWeight = value2;")+
//_T("	Browser.println ('new MassCounterWeight =' + MassCounterWeight);")+
//_T("}")+
//_T("function set_fraction ( fraction, eventTime )")+
//_T("{")+
//_T("	var TrebuchetHeight=45;")+
//_T("	var Height =25;")+
//_T("      	var x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;")+
//_T("	// start at TrebuchetHeight and keep along z axis (z=zero)")+
//_T("	var y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);")+
//_T("        var z = 0;")+
//_T("        transparent = new SFVec3f (1,1,1);")+
//_T("     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)")+
//_T("		{")+
//_T("		x=x-10;")+
//_T("		y=y+1;")+
//_T("		transparent = new SFVec3f(.01, .01, .01);")+
//_T("			}")+
//_T("	value_changed = new SFVec3f (x, y, z);")+
//_T("	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);")+
//_T("}"));
SoTransform291->addChild(*SoScript344);

SoTransform104->addChild(*SoTransform291);

SoNode17->addChild(*SoTransform104);

SoTimeSensor* SoTimeSensor352 = new SoTimeSensor();
SoTimeSensor352->setDEF(QString("clock"));
SoTimeSensor352->setCycleInterval(10);
SoNode17->addChild(*SoTimeSensor352);

SoPositionInterpolator* SoPositionInterpolator353 = new SoPositionInterpolator();
SoPositionInterpolator353->setDEF(QString("verticalweightpath"));
SoPositionInterpolator353->setKey(new float[]{0.0,0.1,0.2,0.2,0.3,0.9}, 6);
SoPositionInterpolator353->setKeyValue(new float[]{1.4,1.6,0.0,1.0,-8.0,0.0,-3.5,-12.0,0.0,-3.5,-12.0,0.0,1.2,-8.0,0.0,1.4,1.6,0.0}, 18);
SoNode17->addChild(*SoPositionInterpolator353);

SoOrientationInterpolator* SoOrientationInterpolator354 = new SoOrientationInterpolator();
SoOrientationInterpolator354->setDEF(QString("flingerangles"));
SoOrientationInterpolator354->setKey(new float[]{0.0,0.1,0.2,0.2,0.3,0.9}, 6);
SoOrientationInterpolator354->setKeyValue(new float[]{0.0,0.0,1.0,0.82,0.0,0.0,1.0,-0.77,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-1.57,0.0,0.0,1.0,-0.77,0.0,0.0,1.0,0.82}, 24);
SoNode17->addChild(*SoOrientationInterpolator354);

SoPositionInterpolator* SoPositionInterpolator355 = new SoPositionInterpolator();
SoPositionInterpolator355->setDEF(QString("pinpath"));
SoPositionInterpolator355->setKey(new float[]{0.0,0.01,0.95,1.0}, 4);
SoPositionInterpolator355->setKeyValue(new float[]{0.0,0.0,-3.0,0.0,0.0,-10.0,0.0,0.0,-10.0,0.0,0.0,-3.0}, 12);
SoNode17->addChild(*SoPositionInterpolator355);

SoOrientationInterpolator* SoOrientationInterpolator356 = new SoOrientationInterpolator();
SoOrientationInterpolator356->setDEF(QString("RnSAngels"));
SoOrientationInterpolator356->setKey(new float[]{0.0,0.7,1.0}, 3);
SoOrientationInterpolator356->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-3.14,0.0,0.0,1.0,0.0}, 12);
SoNode17->addChild(*SoOrientationInterpolator356);

SoPositionInterpolator* SoPositionInterpolator357 = new SoPositionInterpolator();
SoPositionInterpolator357->setDEF(QString("invisiable"));
SoPositionInterpolator357->setKey(new float[]{0.0,0.2,0.98,0.99}, 4);
SoPositionInterpolator357->setKeyValue(new float[]{1.0,1.0,1.0,0.01,0.01,0.01,0.01,0.01,0.01,1.0,1.0,1.0}, 12);
SoNode17->addChild(*SoPositionInterpolator357);

SoROUTE* SoROUTE358 = new SoROUTE();
SoROUTE358->setFromField(QString("fraction_changed"));
SoROUTE358->setFromNode(QString("clock"));
SoROUTE358->setToField(QString("set_fraction"));
SoROUTE358->setToNode(QString("invisiable"));
SoNode17->addChild(*SoROUTE358);

SoROUTE* SoROUTE359 = new SoROUTE();
SoROUTE359->setFromField(QString("value_changed"));
SoROUTE359->setFromNode(QString("invisiable"));
SoROUTE359->setToField(QString("set_scale"));
SoROUTE359->setToNode(QString("projectiletransform"));
SoNode17->addChild(*SoROUTE359);

SoROUTE* SoROUTE360 = new SoROUTE();
SoROUTE360->setFromField(QString("CounterWeight"));
SoROUTE360->setFromNode(QString("WeightScript"));
SoROUTE360->setToField(QString("set_MassCounterWeight"));
SoROUTE360->setToNode(QString("Mover"));
SoNode17->addChild(*SoROUTE360);

SoROUTE* SoROUTE361 = new SoROUTE();
SoROUTE361->setFromField(QString("ProjectileWeight"));
SoROUTE361->setFromNode(QString("LauncheeScript"));
SoROUTE361->setToField(QString("set_MassProjectileWeight"));
SoROUTE361->setToNode(QString("Mover"));
SoNode17->addChild(*SoROUTE361);

SoROUTE* SoROUTE362 = new SoROUTE();
SoROUTE362->setFromField(QString("fraction_changed"));
SoROUTE362->setFromNode(QString("clock"));
SoROUTE362->setToField(QString("set_fraction"));
SoROUTE362->setToNode(QString("Mover"));
SoNode17->addChild(*SoROUTE362);

SoROUTE* SoROUTE363 = new SoROUTE();
SoROUTE363->setFromField(QString("value_changed"));
SoROUTE363->setFromNode(QString("Mover"));
SoROUTE363->setToField(QString("set_translation"));
SoROUTE363->setToNode(QString("ProjectileTransform"));
SoNode17->addChild(*SoROUTE363);

SoROUTE* SoROUTE364 = new SoROUTE();
SoROUTE364->setFromField(QString("transparent"));
SoROUTE364->setFromNode(QString("Mover"));
SoROUTE364->setToField(QString("set_scale"));
SoROUTE364->setToNode(QString("ProjectileTransform"));
SoNode17->addChild(*SoROUTE364);

SoROUTE* SoROUTE365 = new SoROUTE();
SoROUTE365->setFromField(QString("touchTime"));
SoROUTE365->setFromNode(QString("Launch"));
SoROUTE365->setToField(QString("set_startTime"));
SoROUTE365->setToNode(QString("clock"));
SoNode17->addChild(*SoROUTE365);

SoROUTE* SoROUTE366 = new SoROUTE();
SoROUTE366->setFromField(QString("isActive"));
SoROUTE366->setFromNode(QString("Launch"));
SoROUTE366->setToField(QString("set_boolean"));
SoROUTE366->setToNode(QString("PigdogMonkScript"));
SoNode17->addChild(*SoROUTE366);

SoROUTE* SoROUTE367 = new SoROUTE();
SoROUTE367->setFromField(QString("touchTime"));
SoROUTE367->setFromNode(QString("Launch"));
SoROUTE367->setToField(QString("set_startTime"));
SoROUTE367->setToNode(QString("PigDogSound"));
SoNode17->addChild(*SoROUTE367);

SoROUTE* SoROUTE368 = new SoROUTE();
SoROUTE368->setFromField(QString("touchTime"));
SoROUTE368->setFromNode(QString("Launch"));
SoROUTE368->setToField(QString("set_startTime"));
SoROUTE368->setToNode(QString("MonkSound"));
SoNode17->addChild(*SoROUTE368);

SoROUTE* SoROUTE369 = new SoROUTE();
SoROUTE369->setFromField(QString("whichchoice"));
SoROUTE369->setFromNode(QString("PigdogMonkScript"));
SoROUTE369->setToField(QString("whichChoice"));
SoROUTE369->setToNode(QString("PigdogMonk"));
SoNode17->addChild(*SoROUTE369);

SoROUTE* SoROUTE370 = new SoROUTE();
SoROUTE370->setFromField(QString("touchTime"));
SoROUTE370->setFromNode(QString("LauncheeChoice"));
SoROUTE370->setToField(QString("set_startTime"));
SoROUTE370->setToNode(QString("HolyHandGrenadeSound"));
SoNode17->addChild(*SoROUTE370);

SoROUTE* SoROUTE371 = new SoROUTE();
SoROUTE371->setFromField(QString("touchTime"));
SoROUTE371->setFromNode(QString("LauncheeChoice"));
SoROUTE371->setToField(QString("set_startTime"));
SoROUTE371->setToNode(QString("CowSound"));
SoNode17->addChild(*SoROUTE371);

SoROUTE* SoROUTE372 = new SoROUTE();
SoROUTE372->setFromField(QString("touchTime"));
SoROUTE372->setFromNode(QString("LauncheeChoice"));
SoROUTE372->setToField(QString("set_startTime"));
SoROUTE372->setToNode(QString("HamsterSound"));
SoNode17->addChild(*SoROUTE372);

SoROUTE* SoROUTE373 = new SoROUTE();
SoROUTE373->setFromField(QString("isActive"));
SoROUTE373->setFromNode(QString("LauncheeChoice"));
SoROUTE373->setToField(QString("set_boolean"));
SoROUTE373->setToNode(QString("LauncheeScript"));
SoNode17->addChild(*SoROUTE373);

SoROUTE* SoROUTE374 = new SoROUTE();
SoROUTE374->setFromField(QString("whichchoice"));
SoROUTE374->setFromNode(QString("LauncheeScript"));
SoROUTE374->setToField(QString("whichChoice"));
SoROUTE374->setToNode(QString("projectile"));
SoNode17->addChild(*SoROUTE374);

SoROUTE* SoROUTE375 = new SoROUTE();
SoROUTE375->setFromField(QString("whichchoice"));
SoROUTE375->setFromNode(QString("LauncheeScript"));
SoROUTE375->setToField(QString("whichChoice"));
SoROUTE375->setToNode(QString("projectilename"));
SoNode17->addChild(*SoROUTE375);

SoROUTE* SoROUTE376 = new SoROUTE();
SoROUTE376->setFromField(QString("isActive"));
SoROUTE376->setFromNode(QString("weightselector"));
SoROUTE376->setToField(QString("set_boolean"));
SoROUTE376->setToNode(QString("WeightScript"));
SoNode17->addChild(*SoROUTE376);

SoROUTE* SoROUTE377 = new SoROUTE();
SoROUTE377->setFromField(QString("whichchoice"));
SoROUTE377->setFromNode(QString("WeightScript"));
SoROUTE377->setToField(QString("whichChoice"));
SoROUTE377->setToNode(QString("Weight"));
SoNode17->addChild(*SoROUTE377);

SoROUTE* SoROUTE378 = new SoROUTE();
SoROUTE378->setFromField(QString("fraction_changed"));
SoROUTE378->setFromNode(QString("clock"));
SoROUTE378->setToField(QString("set_fraction"));
SoROUTE378->setToNode(QString("flingerangles"));
SoNode17->addChild(*SoROUTE378);

SoROUTE* SoROUTE379 = new SoROUTE();
SoROUTE379->setFromField(QString("value_changed"));
SoROUTE379->setFromNode(QString("flingerangles"));
SoROUTE379->setToField(QString("set_rotation"));
SoROUTE379->setToNode(QString("flinger"));
SoNode17->addChild(*SoROUTE379);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromField(QString("fraction_changed"));
SoROUTE380->setFromNode(QString("clock"));
SoROUTE380->setToField(QString("set_fraction"));
SoROUTE380->setToNode(QString("verticalweightpath"));
SoNode17->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromField(QString("value_changed"));
SoROUTE381->setFromNode(QString("verticalweightpath"));
SoROUTE381->setToField(QString("set_translation"));
SoROUTE381->setToNode(QString("verticalweight"));
SoNode17->addChild(*SoROUTE381);

SoROUTE* SoROUTE382 = new SoROUTE();
SoROUTE382->setFromField(QString("fraction_changed"));
SoROUTE382->setFromNode(QString("clock"));
SoROUTE382->setToField(QString("set_fraction"));
SoROUTE382->setToNode(QString("pinpath"));
SoNode17->addChild(*SoROUTE382);

SoROUTE* SoROUTE383 = new SoROUTE();
SoROUTE383->setFromField(QString("value_changed"));
SoROUTE383->setFromNode(QString("pinpath"));
SoROUTE383->setToField(QString("set_translation"));
SoROUTE383->setToNode(QString("Pin"));
SoNode17->addChild(*SoROUTE383);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}
