#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ObliqueStrategies.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Text scripting and animation example using Oblique Strategies card set by Brian Eno.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman, John Kelly, Ben Cheng";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "3 November 2013";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "10 November 2019";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "oblique.html";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "ObliqueStrategies.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "ObliqueStrategiesScript.js";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.eno-web.co.uk/obliques.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "http://gothpunk.com/haiku-intro.html";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "http://www.rtqe.net/ObliqueStrategies/OSintro.html";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "https://en.wikipedia.org/wiki/Oblique_Strategies";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "subject";
meta15.content = "Brian Eno, Oblique Strategies";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "Image";
meta16.content = "images/ObliqueStrategiesEntryScreen.png";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "Sound";
meta17.content = "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "Sound";
meta18.content = "translate_tts_HelloX3D.mp3";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "Sound";
meta19.content = "translate_tts_HelloX3D.wav";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "TODO";
meta20.content = "multiliingual translation parameter";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "warning";
meta23.content = "under development, scene Sound/AudioClip triggering (or retrieved file format) not working";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "warning";
meta24.content = "TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "https://gist.github.com/alotaiba/1728771";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "Sound";
meta27.content = "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "Sound";
meta28.content = "translate_tts_HelloX3D4.mp3";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "reference";
meta29.content = "https://cloud.google.com/translate/docs/basic/translating-text";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "identifier";
meta30.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "generator";
meta31.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "license";
meta32.content = "../license.html";
head1.meta[30] = meta32;

head = head1;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.title = "ObliqueStrategies.x3d";
children = new MFNode();

children[0] = WorldInfo34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
NavigationInfo35.type = new MFString(new java.lang.String["NONE"]);
children[1] = NavigationInfo35;

Background Background36 = createNode("Background");
Background36.skyColor = new MFColor(new float[0.419608,0.427451,1]);
children[2] = Background36;

Transform Transform37 = createNode("Transform");
Transform37.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform37.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor38 = createNode("TouchSensor");
TouchSensor38.DEF = "RandomTextClickedSensor";
TouchSensor38.description = "Select to see a new strategy";
Transform37.children = new MFNode();

Transform37.children[0] = TouchSensor38;

Shape Shape39 = createNode("Shape");
Text Text40 = createNode("Text");
Text40.string = new MFString(new java.lang.String["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]);
FontStyle FontStyle41 = createNode("FontStyle");
FontStyle41.DEF = "MessageFont";
FontStyle41.family = new MFString(new java.lang.String["SANS"]);
FontStyle41.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle41.style = "BOLD";
Text40.fontStyle = FontStyle41;

Shape39.geometry = Text40;

Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape39.appearance = Appearance42;

Transform37.child[1] = Shape39;

Transform Transform44 = createNode("Transform");
Transform44.scale = new SFVec3f(new float[10,3,1]);
Shape Shape45 = createNode("Shape");
Shape45.DEF = "HeadlineClickSurface";
IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet46.solid = False;
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape45.geometry = IndexedFaceSet46;

Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.ambientIntensity = 0.245763;
Material49.diffuseColor = new SFColor(new float[0.34773,0.090909,0.005289]);
Material49.shininess = 0.07;
Material49.specularColor = new SFColor(new float[0.336735,0.051091,0.051091]);
Material49.transparency = 0.8;
Appearance48.material = Material49;

Shape45.appearance = Appearance48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Transform37.children[2] = Transform44;

children[3] = Transform37;

Script Script50 = createNode("Script");
Script50.DEF = "TextScript";
Script50.url = new MFString(new java.lang.String["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
field field51 = createNode("field");
field51.name = "index";
field51.accessType = "initializeOnly";
field51.appinfo = "index for active strategy card, -1 means no selection";
field51.type = "SFInt32";
field51.value = "0";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "string_changed";
field52.accessType = "outputOnly";
field52.appinfo = "latest strategy card value";
field52.type = "MFString";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "textToSpeechUrl";
field53.accessType = "outputOnly";
field53.appinfo = "\"url to invoke Google Translate\"";
field53.type = "MFString";
Script50.field[2] = field53;

field field54 = createNode("field");
field54.name = "newCardTime";
field54.accessType = "outputOnly";
field54.appinfo = "activate Sound node";
field54.type = "SFTime";
Script50.field[3] = field54;

field field55 = createNode("field");
field55.name = "selectPreviousCard";
field55.accessType = "inputOnly";
field55.type = "SFBool";
Script50.field[4] = field55;

field field56 = createNode("field");
field56.name = "selectNextCard";
field56.accessType = "inputOnly";
field56.type = "SFBool";
Script50.field[5] = field56;

field field57 = createNode("field");
field57.name = "selectRandomCard";
field57.accessType = "inputOnly";
field57.type = "SFBool";
Script50.field[6] = field57;

field field58 = createNode("field");
field58.name = "traceEnabled";
field58.accessType = "initializeOnly";
field58.appinfo = "controls console tracing";
field58.type = "SFBool";
field58.value = "true";
Script50.field[7] = field58;

children[4] = Script50;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "CardTransform";
Transform59.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform59.translation = new SFVec3f(new float[0,-1.5,0]);
Shape Shape60 = createNode("Shape");
Text Text61 = createNode("Text");
Text61.DEF = "CardText";
FontStyle FontStyle62 = createNode("FontStyle");
FontStyle62.family = new MFString(new java.lang.String["SANS"]);
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle62.style = "BOLD";
Text61.fontStyle = FontStyle62;

Shape60.geometry = Text61;

Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Appearance63.material = Material64;

Shape60.appearance = Appearance63;

Transform59.child = new undefined();

Transform59.child[0] = Shape60;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromField = "string_changed";
ROUTE65.fromNode = "TextScript";
ROUTE65.toField = "string";
ROUTE65.toNode = "CardText";
Transform59.children[1] = ROUTE65;

Sound Sound66 = createNode("Sound");
Sound66.DEF = "CardSoundSpatialization";
Sound66.maxBack = 100;
Sound66.maxFront = 100;
Sound66.minBack = 20;
Sound66.minFront = 20;
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
AudioClip AudioClip67 = createNode("AudioClip");
AudioClip67.DEF = "TextToSpeechAudioClip";
AudioClip67.description = "sends strategy text google translate";
AudioClip67.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]);
Sound66.source = AudioClip67;

Transform59.children[2] = Sound66;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromField = "textToSpeechUrl";
ROUTE68.fromNode = "TextScript";
ROUTE68.toField = "url";
ROUTE68.toNode = "TextToSpeechAudioClip";
Transform59.children[3] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromField = "newCardTime";
ROUTE69.fromNode = "TextScript";
ROUTE69.toField = "startTime";
ROUTE69.toNode = "TextToSpeechAudioClip";
Transform59.children[4] = ROUTE69;

children[5] = Transform59;

Transform Transform70 = createNode("Transform");
Transform70.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform70.translation = new SFVec3f(new float[-3.2,2.5,0]);
TouchSensor TouchSensor71 = createNode("TouchSensor");
TouchSensor71.DEF = "PreviousTextClickedSensor";
TouchSensor71.description = "Select to see previous strategy";
Transform70.children = new MFNode();

Transform70.children[0] = TouchSensor71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromField = "isActive";
ROUTE72.fromNode = "PreviousTextClickedSensor";
ROUTE72.toField = "selectPreviousCard";
ROUTE72.toNode = "TextScript";
Transform70.children[1] = ROUTE72;

Shape Shape73 = createNode("Shape");
Text Text74 = createNode("Text");
Text74.string = new MFString(new java.lang.String["previous"]);
FontStyle FontStyle75 = createNode("FontStyle");
FontStyle75.USE = "MessageFont";
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

Appearance Appearance76 = createNode("Appearance");
Appearance76.DEF = "InterfaceAppearance";
Material Material77 = createNode("Material");
Material77.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance76.material = Material77;

Shape73.appearance = Appearance76;

Transform70.child[2] = Shape73;

Transform Transform78 = createNode("Transform");
Transform78.scale = new SFVec3f(new float[2,0.6,1]);
Shape Shape79 = createNode("Shape");
Shape79.DEF = "TransparentClickSurface";
//support Selectable Text with a scalable IFS
IndexedFaceSet IndexedFaceSet80 = createNode("IndexedFaceSet");
IndexedFaceSet80.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet80.solid = False;
Coordinate Coordinate81 = createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet80.coord = Coordinate81;

Shape79.geometry = IndexedFaceSet80;

Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.transparency = 1;
Appearance82.material = Material83;

Shape79.appearance = Appearance82;

Transform78.child = new undefined();

Transform78.child[0] = Shape79;

Transform70.children[3] = Transform78;

children[6] = Transform70;

Transform Transform84 = createNode("Transform");
Transform84.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform84.translation = new SFVec3f(new float[3.5,2.5,0]);
TouchSensor TouchSensor85 = createNode("TouchSensor");
TouchSensor85.DEF = "NextTextClickedSensor";
TouchSensor85.description = "Select to see next strategy";
Transform84.children = new MFNode();

Transform84.children[0] = TouchSensor85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromField = "isActive";
ROUTE86.fromNode = "NextTextClickedSensor";
ROUTE86.toField = "selectNextCard";
ROUTE86.toNode = "TextScript";
Transform84.children[1] = ROUTE86;

Shape Shape87 = createNode("Shape");
Text Text88 = createNode("Text");
Text88.string = new MFString(new java.lang.String["next"]);
FontStyle FontStyle89 = createNode("FontStyle");
FontStyle89.USE = "MessageFont";
Text88.fontStyle = FontStyle89;

Shape87.geometry = Text88;

Appearance Appearance90 = createNode("Appearance");
Appearance90.USE = "InterfaceAppearance";
Shape87.appearance = Appearance90;

Transform84.child[2] = Shape87;

Transform Transform91 = createNode("Transform");
Transform91.scale = new SFVec3f(new float[1.2,0.6,1]);
Shape Shape92 = createNode("Shape");
Shape92.USE = "TransparentClickSurface";
Transform91.child = new undefined();

Transform91.child[0] = Shape92;

Transform84.children[3] = Transform91;

children[7] = Transform84;

Transform Transform93 = createNode("Transform");
Transform93.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform93.translation = new SFVec3f(new float[-3.3,-0.5,0]);
TouchSensor TouchSensor94 = createNode("TouchSensor");
TouchSensor94.USE = "RandomTextClickedSensor";
Transform93.children = new MFNode();

Transform93.children[0] = TouchSensor94;

ROUTE ROUTE95 = createNode("ROUTE");
ROUTE95.fromField = "isActive";
ROUTE95.fromNode = "RandomTextClickedSensor";
ROUTE95.toField = "selectRandomCard";
ROUTE95.toNode = "TextScript";
Transform93.children[1] = ROUTE95;

Shape Shape96 = createNode("Shape");
Text Text97 = createNode("Text");
Text97.string = new MFString(new java.lang.String["random"]);
FontStyle FontStyle98 = createNode("FontStyle");
FontStyle98.USE = "MessageFont";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

Appearance Appearance99 = createNode("Appearance");
Appearance99.USE = "InterfaceAppearance";
Shape96.appearance = Appearance99;

Transform93.child[2] = Shape96;

Transform Transform100 = createNode("Transform");
Transform100.scale = new SFVec3f(new float[1.8,0.6,1]);
Shape Shape101 = createNode("Shape");
Shape101.USE = "TransparentClickSurface";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

Transform93.children[3] = Transform100;

children[8] = Transform93;

Transform Transform102 = createNode("Transform");
Transform102.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform102.translation = new SFVec3f(new float[3.3,-0.5,0]);
Anchor Anchor103 = createNode("Anchor");
Anchor103.DEF = "TextToSpeechAnchor";
Anchor103.description = "text to speech in browser";
Anchor103.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor103.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]);
ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromField = "textToSpeechUrl";
ROUTE104.fromNode = "TextScript";
ROUTE104.toField = "url";
ROUTE104.toNode = "TextToSpeechAnchor";
Anchor103.children = new MFNode();

Anchor103.children[0] = ROUTE104;

Shape Shape105 = createNode("Shape");
Text Text106 = createNode("Text");
Text106.string = new MFString(new java.lang.String["speech"]);
FontStyle FontStyle107 = createNode("FontStyle");
FontStyle107.USE = "MessageFont";
Text106.fontStyle = FontStyle107;

Shape105.geometry = Text106;

Appearance Appearance108 = createNode("Appearance");
Appearance108.USE = "InterfaceAppearance";
Shape105.appearance = Appearance108;

Anchor103.children[1] = Shape105;

Transform Transform109 = createNode("Transform");
Transform109.scale = new SFVec3f(new float[1.8,0.6,1]);
Shape Shape110 = createNode("Shape");
Shape110.USE = "TransparentClickSurface";
Transform109.child = new undefined();

Transform109.child[0] = Shape110;

Anchor103.children[2] = Transform109;

Transform102.children = new MFNode();

Transform102.children[0] = Anchor103;

children[9] = Transform102;

}
