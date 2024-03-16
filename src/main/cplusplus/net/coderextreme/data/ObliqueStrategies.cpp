/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("ObliqueStrategies.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("description");
meta3->setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno.");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("creator");
meta4->setContent("Don Brutzman, John Kelly, Ben Cheng");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("3 November 2013");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("10 November 2019");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("reference");
meta7->setContent("oblique.html");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("ObliqueStrategies.txt");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("reference");
meta9->setContent("ObliqueStrategiesScript.js");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://www.eno-web.co.uk/obliques.html");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("reference");
meta12->setContent("http://gothpunk.com/haiku-intro.html");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("reference");
meta13->setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("reference");
meta14->setContent("https://en.wikipedia.org/wiki/Oblique_Strategies");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("subject");
meta15->setContent("Brian Eno, Oblique Strategies");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("Image");
meta16->setContent("images/ObliqueStrategiesEntryScreen.png");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("Sound");
meta17->setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("Sound");
meta18->setContent("translate_tts_HelloX3D.mp3");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("Sound");
meta19->setContent("translate_tts_HelloX3D.wav");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("TODO");
meta20->setContent("multiliingual translation parameter");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("reference");
meta21->setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech");
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName("reference");
meta22->setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html");
head1->addMeta(meta22);

meta* meta23 = new meta();
meta23->setName("warning");
meta23->setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working");
head1->addMeta(meta23);

meta* meta24 = new meta();
meta24->setName("warning");
meta24->setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];");
head1->addMeta(meta24);

meta* meta25 = new meta();
meta25->setName("reference");
meta25->setContent("https://gist.github.com/alotaiba/1728771");
head1->addMeta(meta25);

meta* meta26 = new meta();
meta26->setName("reference");
meta26->setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api");
head1->addMeta(meta26);

meta* meta27 = new meta();
meta27->setName("Sound");
meta27->setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4");
head1->addMeta(meta27);

meta* meta28 = new meta();
meta28->setName("Sound");
meta28->setContent("translate_tts_HelloX3D4.mp3");
head1->addMeta(meta28);

meta* meta29 = new meta();
meta29->setName("reference");
meta29->setContent("https://cloud.google.com/translate/docs/basic/translating-text");
head1->addMeta(meta29);

meta* meta30 = new meta();
meta30->setName("identifier");
meta30->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d");
head1->addMeta(meta30);

meta* meta31 = new meta();
meta31->setName("generator");
meta31->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta31);

meta* meta32 = new meta();
meta32->setName("license");
meta32->setContent("../license.html");
head1->addMeta(meta32);

X3D0->setHead(head1);

Scene* Scene33 = new Scene();
WorldInfo* WorldInfo34 = new WorldInfo();
WorldInfo34->setTitle("ObliqueStrategies.x3d");
Scene33->addChild(WorldInfo34);

NavigationInfo* NavigationInfo35 = new NavigationInfo();
NavigationInfo35->setType(new String[1]{"NONE"}, 1);
Scene33->addChild(NavigationInfo35);

Background* Background36 = new Background();
Background36->setSkyColor(new float[3]{0.419608,0.427451,1});
Scene33->addChild(Background36);

Transform* Transform37 = new Transform();
Transform37->setScale(new float[3]{0.4,0.4,0.4});
Transform37->setTranslation(new float[3]{0,1,0});
TouchSensor* TouchSensor38 = new TouchSensor();
TouchSensor38->setDEF("RandomTextClickedSensor");
TouchSensor38->setDescription("Select to see a new strategy");
Transform37->addChild(TouchSensor38);

Shape* Shape39 = new Shape();
Text* Text40 = new Text();
Text40->setString(new String[5]{"Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"}, 5);
FontStyle* FontStyle41 = new FontStyle();
FontStyle41->setDEF("MessageFont");
FontStyle41->setFamily(new String[1]{"SANS"}, 1);
FontStyle41->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle41->setStyle("BOLD");
Text40->setFontStyle(FontStyle41);

Shape39->setGeometry(Text40);

Appearance* Appearance42 = new Appearance();
Material* Material43 = new Material();
Material43->setDiffuseColor(new float[3]{1,1,1});
Appearance42->setMaterial(Material43);

Shape39->setAppearance(Appearance42);

Transform37->addChild(Shape39);

Transform* Transform44 = new Transform();
Transform44->setScale(new float[3]{10,3,1});
Shape* Shape45 = new Shape();
Shape45->setDEF("HeadlineClickSurface");
IndexedFaceSet* IndexedFaceSet46 = new IndexedFaceSet();
IndexedFaceSet46->setCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet46->setSolid(False);
Coordinate* Coordinate47 = new Coordinate();
Coordinate47->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet46->setCoord(Coordinate47);

Shape45->setGeometry(IndexedFaceSet46);

Appearance* Appearance48 = new Appearance();
Material* Material49 = new Material();
Material49->setAmbientIntensity(0.245763);
Material49->setDiffuseColor(new float[3]{0.34773,0.090909,0.005289});
Material49->setShininess(0.07);
Material49->setSpecularColor(new float[3]{0.336735,0.051091,0.051091});
Material49->setTransparency(0.8);
Appearance48->setMaterial(Material49);

Shape45->setAppearance(Appearance48);

Transform44->addChild(Shape45);

Transform37->addChild(Transform44);

Scene33->addChild(Transform37);

Script* Script50 = new Script();
Script50->setDEF("TextScript");
Script50->setUrl(new String[2]{"ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"}, 2);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
field* field51 = new field();
field51->setName("index");
field51->setAccessType("initializeOnly");
field51->setAppinfo("index for active strategy card, -1 means no selection");
field51->setType("SFInt32");
field51->setValue("0");
Script50->addField(field51);

field* field52 = new field();
field52->setName("string_changed");
field52->setAccessType("outputOnly");
field52->setAppinfo("latest strategy card value");
field52->setType("MFString");
Script50->addField(field52);

field* field53 = new field();
field53->setName("textToSpeechUrl");
field53->setAccessType("outputOnly");
field53->setAppinfo("\"url to invoke Google Translate\"");
field53->setType("MFString");
Script50->addField(field53);

field* field54 = new field();
field54->setName("newCardTime");
field54->setAccessType("outputOnly");
field54->setAppinfo("activate Sound node");
field54->setType("SFTime");
Script50->addField(field54);

field* field55 = new field();
field55->setName("selectPreviousCard");
field55->setAccessType("inputOnly");
field55->setType("SFBool");
Script50->addField(field55);

field* field56 = new field();
field56->setName("selectNextCard");
field56->setAccessType("inputOnly");
field56->setType("SFBool");
Script50->addField(field56);

field* field57 = new field();
field57->setName("selectRandomCard");
field57->setAccessType("inputOnly");
field57->setType("SFBool");
Script50->addField(field57);

field* field58 = new field();
field58->setName("traceEnabled");
field58->setAccessType("initializeOnly");
field58->setAppinfo("controls console tracing");
field58->setType("SFBool");
field58->setValue("true");
Script50->addField(field58);

Scene33->addChild(Script50);

Transform* Transform59 = new Transform();
Transform59->setDEF("CardTransform");
Transform59->setScale(new float[3]{0.4,0.4,0.4});
Transform59->setTranslation(new float[3]{0,-1.5,0});
Shape* Shape60 = new Shape();
Text* Text61 = new Text();
Text61->setDEF("CardText");
FontStyle* FontStyle62 = new FontStyle();
FontStyle62->setFamily(new String[1]{"SANS"}, 1);
FontStyle62->setJustify(new String[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle62->setStyle("BOLD");
Text61->setFontStyle(FontStyle62);

Shape60->setGeometry(Text61);

Appearance* Appearance63 = new Appearance();
Material* Material64 = new Material();
Material64->setDiffuseColor(new float[3]{1,1,1});
Appearance63->setMaterial(Material64);

Shape60->setAppearance(Appearance63);

Transform59->addChild(Shape60);

ROUTE* ROUTE65 = new ROUTE();
ROUTE65->setFromField("string_changed");
ROUTE65->setFromNode("TextScript");
ROUTE65->setToField("string");
ROUTE65->setToNode("CardText");
Transform59->addChild(ROUTE65);

Sound* Sound66 = new Sound();
Sound66->setDEF("CardSoundSpatialization");
Sound66->setMaxBack(100);
Sound66->setMaxFront(100);
Sound66->setMinBack(20);
Sound66->setMinFront(20);
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
AudioClip* AudioClip67 = new AudioClip();
AudioClip67->setDEF("TextToSpeechAudioClip");
AudioClip67->setDescription("sends strategy text google translate");
AudioClip67->setUrl(new String[3]{"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"}, 3);
Sound66->setSource(AudioClip67);

Transform59->addChild(Sound66);

ROUTE* ROUTE68 = new ROUTE();
ROUTE68->setFromField("textToSpeechUrl");
ROUTE68->setFromNode("TextScript");
ROUTE68->setToField("url");
ROUTE68->setToNode("TextToSpeechAudioClip");
Transform59->addChild(ROUTE68);

ROUTE* ROUTE69 = new ROUTE();
ROUTE69->setFromField("newCardTime");
ROUTE69->setFromNode("TextScript");
ROUTE69->setToField("startTime");
ROUTE69->setToNode("TextToSpeechAudioClip");
Transform59->addChild(ROUTE69);

Scene33->addChild(Transform59);

Transform* Transform70 = new Transform();
Transform70->setScale(new float[3]{0.4,0.4,0.4});
Transform70->setTranslation(new float[3]{-3.2,2.5,0});
TouchSensor* TouchSensor71 = new TouchSensor();
TouchSensor71->setDEF("PreviousTextClickedSensor");
TouchSensor71->setDescription("Select to see previous strategy");
Transform70->addChild(TouchSensor71);

ROUTE* ROUTE72 = new ROUTE();
ROUTE72->setFromField("isActive");
ROUTE72->setFromNode("PreviousTextClickedSensor");
ROUTE72->setToField("selectPreviousCard");
ROUTE72->setToNode("TextScript");
Transform70->addChild(ROUTE72);

Shape* Shape73 = new Shape();
Text* Text74 = new Text();
Text74->setString(new String[1]{"previous"}, 1);
FontStyle* FontStyle75 = new FontStyle();
FontStyle75->setUSE("MessageFont");
Text74->setFontStyle(FontStyle75);

Shape73->setGeometry(Text74);

Appearance* Appearance76 = new Appearance();
Appearance76->setDEF("InterfaceAppearance");
Material* Material77 = new Material();
Material77->setDiffuseColor(new float[3]{1,0,0.6});
Appearance76->setMaterial(Material77);

Shape73->setAppearance(Appearance76);

Transform70->addChild(Shape73);

Transform* Transform78 = new Transform();
Transform78->setScale(new float[3]{2,0.6,1});
Shape* Shape79 = new Shape();
Shape79->setDEF("TransparentClickSurface");
//support Selectable Text with a scalable IFS
IndexedFaceSet* IndexedFaceSet80 = new IndexedFaceSet();
IndexedFaceSet80->setCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet80->setSolid(False);
Coordinate* Coordinate81 = new Coordinate();
Coordinate81->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet80->setCoord(Coordinate81);

Shape79->setGeometry(IndexedFaceSet80);

Appearance* Appearance82 = new Appearance();
Material* Material83 = new Material();
Material83->setTransparency(1);
Appearance82->setMaterial(Material83);

Shape79->setAppearance(Appearance82);

Transform78->addChild(Shape79);

Transform70->addChild(Transform78);

Scene33->addChild(Transform70);

Transform* Transform84 = new Transform();
Transform84->setScale(new float[3]{0.4,0.4,0.4});
Transform84->setTranslation(new float[3]{3.5,2.5,0});
TouchSensor* TouchSensor85 = new TouchSensor();
TouchSensor85->setDEF("NextTextClickedSensor");
TouchSensor85->setDescription("Select to see next strategy");
Transform84->addChild(TouchSensor85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromField("isActive");
ROUTE86->setFromNode("NextTextClickedSensor");
ROUTE86->setToField("selectNextCard");
ROUTE86->setToNode("TextScript");
Transform84->addChild(ROUTE86);

Shape* Shape87 = new Shape();
Text* Text88 = new Text();
Text88->setString(new String[1]{"next"}, 1);
FontStyle* FontStyle89 = new FontStyle();
FontStyle89->setUSE("MessageFont");
Text88->setFontStyle(FontStyle89);

Shape87->setGeometry(Text88);

Appearance* Appearance90 = new Appearance();
Appearance90->setUSE("InterfaceAppearance");
Shape87->setAppearance(Appearance90);

Transform84->addChild(Shape87);

Transform* Transform91 = new Transform();
Transform91->setScale(new float[3]{1.2,0.6,1});
Shape* Shape92 = new Shape();
Shape92->setUSE("TransparentClickSurface");
Transform91->addChild(Shape92);

Transform84->addChild(Transform91);

Scene33->addChild(Transform84);

Transform* Transform93 = new Transform();
Transform93->setScale(new float[3]{0.4,0.4,0.4});
Transform93->setTranslation(new float[3]{-3.3,-0.5,0});
TouchSensor* TouchSensor94 = new TouchSensor();
TouchSensor94->setUSE("RandomTextClickedSensor");
Transform93->addChild(TouchSensor94);

ROUTE* ROUTE95 = new ROUTE();
ROUTE95->setFromField("isActive");
ROUTE95->setFromNode("RandomTextClickedSensor");
ROUTE95->setToField("selectRandomCard");
ROUTE95->setToNode("TextScript");
Transform93->addChild(ROUTE95);

Shape* Shape96 = new Shape();
Text* Text97 = new Text();
Text97->setString(new String[1]{"random"}, 1);
FontStyle* FontStyle98 = new FontStyle();
FontStyle98->setUSE("MessageFont");
Text97->setFontStyle(FontStyle98);

Shape96->setGeometry(Text97);

Appearance* Appearance99 = new Appearance();
Appearance99->setUSE("InterfaceAppearance");
Shape96->setAppearance(Appearance99);

Transform93->addChild(Shape96);

Transform* Transform100 = new Transform();
Transform100->setScale(new float[3]{1.8,0.6,1});
Shape* Shape101 = new Shape();
Shape101->setUSE("TransparentClickSurface");
Transform100->addChild(Shape101);

Transform93->addChild(Transform100);

Scene33->addChild(Transform93);

Transform* Transform102 = new Transform();
Transform102->setScale(new float[3]{0.4,0.4,0.4});
Transform102->setTranslation(new float[3]{3.3,-0.5,0});
Anchor* Anchor103 = new Anchor();
Anchor103->setDEF("TextToSpeechAnchor");
Anchor103->setDescription("text to speech in browser");
Anchor103->setParameter(new String[1]{"target=_blank"}, 1);
Anchor103->setUrl(new String[1]{"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"}, 1);
ROUTE* ROUTE104 = new ROUTE();
ROUTE104->setFromField("textToSpeechUrl");
ROUTE104->setFromNode("TextScript");
ROUTE104->setToField("url");
ROUTE104->setToNode("TextToSpeechAnchor");
Anchor103->addChild(ROUTE104);

Shape* Shape105 = new Shape();
Text* Text106 = new Text();
Text106->setString(new String[1]{"speech"}, 1);
FontStyle* FontStyle107 = new FontStyle();
FontStyle107->setUSE("MessageFont");
Text106->setFontStyle(FontStyle107);

Shape105->setGeometry(Text106);

Appearance* Appearance108 = new Appearance();
Appearance108->setUSE("InterfaceAppearance");
Shape105->setAppearance(Appearance108);

Anchor103->addChild(Shape105);

Transform* Transform109 = new Transform();
Transform109->setScale(new float[3]{1.8,0.6,1});
Shape* Shape110 = new Shape();
Shape110->setUSE("TransparentClickSurface");
Transform109->addChild(Shape110);

Anchor103->addChild(Transform109);

Transform102->addChild(Anchor103);

Scene33->addChild(Transform102);

X3D0->setScene(Scene33);

X3D0->toXMLString();
}
