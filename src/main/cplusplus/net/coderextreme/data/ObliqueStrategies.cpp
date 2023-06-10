/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("ObliqueStrategies.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Text scripting and animation example using Oblique Strategies card set by Brian Eno.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("Don Brutzman, John Kelly, Ben Cheng");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("3 November 2013");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("10 November 2019");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("reference");
meta7->setContent("oblique.html");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("ObliqueStrategies.txt");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("ObliqueStrategiesScript.js");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("reference");
meta10->setContent("http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("http://www.eno-web.co.uk/obliques.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("reference");
meta12->setContent("http://gothpunk.com/haiku-intro.html");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("http://www.rtqe.net/ObliqueStrategies/OSintro.html");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("https://en.wikipedia.org/wiki/Oblique_Strategies");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("subject");
meta15->setContent("Brian Eno, Oblique Strategies");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("Image");
meta16->setContent("images/ObliqueStrategiesEntryScreen.png");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("Sound");
meta17->setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("Sound");
meta18->setContent("translate_tts_HelloX3D.mp3");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("Sound");
meta19->setContent("translate_tts_HelloX3D.wav");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("TODO");
meta20->setContent("multiliingual translation parameter");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("reference");
meta21->setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("reference");
meta22->setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("warning");
meta23->setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("warning");
meta24->setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("reference");
meta25->setContent("https://gist.github.com/alotaiba/1728771");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("reference");
meta26->setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("Sound");
meta27->setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("Sound");
meta28->setContent("translate_tts_HelloX3D4.mp3");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("reference");
meta29->setContent("https://cloud.google.com/translate/docs/basic/translating-text");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("identifier");
meta30->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("generator");
meta31->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta31);

Cmeta* meta32 = new Cmeta();
meta32->setName("license");
meta32->setContent("../license.html");
head1->addMeta(*meta32);

X3D0->setHead(*head1);

CScene* Scene33 = new CScene();
CWorldInfo* WorldInfo34 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo34->setTitle("ObliqueStrategies.x3d");
group->addChildren(*WorldInfo34);

CNavigationInfo* NavigationInfo35 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo35->setType(new CString[1]{"NONE"}, 1);
group->addChildren(*NavigationInfo35);

CBackground* Background36 = (CBackground *)(m_pScene.createNode("Background"));
Background36->setSkyColor(new float[3]{0.419608,0.427451,1});
group->addChildren(*Background36);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setScale(new float[3]{0.4,0.4,0.4});
Transform37->setTranslation(new float[3]{0,1,0});
CTouchSensor* TouchSensor38 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor38->setDEF("RandomTextClickedSensor");
TouchSensor38->setDescription("Select to see a new strategy");
Transform37->addChildren(*TouchSensor38);

CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text40 = (CText *)(m_pScene.createNode("Text"));
Text40->setString(new CString[5]{"Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"}, 5);
CFontStyle* FontStyle41 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle41->setDEF("MessageFont");
FontStyle41->setFamily(new CString[1]{"SANS"}, 1);
FontStyle41->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle41->setStyle("BOLD");
Text40->setFontStyle(*FontStyle41);

Shape39->setGeometry(Text40);

CAppearance* Appearance42 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material43 = (CMaterial *)(m_pScene.createNode("Material"));
Material43->setDiffuseColor(new float[3]{1,1,1});
Appearance42->setMaterial(*Material43);

Shape39->setAppearance(*Appearance42);

Transform37->addChildren(*Shape39);

CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setScale(new float[3]{10,3,1});
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
Shape45->setDEF("HeadlineClickSurface");
CIndexedFaceSet* IndexedFaceSet46 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet46->setCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet46->setSolid(False);
CCoordinate* Coordinate47 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate47->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet46->setCoord(*Coordinate47);

Shape45->setGeometry(IndexedFaceSet46);

CAppearance* Appearance48 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material49 = (CMaterial *)(m_pScene.createNode("Material"));
Material49->setAmbientIntensity(0.245763);
Material49->setDiffuseColor(new float[3]{0.34773,0.090909,0.005289});
Material49->setShininess(0.07);
Material49->setSpecularColor(new float[3]{0.336735,0.051091,0.051091});
Material49->setTransparency(0.8);
Appearance48->setMaterial(*Material49);

Shape45->setAppearance(*Appearance48);

Transform44->addChildren(*Shape45);

Transform37->addChildren(*Transform44);

group->addChildren(*Transform37);

CScript* Script50 = (CScript *)(m_pScene.createNode("Script"));
Script50->setDEF("TextScript");
Script50->setUrl(new CString[2]{"ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"}, 2);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
Cfield* field51 = new Cfield();
field51->setName("index");
field51->setAccessType("initializeOnly");
field51->setAppinfo("index for active strategy card, -1 means no selection");
field51->setType("SFInt32");
field51->setValue("0");
Script50->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("string_changed");
field52->setAccessType("outputOnly");
field52->setAppinfo("latest strategy card value");
field52->setType("MFString");
Script50->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("textToSpeechUrl");
field53->setAccessType("outputOnly");
field53->setAppinfo("\"url to invoke Google Translate\"");
field53->setType("MFString");
Script50->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("newCardTime");
field54->setAccessType("outputOnly");
field54->setAppinfo("activate Sound node");
field54->setType("SFTime");
Script50->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("selectPreviousCard");
field55->setAccessType("inputOnly");
field55->setType("SFBool");
Script50->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("selectNextCard");
field56->setAccessType("inputOnly");
field56->setType("SFBool");
Script50->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("selectRandomCard");
field57->setAccessType("inputOnly");
field57->setType("SFBool");
Script50->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("traceEnabled");
field58->setAccessType("initializeOnly");
field58->setAppinfo("controls console tracing");
field58->setType("SFBool");
field58->setValue("true");
Script50->addField(*field58);

group->addChildren(*Script50);

CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setDEF("CardTransform");
Transform59->setScale(new float[3]{0.4,0.4,0.4});
Transform59->setTranslation(new float[3]{0,-1.5,0});
CShape* Shape60 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text61 = (CText *)(m_pScene.createNode("Text"));
Text61->setDEF("CardText");
CFontStyle* FontStyle62 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle62->setFamily(new CString[1]{"SANS"}, 1);
FontStyle62->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle62->setStyle("BOLD");
Text61->setFontStyle(*FontStyle62);

Shape60->setGeometry(Text61);

CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setDiffuseColor(new float[3]{1,1,1});
Appearance63->setMaterial(*Material64);

Shape60->setAppearance(*Appearance63);

Transform59->addChildren(*Shape60);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromField("string_changed");
ROUTE65->setFromNode("TextScript");
ROUTE65->setToField("string");
ROUTE65->setToNode("CardText");
Transform59->addChildren(*ROUTE65);

CSound* Sound66 = (CSound *)(m_pScene.createNode("Sound"));
Sound66->setDEF("CardSoundSpatialization");
Sound66->setMaxBack(100);
Sound66->setMaxFront(100);
Sound66->setMinBack(20);
Sound66->setMinFront(20);
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
CAudioClip* AudioClip67 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip67->setDEF("TextToSpeechAudioClip");
AudioClip67->setDescription("sends strategy text google translate");
AudioClip67->setUrl(new CString[3]{"http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"}, 3);
Sound66->setSource(*AudioClip67);

Transform59->addChildren(*Sound66);

CROUTE* ROUTE68 = new CROUTE();
ROUTE68->setFromField("textToSpeechUrl");
ROUTE68->setFromNode("TextScript");
ROUTE68->setToField("url");
ROUTE68->setToNode("TextToSpeechAudioClip");
Transform59->addChildren(*ROUTE68);

CROUTE* ROUTE69 = new CROUTE();
ROUTE69->setFromField("newCardTime");
ROUTE69->setFromNode("TextScript");
ROUTE69->setToField("startTime");
ROUTE69->setToNode("TextToSpeechAudioClip");
Transform59->addChildren(*ROUTE69);

group->addChildren(*Transform59);

CTransform* Transform70 = (CTransform *)(m_pScene.createNode("Transform"));
Transform70->setScale(new float[3]{0.4,0.4,0.4});
Transform70->setTranslation(new float[3]{-3.2,2.5,0});
CTouchSensor* TouchSensor71 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor71->setDEF("PreviousTextClickedSensor");
TouchSensor71->setDescription("Select to see previous strategy");
Transform70->addChildren(*TouchSensor71);

CROUTE* ROUTE72 = new CROUTE();
ROUTE72->setFromField("isActive");
ROUTE72->setFromNode("PreviousTextClickedSensor");
ROUTE72->setToField("selectPreviousCard");
ROUTE72->setToNode("TextScript");
Transform70->addChildren(*ROUTE72);

CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text74 = (CText *)(m_pScene.createNode("Text"));
Text74->setString(new CString[1]{"previous"}, 1);
CFontStyle* FontStyle75 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle75->setUSE("MessageFont");
Text74->setFontStyle(*FontStyle75);

Shape73->setGeometry(Text74);

CAppearance* Appearance76 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance76->setDEF("InterfaceAppearance");
CMaterial* Material77 = (CMaterial *)(m_pScene.createNode("Material"));
Material77->setDiffuseColor(new float[3]{1,0,0.6});
Appearance76->setMaterial(*Material77);

Shape73->setAppearance(*Appearance76);

Transform70->addChildren(*Shape73);

CTransform* Transform78 = (CTransform *)(m_pScene.createNode("Transform"));
Transform78->setScale(new float[3]{2,0.6,1});
CShape* Shape79 = (CShape *)(m_pScene.createNode("Shape"));
Shape79->setDEF("TransparentClickSurface");
//support Selectable Text with a scalable IFS
CIndexedFaceSet* IndexedFaceSet80 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet80->setCoordIndex(new int[5]{0,1,2,3,-1});
IndexedFaceSet80->setSolid(False);
CCoordinate* Coordinate81 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate81->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet80->setCoord(*Coordinate81);

Shape79->setGeometry(IndexedFaceSet80);

CAppearance* Appearance82 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material83 = (CMaterial *)(m_pScene.createNode("Material"));
Material83->setTransparency(1);
Appearance82->setMaterial(*Material83);

Shape79->setAppearance(*Appearance82);

Transform78->addChildren(*Shape79);

Transform70->addChildren(*Transform78);

group->addChildren(*Transform70);

CTransform* Transform84 = (CTransform *)(m_pScene.createNode("Transform"));
Transform84->setScale(new float[3]{0.4,0.4,0.4});
Transform84->setTranslation(new float[3]{3.5,2.5,0});
CTouchSensor* TouchSensor85 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor85->setDEF("NextTextClickedSensor");
TouchSensor85->setDescription("Select to see next strategy");
Transform84->addChildren(*TouchSensor85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromField("isActive");
ROUTE86->setFromNode("NextTextClickedSensor");
ROUTE86->setToField("selectNextCard");
ROUTE86->setToNode("TextScript");
Transform84->addChildren(*ROUTE86);

CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text88 = (CText *)(m_pScene.createNode("Text"));
Text88->setString(new CString[1]{"next"}, 1);
CFontStyle* FontStyle89 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle89->setUSE("MessageFont");
Text88->setFontStyle(*FontStyle89);

Shape87->setGeometry(Text88);

CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance90->setUSE("InterfaceAppearance");
Shape87->setAppearance(*Appearance90);

Transform84->addChildren(*Shape87);

CTransform* Transform91 = (CTransform *)(m_pScene.createNode("Transform"));
Transform91->setScale(new float[3]{1.2,0.6,1});
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
Shape92->setUSE("TransparentClickSurface");
Transform91->addChildren(*Shape92);

Transform84->addChildren(*Transform91);

group->addChildren(*Transform84);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setScale(new float[3]{0.4,0.4,0.4});
Transform93->setTranslation(new float[3]{-3.3,-0.5,0});
CTouchSensor* TouchSensor94 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor94->setUSE("RandomTextClickedSensor");
Transform93->addChildren(*TouchSensor94);

CROUTE* ROUTE95 = new CROUTE();
ROUTE95->setFromField("isActive");
ROUTE95->setFromNode("RandomTextClickedSensor");
ROUTE95->setToField("selectRandomCard");
ROUTE95->setToNode("TextScript");
Transform93->addChildren(*ROUTE95);

CShape* Shape96 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text97 = (CText *)(m_pScene.createNode("Text"));
Text97->setString(new CString[1]{"random"}, 1);
CFontStyle* FontStyle98 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle98->setUSE("MessageFont");
Text97->setFontStyle(*FontStyle98);

Shape96->setGeometry(Text97);

CAppearance* Appearance99 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance99->setUSE("InterfaceAppearance");
Shape96->setAppearance(*Appearance99);

Transform93->addChildren(*Shape96);

CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setScale(new float[3]{1.8,0.6,1});
CShape* Shape101 = (CShape *)(m_pScene.createNode("Shape"));
Shape101->setUSE("TransparentClickSurface");
Transform100->addChildren(*Shape101);

Transform93->addChildren(*Transform100);

group->addChildren(*Transform93);

CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setScale(new float[3]{0.4,0.4,0.4});
Transform102->setTranslation(new float[3]{3.3,-0.5,0});
CAnchor* Anchor103 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor103->setDEF("TextToSpeechAnchor");
Anchor103->setDescription("text to speech in browser");
Anchor103->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor103->setUrl(new CString[1]{"http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"}, 1);
CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromField("textToSpeechUrl");
ROUTE104->setFromNode("TextScript");
ROUTE104->setToField("url");
ROUTE104->setToNode("TextToSpeechAnchor");
Anchor103->addChildren(*ROUTE104);

CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text106 = (CText *)(m_pScene.createNode("Text"));
Text106->setString(new CString[1]{"speech"}, 1);
CFontStyle* FontStyle107 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle107->setUSE("MessageFont");
Text106->setFontStyle(*FontStyle107);

Shape105->setGeometry(Text106);

CAppearance* Appearance108 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance108->setUSE("InterfaceAppearance");
Shape105->setAppearance(*Appearance108);

Anchor103->addChildren(*Shape105);

CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform109->setScale(new float[3]{1.8,0.6,1});
CShape* Shape110 = (CShape *)(m_pScene.createNode("Shape"));
Shape110->setUSE("TransparentClickSurface");
Transform109->addChildren(*Shape110);

Anchor103->addChildren(*Transform109);

Transform102->addChildren(*Anchor103);

group->addChildren(*Transform102);

X3D0->setScene(*Scene33);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
