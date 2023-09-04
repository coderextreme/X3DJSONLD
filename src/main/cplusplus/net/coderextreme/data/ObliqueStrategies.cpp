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
X3D0->setVersion("4.0");
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
meta15->setName("reference");
meta15->setContent("http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("reference");
meta17->setContent("https://gist.github.com/alotaiba/1728771");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("reference");
meta19->setContent("https://cloud.google.com/translate/docs/basic/translating-text");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("subject");
meta20->setContent("Brian Eno, Oblique Strategies");
head1->addMeta(*meta20);

Cmeta* meta21 = new Cmeta();
meta21->setName("Image");
meta21->setContent("images/ObliqueStrategiesEntryScreen.png");
head1->addMeta(*meta21);

Cmeta* meta22 = new Cmeta();
meta22->setName("Sound");
meta22->setContent("http://translate.google.com/translate_tts?tl=en&q=hello%20X3D");
head1->addMeta(*meta22);

Cmeta* meta23 = new Cmeta();
meta23->setName("Sound");
meta23->setContent("translate_tts_HelloX3D.mp3");
head1->addMeta(*meta23);

Cmeta* meta24 = new Cmeta();
meta24->setName("Sound");
meta24->setContent("translate_tts_HelloX3D.wav");
head1->addMeta(*meta24);

Cmeta* meta25 = new Cmeta();
meta25->setName("Sound");
meta25->setContent("https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4");
head1->addMeta(*meta25);

Cmeta* meta26 = new Cmeta();
meta26->setName("Sound");
meta26->setContent("translate_tts_HelloX3D4.mp3");
head1->addMeta(*meta26);

Cmeta* meta27 = new Cmeta();
meta27->setName("TODO");
meta27->setContent("multiliingual translation parameter");
head1->addMeta(*meta27);

Cmeta* meta28 = new Cmeta();
meta28->setName("warning");
meta28->setContent("under development, scene Sound/AudioClip triggering (or retrieved file format) not working");
head1->addMeta(*meta28);

Cmeta* meta29 = new Cmeta();
meta29->setName("warning");
meta29->setContent("TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];");
head1->addMeta(*meta29);

Cmeta* meta30 = new Cmeta();
meta30->setName("identifier");
meta30->setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d");
head1->addMeta(*meta30);

Cmeta* meta31 = new Cmeta();
meta31->setName("generator");
meta31->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta31);

X3D0->setHead(*head1);

CScene* Scene32 = new CScene();
CWorldInfo* WorldInfo33 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo33->setTitle("ObliqueStrategies.x3d");
group->addChildren(*WorldInfo33);

CNavigationInfo* NavigationInfo34 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo34->setType(new CString[1]{"NONE"}, 1);
group->addChildren(*NavigationInfo34);

CBackground* Background35 = (CBackground *)(m_pScene.createNode("Background"));
Background35->setSkyColor(new float[3]{0.419608,0.427451,1});
group->addChildren(*Background35);

CTransform* Transform36 = (CTransform *)(m_pScene.createNode("Transform"));
Transform36->setTranslation(new float[3]{0,1,0});
Transform36->setScale(new float[3]{0.4,0.4,0.4});
CTouchSensor* TouchSensor37 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor37->setDEF("RandomTextClickedSensor");
TouchSensor37->setDescription("Select to see a new strategy");
Transform36->addChildren(*TouchSensor37);

CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{1,1,1});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CText* Text41 = (CText *)(m_pScene.createNode("Text"));
Text41->setString(new CString[5]{"Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"}, 5);
CFontStyle* FontStyle42 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle42->setDEF("MessageFont");
FontStyle42->setFamily(new CString[1]{"SANS"}, 1);
FontStyle42->setStyle("BOLD");
FontStyle42->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text41->setFontStyle(*FontStyle42);

Shape38->setGeometry(Text41);

Transform36->addChild(*Shape38);

CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setScale(new float[3]{10,3,1});
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
Shape44->setDEF("HeadlineClickSurface");
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setAmbientIntensity(0.245763);
Material46->setDiffuseColor(new float[3]{0.34773,0.090909,0.005289});
Material46->setSpecularColor(new float[3]{0.336735,0.051091,0.051091});
Material46->setShininess(0.07);
Material46->setTransparency(0.8);
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CIndexedFaceSet* IndexedFaceSet47 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet47->setSolid(False);
IndexedFaceSet47->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate48 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate48->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet47->setCoord(*Coordinate48);

Shape44->setGeometry(IndexedFaceSet47);

Transform43->addChild(*Shape44);

Transform36->addChildren(*Transform43);

group->addChildren(*Transform36);

CScript* Script49 = (CScript *)(m_pScene.createNode("Script"));
Script49->setDEF("TextScript");
Script49->setUrl(new CString[2]{"ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"}, 2);
Cfield* field50 = new Cfield();
field50->setAccessType("initializeOnly");
field50->setType("SFInt32");
field50->setName("index");
Script49->addField(*field50);

Cfield* field51 = new Cfield();
field51->setAccessType("outputOnly");
field51->setType("MFString");
field51->setName("string_changed");
Script49->addField(*field51);

Cfield* field52 = new Cfield();
field52->setAccessType("outputOnly");
field52->setType("MFString");
field52->setName("textToSpeechUrl");
Script49->addField(*field52);

Cfield* field53 = new Cfield();
field53->setAccessType("outputOnly");
field53->setType("SFTime");
field53->setName("newCardTime");
Script49->addField(*field53);

Cfield* field54 = new Cfield();
field54->setAccessType("inputOnly");
field54->setType("SFBool");
field54->setName("selectPreviousCard");
Script49->addField(*field54);

Cfield* field55 = new Cfield();
field55->setAccessType("inputOnly");
field55->setType("SFBool");
field55->setName("selectNextCard");
Script49->addField(*field55);

Cfield* field56 = new Cfield();
field56->setAccessType("inputOnly");
field56->setType("SFBool");
field56->setName("selectRandomCard");
Script49->addField(*field56);

Cfield* field57 = new Cfield();
field57->setAccessType("initializeOnly");
field57->setType("SFBool");
field57->setName("traceEnabled");
field57->setValue("true");
Script49->addField(*field57);

group->addChildren(*Script49);

CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setDEF("CardTransform");
Transform58->setTranslation(new float[3]{0,-1.5,0});
Transform58->setScale(new float[3]{0.4,0.4,0.4});
CShape* Shape59 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance60 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material61 = (CMaterial *)(m_pScene.createNode("Material"));
Material61->setDiffuseColor(new float[3]{1,1,1});
Appearance60->setMaterial(*Material61);

Shape59->setAppearance(*Appearance60);

CText* Text62 = (CText *)(m_pScene.createNode("Text"));
Text62->setDEF("CardText");
Text62->setString(new CString[1]{"Remove specifics and convert to ambiguities"}, 1);
CFontStyle* FontStyle63 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle63->setFamily(new CString[1]{"SANS"}, 1);
FontStyle63->setStyle("BOLD");
FontStyle63->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text62->setFontStyle(*FontStyle63);

Shape59->setGeometry(Text62);

Transform58->addChild(*Shape59);

CSound* Sound64 = (CSound *)(m_pScene.createNode("Sound"));
Sound64->setDEF("CardSoundSpatialization");
Sound64->setMinBack(20);
Sound64->setMinFront(20);
Sound64->setMaxBack(100);
Sound64->setMaxFront(100);
CAudioClip* AudioClip65 = (CAudioClip *)(m_pScene.createNode("AudioClip"));
AudioClip65->setDEF("TextToSpeechAudioClip");
AudioClip65->setDescription("sends strategy text google translate");
AudioClip65->setUrl(new CString[1]{"http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities"}, 1);
Sound64->setSource(*AudioClip65);

Transform58->addChildren(*Sound64);

group->addChildren(*Transform58);

CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setTranslation(new float[3]{-3.2,2.5,0});
Transform66->setScale(new float[3]{0.4,0.4,0.4});
CTouchSensor* TouchSensor67 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor67->setDEF("PreviousTextClickedSensor");
TouchSensor67->setDescription("Select to see previous strategy");
Transform66->addChildren(*TouchSensor67);

CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance69->setDEF("InterfaceAppearance");
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setDiffuseColor(new float[3]{1,0,0.6});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CText* Text71 = (CText *)(m_pScene.createNode("Text"));
Text71->setString(new CString[1]{"previous"}, 1);
CFontStyle* FontStyle72 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle72->setUSE("MessageFont");
Text71->setFontStyle(*FontStyle72);

Shape68->setGeometry(Text71);

Transform66->addChild(*Shape68);

CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
Transform73->setScale(new float[3]{2,0.6,1});
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
Shape74->setDEF("TransparentClickSurface");
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setTransparency(1);
Appearance75->setMaterial(*Material76);

Shape74->setAppearance(*Appearance75);

CIndexedFaceSet* IndexedFaceSet77 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet77->setSolid(False);
IndexedFaceSet77->setCoordIndex(new int[5]{0,1,2,3,-1});
CCoordinate* Coordinate78 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate78->setPoint(new float[12]{1,1,0,1,-1,0,-1,-1,0,-1,1,0});
IndexedFaceSet77->setCoord(*Coordinate78);

Shape74->setGeometry(IndexedFaceSet77);

Transform73->addChild(*Shape74);

Transform66->addChildren(*Transform73);

group->addChildren(*Transform66);

CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setTranslation(new float[3]{3.5,2.5,0});
Transform79->setScale(new float[3]{0.4,0.4,0.4});
CTouchSensor* TouchSensor80 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor80->setDEF("NextTextClickedSensor");
TouchSensor80->setDescription("Select to see next strategy");
Transform79->addChildren(*TouchSensor80);

CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance82 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance82->setUSE("InterfaceAppearance");
Shape81->setAppearance(*Appearance82);

CText* Text83 = (CText *)(m_pScene.createNode("Text"));
Text83->setString(new CString[1]{"next"}, 1);
CFontStyle* FontStyle84 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle84->setUSE("MessageFont");
Text83->setFontStyle(*FontStyle84);

Shape81->setGeometry(Text83);

Transform79->addChild(*Shape81);

CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setScale(new float[3]{1.2,0.6,1});
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
Shape86->setUSE("TransparentClickSurface");
Transform85->addChild(*Shape86);

Transform79->addChildren(*Transform85);

group->addChildren(*Transform79);

CTransform* Transform87 = (CTransform *)(m_pScene.createNode("Transform"));
Transform87->setTranslation(new float[3]{-3.3,-0.5,0});
Transform87->setScale(new float[3]{0.4,0.4,0.4});
CTouchSensor* TouchSensor88 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor88->setUSE("RandomTextClickedSensor");
Transform87->addChildren(*TouchSensor88);

CShape* Shape89 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance90 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance90->setUSE("InterfaceAppearance");
Shape89->setAppearance(*Appearance90);

CText* Text91 = (CText *)(m_pScene.createNode("Text"));
Text91->setString(new CString[1]{"random"}, 1);
CFontStyle* FontStyle92 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle92->setUSE("MessageFont");
Text91->setFontStyle(*FontStyle92);

Shape89->setGeometry(Text91);

Transform87->addChild(*Shape89);

CTransform* Transform93 = (CTransform *)(m_pScene.createNode("Transform"));
Transform93->setScale(new float[3]{1.8,0.6,1});
CShape* Shape94 = (CShape *)(m_pScene.createNode("Shape"));
Shape94->setUSE("TransparentClickSurface");
Transform93->addChild(*Shape94);

Transform87->addChildren(*Transform93);

group->addChildren(*Transform87);

CTransform* Transform95 = (CTransform *)(m_pScene.createNode("Transform"));
Transform95->setTranslation(new float[3]{3.3,-0.5,0});
Transform95->setScale(new float[3]{0.4,0.4,0.4});
CAnchor* Anchor96 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor96->setDEF("TextToSpeechAnchor");
Anchor96->setDescription("text to speech in browser");
Anchor96->setUrl(new CString[1]{"http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities"}, 1);
Anchor96->setParameter(new CString[1]{"target=_blank"}, 1);
CShape* Shape97 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance98 = (CAppearance *)(m_pScene.createNode("Appearance"));
Appearance98->setUSE("InterfaceAppearance");
Shape97->setAppearance(*Appearance98);

CText* Text99 = (CText *)(m_pScene.createNode("Text"));
Text99->setString(new CString[1]{"speech"}, 1);
CFontStyle* FontStyle100 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle100->setUSE("MessageFont");
Text99->setFontStyle(*FontStyle100);

Shape97->setGeometry(Text99);

Anchor96->addChildren(*Shape97);

CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setScale(new float[3]{1.8,0.6,1});
CShape* Shape102 = (CShape *)(m_pScene.createNode("Shape"));
Shape102->setUSE("TransparentClickSurface");
Transform101->addChild(*Shape102);

Anchor96->addChildren(*Transform101);

Transform95->addChildren(*Anchor96);

group->addChildren(*Transform95);

CROUTE* ROUTE103 = new CROUTE();
ROUTE103->setFromNode("TextScript");
ROUTE103->setFromField("string_changed");
ROUTE103->setToNode("CardText");
ROUTE103->setToField("string");
group->addChildren(*ROUTE103);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromNode("TextScript");
ROUTE104->setFromField("textToSpeechUrl");
ROUTE104->setToNode("TextToSpeechAudioClip");
ROUTE104->setToField("url");
group->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("TextScript");
ROUTE105->setFromField("newCardTime");
ROUTE105->setToNode("TextToSpeechAudioClip");
ROUTE105->setToField("startTime");
group->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("PreviousTextClickedSensor");
ROUTE106->setFromField("isActive");
ROUTE106->setToNode("TextScript");
ROUTE106->setToField("selectPreviousCard");
group->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromNode("NextTextClickedSensor");
ROUTE107->setFromField("isActive");
ROUTE107->setToNode("TextScript");
ROUTE107->setToField("selectNextCard");
group->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromNode("RandomTextClickedSensor");
ROUTE108->setFromField("isActive");
ROUTE108->setToNode("TextScript");
ROUTE108->setToField("selectRandomCard");
group->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromNode("TextScript");
ROUTE109->setFromField("textToSpeechUrl");
ROUTE109->setToNode("TextToSpeechAnchor");
ROUTE109->setToField("url");
group->addChildren(*ROUTE109);

X3D0->setScene(*Scene32);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
