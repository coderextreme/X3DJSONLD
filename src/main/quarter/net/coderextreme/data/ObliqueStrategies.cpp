
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
Someta2->setContent(QString("ObliqueStrategies.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Text scripting and animation example using Oblique Strategies card set by Brian Eno."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman, John Kelly, Ben Cheng"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("3 November 2013"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("10 November 2019"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("oblique.html"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("ObliqueStrategies.txt"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("ObliqueStrategiesScript.js"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://www.eno-web.co.uk/obliques.html"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("http://gothpunk.com/haiku-intro.html"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("http://www.rtqe.net/ObliqueStrategies/OSintro.html"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://en.wikipedia.org/wiki/Oblique_Strategies"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("subject"));
Someta15->setContent(QString("Brian Eno, Oblique Strategies"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("Image"));
Someta16->setContent(QString("images/ObliqueStrategiesEntryScreen.png"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("Sound"));
Someta17->setContent(QString("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Sound"));
Someta18->setContent(QString("translate_tts_HelloX3D.mp3"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Sound"));
Someta19->setContent(QString("translate_tts_HelloX3D.wav"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("TODO"));
Someta20->setContent(QString("multiliingual translation parameter"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("reference"));
Someta21->setContent(QString("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("reference"));
Someta22->setContent(QString("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("warning"));
Someta23->setContent(QString("under development, scene Sound/AudioClip triggering (or retrieved file format) not working"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("warning"));
Someta24->setContent(QString("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("reference"));
Someta25->setContent(QString("https://gist.github.com/alotaiba/1728771"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("reference"));
Someta26->setContent(QString("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("Sound"));
Someta27->setContent(QString("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("Sound"));
Someta28->setContent(QString("translate_tts_HelloX3D4.mp3"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("reference"));
Someta29->setContent(QString("https://cloud.google.com/translate/docs/basic/translating-text"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("identifier"));
Someta30->setContent(QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("generator"));
Someta31->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta31);

Someta* Someta32 = new Someta();
Someta32->setName(QString("license"));
Someta32->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta32);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode33 = new SoNode();
SoWorldInfo* SoWorldInfo34 = new SoWorldInfo();
SoWorldInfo34->setTitle(QString("ObliqueStrategies.x3d"));
SoNode33->addChild(*SoWorldInfo34);

SoNavigationInfo* SoNavigationInfo35 = new SoNavigationInfo();
SoNavigationInfo35->setType(new QString[]{QString("NONE")}, 1);
SoNode33->addChild(*SoNavigationInfo35);

SoBackground* SoBackground36 = new SoBackground();
SoBackground36->setSkyColor(new float[]{0.419608,0.427451,1.0}, 3);
SoNode33->addChild(*SoBackground36);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setScale(new float[]{0.4,0.4,0.4});
SoTransform37->setTranslation(new float[]{0.0,1.0,0.0});
SoTouchSensor* SoTouchSensor38 = new SoTouchSensor();
SoTouchSensor38->setDEF(QString("RandomTextClickedSensor"));
SoTouchSensor38->setDescription(QString("Select to see a new strategy"));
SoTransform37->addChild(*SoTouchSensor38);

SoShape* SoShape39 = new SoShape();
SoText* SoText40 = new SoText();
SoText40->setString(new QString[]{QString("Oblique Strategies"), QString(""), QString("(Over One Hundred Worthwhile Dilemmas)"), QString(""), QString("by Brian Eno and Peter Schmidt")}, 5);
SoFontStyle* SoFontStyle41 = new SoFontStyle();
SoFontStyle41->setDEF(QString("MessageFont"));
SoFontStyle41->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle41->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle41->setStyle(QString("BOLD"));
SoText40->setFontStyle(*SoFontStyle41);

SoShape39->setGeometry(*SoText40);

SoVRMLAppearance* SoVRMLAppearance42 = new SoVRMLAppearance();
SoMaterial* SoMaterial43 = new SoMaterial();
SoMaterial43->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance42->addChild(*SoMaterial43);

SoShape39->addChild(*SoVRMLAppearance42);

SoTransform37->addChild(*SoShape39);

SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setScale(new float[]{10.0,3.0,1.0});
SoShape* SoShape45 = new SoShape();
SoShape45->setDEF(QString("HeadlineClickSurface"));
SoIndexedFaceSet* SoIndexedFaceSet46 = new SoIndexedFaceSet();
SoIndexedFaceSet46->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoIndexedFaceSet46->setSolid(false);
SoCoordinate* SoCoordinate47 = new SoCoordinate();
SoCoordinate47->setPoint(new float[]{1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0}, 12);
SoIndexedFaceSet46->setCoord(*SoCoordinate47);

SoShape45->setGeometry(*SoIndexedFaceSet46);

SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setAmbientIntensity(0.245763);
SoMaterial49->setDiffuseColor(new float[]{0.34773,0.090909,0.005289});
SoMaterial49->setShininess(0.07);
SoMaterial49->setSpecularColor(new float[]{0.336735,0.051091,0.051091});
SoMaterial49->setTransparency(0.8);
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape45->addChild(*SoVRMLAppearance48);

SoTransform44->addChild(*SoShape45);

SoTransform37->addChild(*SoTransform44);

SoNode33->addChild(*SoTransform37);

SoScript* SoScript50 = new SoScript();
SoScript50->setDEF(QString("TextScript"));
SoScript50->setUrl(new QString[]{QString("ObliqueStrategiesScript.js"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js")}, 2);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("index"));
Sofield51->setAccessType(QString("initializeOnly"));
Sofield51->setAppinfo(QString("index for active strategy card, -1 means no selection"));
Sofield51->setType(QString("SFInt32"));
Sofield51->setValue(QString("0"));
SoScript50->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("string_changed"));
Sofield52->setAccessType(QString("outputOnly"));
Sofield52->setAppinfo(QString("latest strategy card value"));
Sofield52->setType(QString("MFString"));
SoScript50->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("textToSpeechUrl"));
Sofield53->setAccessType(QString("outputOnly"));
Sofield53->setAppinfo(QString("\"url to invoke Google Translate\""));
Sofield53->setType(QString("MFString"));
SoScript50->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("newCardTime"));
Sofield54->setAccessType(QString("outputOnly"));
Sofield54->setAppinfo(QString("activate Sound node"));
Sofield54->setType(QString("SFTime"));
SoScript50->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("selectPreviousCard"));
Sofield55->setAccessType(QString("inputOnly"));
Sofield55->setType(QString("SFBool"));
SoScript50->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("selectNextCard"));
Sofield56->setAccessType(QString("inputOnly"));
Sofield56->setType(QString("SFBool"));
SoScript50->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("selectRandomCard"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setType(QString("SFBool"));
SoScript50->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("traceEnabled"));
Sofield58->setAccessType(QString("initializeOnly"));
Sofield58->setAppinfo(QString("controls console tracing"));
Sofield58->setType(QString("SFBool"));
Sofield58->setValue(QString("true"));
SoScript50->addChild(*Sofield58);

SoNode33->addChild(*SoScript50);

SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setDEF(QString("CardTransform"));
SoTransform59->setScale(new float[]{0.4,0.4,0.4});
SoTransform59->setTranslation(new float[]{0.0,-1.5,0.0});
SoShape* SoShape60 = new SoShape();
SoText* SoText61 = new SoText();
SoText61->setDEF(QString("CardText"));
SoFontStyle* SoFontStyle62 = new SoFontStyle();
SoFontStyle62->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle62->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle62->setStyle(QString("BOLD"));
SoText61->setFontStyle(*SoFontStyle62);

SoShape60->setGeometry(*SoText61);

SoVRMLAppearance* SoVRMLAppearance63 = new SoVRMLAppearance();
SoMaterial* SoMaterial64 = new SoMaterial();
SoMaterial64->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance63->addChild(*SoMaterial64);

SoShape60->addChild(*SoVRMLAppearance63);

SoTransform59->addChild(*SoShape60);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromField(QString("string_changed"));
SoROUTE65->setFromNode(QString("TextScript"));
SoROUTE65->setToField(QString("string"));
SoROUTE65->setToNode(QString("CardText"));
SoTransform59->addChild(*SoROUTE65);

SoSound* SoSound66 = new SoSound();
SoSound66->setDEF(QString("CardSoundSpatialization"));
SoSound66->setMaxBack(100);
SoSound66->setMaxFront(100);
SoSound66->setMinBack(20);
SoSound66->setMinFront(20);
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
SoAudioClip* SoAudioClip67 = new SoAudioClip();
SoAudioClip67->setDEF(QString("TextToSpeechAudioClip"));
SoAudioClip67->setDescription(QString("sends strategy text google translate"));
SoAudioClip67->setUrl(new QString[]{QString("http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium"), QString("translate_tts_mp3FileFormatNotSupported.wav"), QString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav")}, 3);
SoSound66->setSource(*SoAudioClip67);

SoTransform59->addChild(*SoSound66);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromField(QString("textToSpeechUrl"));
SoROUTE68->setFromNode(QString("TextScript"));
SoROUTE68->setToField(QString("url"));
SoROUTE68->setToNode(QString("TextToSpeechAudioClip"));
SoTransform59->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromField(QString("newCardTime"));
SoROUTE69->setFromNode(QString("TextScript"));
SoROUTE69->setToField(QString("startTime"));
SoROUTE69->setToNode(QString("TextToSpeechAudioClip"));
SoTransform59->addChild(*SoROUTE69);

SoNode33->addChild(*SoTransform59);

SoTransform* SoTransform70 = new SoTransform();
SoTransform70->setScale(new float[]{0.4,0.4,0.4});
SoTransform70->setTranslation(new float[]{-3.2,2.5,0.0});
SoTouchSensor* SoTouchSensor71 = new SoTouchSensor();
SoTouchSensor71->setDEF(QString("PreviousTextClickedSensor"));
SoTouchSensor71->setDescription(QString("Select to see previous strategy"));
SoTransform70->addChild(*SoTouchSensor71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromField(QString("isActive"));
SoROUTE72->setFromNode(QString("PreviousTextClickedSensor"));
SoROUTE72->setToField(QString("selectPreviousCard"));
SoROUTE72->setToNode(QString("TextScript"));
SoTransform70->addChild(*SoROUTE72);

SoShape* SoShape73 = new SoShape();
SoText* SoText74 = new SoText();
SoText74->setString(new QString[]{QString("previous")}, 1);
SoFontStyle* SoFontStyle75 = new SoFontStyle();
SoFontStyle75->setUSE(QString("MessageFont"));
SoText74->setFontStyle(*SoFontStyle75);

SoShape73->setGeometry(*SoText74);

SoVRMLAppearance* SoVRMLAppearance76 = new SoVRMLAppearance();
SoVRMLAppearance76->setDEF(QString("InterfaceAppearance"));
SoMaterial* SoMaterial77 = new SoMaterial();
SoMaterial77->setDiffuseColor(new float[]{1.0,0.0,0.6});
SoVRMLAppearance76->addChild(*SoMaterial77);

SoShape73->addChild(*SoVRMLAppearance76);

SoTransform70->addChild(*SoShape73);

SoTransform* SoTransform78 = new SoTransform();
SoTransform78->setScale(new float[]{2.0,0.6,1.0});
SoShape* SoShape79 = new SoShape();
SoShape79->setDEF(QString("TransparentClickSurface"));
//support Selectable Text with a scalable IFS
SoIndexedFaceSet* SoIndexedFaceSet80 = new SoIndexedFaceSet();
SoIndexedFaceSet80->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoIndexedFaceSet80->setSolid(false);
SoCoordinate* SoCoordinate81 = new SoCoordinate();
SoCoordinate81->setPoint(new float[]{1.0,1.0,0.0,1.0,-1.0,0.0,-1.0,-1.0,0.0,-1.0,1.0,0.0}, 12);
SoIndexedFaceSet80->setCoord(*SoCoordinate81);

SoShape79->setGeometry(*SoIndexedFaceSet80);

SoVRMLAppearance* SoVRMLAppearance82 = new SoVRMLAppearance();
SoMaterial* SoMaterial83 = new SoMaterial();
SoMaterial83->setTransparency(1);
SoVRMLAppearance82->addChild(*SoMaterial83);

SoShape79->addChild(*SoVRMLAppearance82);

SoTransform78->addChild(*SoShape79);

SoTransform70->addChild(*SoTransform78);

SoNode33->addChild(*SoTransform70);

SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setScale(new float[]{0.4,0.4,0.4});
SoTransform84->setTranslation(new float[]{3.5,2.5,0.0});
SoTouchSensor* SoTouchSensor85 = new SoTouchSensor();
SoTouchSensor85->setDEF(QString("NextTextClickedSensor"));
SoTouchSensor85->setDescription(QString("Select to see next strategy"));
SoTransform84->addChild(*SoTouchSensor85);

SoROUTE* SoROUTE86 = new SoROUTE();
SoROUTE86->setFromField(QString("isActive"));
SoROUTE86->setFromNode(QString("NextTextClickedSensor"));
SoROUTE86->setToField(QString("selectNextCard"));
SoROUTE86->setToNode(QString("TextScript"));
SoTransform84->addChild(*SoROUTE86);

SoShape* SoShape87 = new SoShape();
SoText* SoText88 = new SoText();
SoText88->setString(new QString[]{QString("next")}, 1);
SoFontStyle* SoFontStyle89 = new SoFontStyle();
SoFontStyle89->setUSE(QString("MessageFont"));
SoText88->setFontStyle(*SoFontStyle89);

SoShape87->setGeometry(*SoText88);

SoVRMLAppearance* SoVRMLAppearance90 = new SoVRMLAppearance();
SoVRMLAppearance90->setUSE(QString("InterfaceAppearance"));
SoShape87->addChild(*SoVRMLAppearance90);

SoTransform84->addChild(*SoShape87);

SoTransform* SoTransform91 = new SoTransform();
SoTransform91->setScale(new float[]{1.2,0.6,1.0});
SoShape* SoShape92 = new SoShape();
SoShape92->setUSE(QString("TransparentClickSurface"));
SoTransform91->addChild(*SoShape92);

SoTransform84->addChild(*SoTransform91);

SoNode33->addChild(*SoTransform84);

SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setScale(new float[]{0.4,0.4,0.4});
SoTransform93->setTranslation(new float[]{-3.3,-0.5,0.0});
SoTouchSensor* SoTouchSensor94 = new SoTouchSensor();
SoTouchSensor94->setUSE(QString("RandomTextClickedSensor"));
SoTransform93->addChild(*SoTouchSensor94);

SoROUTE* SoROUTE95 = new SoROUTE();
SoROUTE95->setFromField(QString("isActive"));
SoROUTE95->setFromNode(QString("RandomTextClickedSensor"));
SoROUTE95->setToField(QString("selectRandomCard"));
SoROUTE95->setToNode(QString("TextScript"));
SoTransform93->addChild(*SoROUTE95);

SoShape* SoShape96 = new SoShape();
SoText* SoText97 = new SoText();
SoText97->setString(new QString[]{QString("random")}, 1);
SoFontStyle* SoFontStyle98 = new SoFontStyle();
SoFontStyle98->setUSE(QString("MessageFont"));
SoText97->setFontStyle(*SoFontStyle98);

SoShape96->setGeometry(*SoText97);

SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoVRMLAppearance99->setUSE(QString("InterfaceAppearance"));
SoShape96->addChild(*SoVRMLAppearance99);

SoTransform93->addChild(*SoShape96);

SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setScale(new float[]{1.8,0.6,1.0});
SoShape* SoShape101 = new SoShape();
SoShape101->setUSE(QString("TransparentClickSurface"));
SoTransform100->addChild(*SoShape101);

SoTransform93->addChild(*SoTransform100);

SoNode33->addChild(*SoTransform93);

SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setScale(new float[]{0.4,0.4,0.4});
SoTransform102->setTranslation(new float[]{3.3,-0.5,0.0});
SoAnchor* SoAnchor103 = new SoAnchor();
SoAnchor103->setDEF(QString("TextToSpeechAnchor"));
SoAnchor103->setDescription(QString("text to speech in browser"));
SoAnchor103->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor103->setUrl(new QString[]{QString("http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change")}, 1);
SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromField(QString("textToSpeechUrl"));
SoROUTE104->setFromNode(QString("TextScript"));
SoROUTE104->setToField(QString("url"));
SoROUTE104->setToNode(QString("TextToSpeechAnchor"));
SoAnchor103->addChild(*SoROUTE104);

SoShape* SoShape105 = new SoShape();
SoText* SoText106 = new SoText();
SoText106->setString(new QString[]{QString("speech")}, 1);
SoFontStyle* SoFontStyle107 = new SoFontStyle();
SoFontStyle107->setUSE(QString("MessageFont"));
SoText106->setFontStyle(*SoFontStyle107);

SoShape105->setGeometry(*SoText106);

SoVRMLAppearance* SoVRMLAppearance108 = new SoVRMLAppearance();
SoVRMLAppearance108->setUSE(QString("InterfaceAppearance"));
SoShape105->addChild(*SoVRMLAppearance108);

SoAnchor103->addChild(*SoShape105);

SoTransform* SoTransform109 = new SoTransform();
SoTransform109->setScale(new float[]{1.8,0.6,1.0});
SoShape* SoShape110 = new SoShape();
SoShape110->setUSE(QString("TransparentClickSurface"));
SoTransform109->addChild(*SoShape110);

SoAnchor103->addChild(*SoTransform109);

SoTransform102->addChild(*SoAnchor103);

SoNode33->addChild(*SoTransform102);

SoSceneManager0->setSceneGraph(*SoNode33);

return 0;
}
