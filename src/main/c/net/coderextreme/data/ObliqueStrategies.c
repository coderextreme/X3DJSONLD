#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta15.name = "reference";
meta15.content = "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "https://gist.github.com/alotaiba/1728771";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "https://cloud.google.com/translate/docs/basic/translating-text";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "subject";
meta20.content = "Brian Eno, Oblique Strategies";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "Image";
meta21.content = "images/ObliqueStrategiesEntryScreen.png";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "Sound";
meta22.content = "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "Sound";
meta23.content = "translate_tts_HelloX3D.mp3";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "Sound";
meta24.content = "translate_tts_HelloX3D.wav";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "Sound";
meta25.content = "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "Sound";
meta26.content = "translate_tts_HelloX3D4.mp3";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "TODO";
meta27.content = "multiliingual translation parameter";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "warning";
meta28.content = "under development, scene Sound/AudioClip triggering (or retrieved file format) not working";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "warning";
meta29.content = "TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "identifier";
meta30.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "generator";
meta31.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[29] = meta31;

head = head1;

WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.title = "ObliqueStrategies.x3d";
children = new MFNode();

children[0] = WorldInfo33;

NavigationInfo NavigationInfo34 = createNode("NavigationInfo");
NavigationInfo34.type = new MFString(new java.lang.String["NONE"]);
children[1] = NavigationInfo34;

Background Background35 = createNode("Background");
Background35.skyColor = new MFColor(new float[0.419608,0.427451,1]);
children[2] = Background35;

Transform Transform36 = createNode("Transform");
Transform36.translation = new SFVec3f(new float[0,1,0]);
Transform36.scale = new SFVec3f(new float[0.4,0.4,0.4]);
TouchSensor TouchSensor37 = createNode("TouchSensor");
TouchSensor37.DEF = "RandomTextClickedSensor";
TouchSensor37.description = "Select to see a new strategy";
Transform36.children = new MFNode();

Transform36.children[0] = TouchSensor37;

Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Text Text41 = createNode("Text");
Text41.string = new MFString(new java.lang.String["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]);
FontStyle FontStyle42 = createNode("FontStyle");
FontStyle42.DEF = "MessageFont";
FontStyle42.family = new MFString(new java.lang.String["SANS"]);
FontStyle42.style = "BOLD";
FontStyle42.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text41.fontStyle = FontStyle42;

Shape38.geometry = Text41;

Transform36.child[1] = Shape38;

Transform Transform43 = createNode("Transform");
Transform43.scale = new SFVec3f(new float[10,3,1]);
Shape Shape44 = createNode("Shape");
Shape44.DEF = "HeadlineClickSurface";
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.ambientIntensity = 0.245763;
Material46.diffuseColor = new SFColor(new float[0.34773,0.090909,0.005289]);
Material46.specularColor = new SFColor(new float[0.336735,0.051091,0.051091]);
Material46.shininess = 0.07;
Material46.transparency = 0.8;
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.solid = False;
IndexedFaceSet47.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet47.coord = Coordinate48;

Shape44.geometry = IndexedFaceSet47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform36.children[2] = Transform43;

children[3] = Transform36;

Script Script49 = createNode("Script");
Script49.DEF = "TextScript";
Script49.url = new MFString(new java.lang.String["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]);
field field50 = createNode("field");
field50.accessType = "initializeOnly";
field50.type = "SFInt32";
field50.name = "index";
Script49.field = new MFNode();

Script49.field[0] = field50;

field field51 = createNode("field");
field51.accessType = "outputOnly";
field51.type = "MFString";
field51.name = "string_changed";
Script49.field[1] = field51;

field field52 = createNode("field");
field52.accessType = "outputOnly";
field52.type = "MFString";
field52.name = "textToSpeechUrl";
Script49.field[2] = field52;

field field53 = createNode("field");
field53.accessType = "outputOnly";
field53.type = "SFTime";
field53.name = "newCardTime";
Script49.field[3] = field53;

field field54 = createNode("field");
field54.accessType = "inputOnly";
field54.type = "SFBool";
field54.name = "selectPreviousCard";
Script49.field[4] = field54;

field field55 = createNode("field");
field55.accessType = "inputOnly";
field55.type = "SFBool";
field55.name = "selectNextCard";
Script49.field[5] = field55;

field field56 = createNode("field");
field56.accessType = "inputOnly";
field56.type = "SFBool";
field56.name = "selectRandomCard";
Script49.field[6] = field56;

field field57 = createNode("field");
field57.accessType = "initializeOnly";
field57.type = "SFBool";
field57.name = "traceEnabled";
field57.value = "true";
Script49.field[7] = field57;

children[4] = Script49;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "CardTransform";
Transform58.translation = new SFVec3f(new float[0,-1.5,0]);
Transform58.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.diffuseColor = new SFColor(new float[1,1,1]);
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

Text Text62 = createNode("Text");
Text62.DEF = "CardText";
Text62.string = new MFString(new java.lang.String["Remove specifics and convert to ambiguities"]);
FontStyle FontStyle63 = createNode("FontStyle");
FontStyle63.family = new MFString(new java.lang.String["SANS"]);
FontStyle63.style = "BOLD";
FontStyle63.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text62.fontStyle = FontStyle63;

Shape59.geometry = Text62;

Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Sound Sound64 = createNode("Sound");
Sound64.DEF = "CardSoundSpatialization";
Sound64.minBack = 20;
Sound64.minFront = 20;
Sound64.maxBack = 100;
Sound64.maxFront = 100;
AudioClip AudioClip65 = createNode("AudioClip");
AudioClip65.DEF = "TextToSpeechAudioClip";
AudioClip65.description = "sends strategy text google translate";
AudioClip65.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities"]);
Sound64.source = AudioClip65;

Transform58.children[1] = Sound64;

children[5] = Transform58;

Transform Transform66 = createNode("Transform");
Transform66.translation = new SFVec3f(new float[-3.2,2.5,0]);
Transform66.scale = new SFVec3f(new float[0.4,0.4,0.4]);
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.DEF = "PreviousTextClickedSensor";
TouchSensor67.description = "Select to see previous strategy";
Transform66.children = new MFNode();

Transform66.children[0] = TouchSensor67;

Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Appearance69.DEF = "InterfaceAppearance";
Material Material70 = createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

Text Text71 = createNode("Text");
Text71.string = new MFString(new java.lang.String["previous"]);
FontStyle FontStyle72 = createNode("FontStyle");
FontStyle72.USE = "MessageFont";
Text71.fontStyle = FontStyle72;

Shape68.geometry = Text71;

Transform66.child[1] = Shape68;

Transform Transform73 = createNode("Transform");
Transform73.scale = new SFVec3f(new float[2,0.6,1]);
Shape Shape74 = createNode("Shape");
Shape74.DEF = "TransparentClickSurface";
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Material76.transparency = 1;
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

IndexedFaceSet IndexedFaceSet77 = createNode("IndexedFaceSet");
IndexedFaceSet77.solid = False;
IndexedFaceSet77.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet77.coord = Coordinate78;

Shape74.geometry = IndexedFaceSet77;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

Transform66.children[2] = Transform73;

children[6] = Transform66;

Transform Transform79 = createNode("Transform");
Transform79.translation = new SFVec3f(new float[3.5,2.5,0]);
Transform79.scale = new SFVec3f(new float[0.4,0.4,0.4]);
TouchSensor TouchSensor80 = createNode("TouchSensor");
TouchSensor80.DEF = "NextTextClickedSensor";
TouchSensor80.description = "Select to see next strategy";
Transform79.children = new MFNode();

Transform79.children[0] = TouchSensor80;

Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Appearance82.USE = "InterfaceAppearance";
Shape81.appearance = Appearance82;

Text Text83 = createNode("Text");
Text83.string = new MFString(new java.lang.String["next"]);
FontStyle FontStyle84 = createNode("FontStyle");
FontStyle84.USE = "MessageFont";
Text83.fontStyle = FontStyle84;

Shape81.geometry = Text83;

Transform79.child[1] = Shape81;

Transform Transform85 = createNode("Transform");
Transform85.scale = new SFVec3f(new float[1.2,0.6,1]);
Shape Shape86 = createNode("Shape");
Shape86.USE = "TransparentClickSurface";
Transform85.child = new undefined();

Transform85.child[0] = Shape86;

Transform79.children[2] = Transform85;

children[7] = Transform79;

Transform Transform87 = createNode("Transform");
Transform87.translation = new SFVec3f(new float[-3.3,-0.5,0]);
Transform87.scale = new SFVec3f(new float[0.4,0.4,0.4]);
TouchSensor TouchSensor88 = createNode("TouchSensor");
TouchSensor88.USE = "RandomTextClickedSensor";
Transform87.children = new MFNode();

Transform87.children[0] = TouchSensor88;

Shape Shape89 = createNode("Shape");
Appearance Appearance90 = createNode("Appearance");
Appearance90.USE = "InterfaceAppearance";
Shape89.appearance = Appearance90;

Text Text91 = createNode("Text");
Text91.string = new MFString(new java.lang.String["random"]);
FontStyle FontStyle92 = createNode("FontStyle");
FontStyle92.USE = "MessageFont";
Text91.fontStyle = FontStyle92;

Shape89.geometry = Text91;

Transform87.child[1] = Shape89;

Transform Transform93 = createNode("Transform");
Transform93.scale = new SFVec3f(new float[1.8,0.6,1]);
Shape Shape94 = createNode("Shape");
Shape94.USE = "TransparentClickSurface";
Transform93.child = new undefined();

Transform93.child[0] = Shape94;

Transform87.children[2] = Transform93;

children[8] = Transform87;

Transform Transform95 = createNode("Transform");
Transform95.translation = new SFVec3f(new float[3.3,-0.5,0]);
Transform95.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Anchor Anchor96 = createNode("Anchor");
Anchor96.DEF = "TextToSpeechAnchor";
Anchor96.description = "text to speech in browser";
Anchor96.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&q=Remove%20specifics%20and%20convert%20to%20ambiguities"]);
Anchor96.parameter = new MFString(new java.lang.String["target=_blank"]);
Shape Shape97 = createNode("Shape");
Appearance Appearance98 = createNode("Appearance");
Appearance98.USE = "InterfaceAppearance";
Shape97.appearance = Appearance98;

Text Text99 = createNode("Text");
Text99.string = new MFString(new java.lang.String["speech"]);
FontStyle FontStyle100 = createNode("FontStyle");
FontStyle100.USE = "MessageFont";
Text99.fontStyle = FontStyle100;

Shape97.geometry = Text99;

Anchor96.children = new MFNode();

Anchor96.children[0] = Shape97;

Transform Transform101 = createNode("Transform");
Transform101.scale = new SFVec3f(new float[1.8,0.6,1]);
Shape Shape102 = createNode("Shape");
Shape102.USE = "TransparentClickSurface";
Transform101.child = new undefined();

Transform101.child[0] = Shape102;

Anchor96.children[1] = Transform101;

Transform95.children = new MFNode();

Transform95.children[0] = Anchor96;

children[9] = Transform95;

ROUTE ROUTE103 = createNode("ROUTE");
ROUTE103.fromNode = "TextScript";
ROUTE103.fromField = "string_changed";
ROUTE103.toNode = "CardText";
ROUTE103.toField = "string";
children[10] = ROUTE103;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "TextScript";
ROUTE104.fromField = "textToSpeechUrl";
ROUTE104.toNode = "TextToSpeechAudioClip";
ROUTE104.toField = "url";
children[11] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "TextScript";
ROUTE105.fromField = "newCardTime";
ROUTE105.toNode = "TextToSpeechAudioClip";
ROUTE105.toField = "startTime";
children[12] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "PreviousTextClickedSensor";
ROUTE106.fromField = "isActive";
ROUTE106.toNode = "TextScript";
ROUTE106.toField = "selectPreviousCard";
children[13] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "NextTextClickedSensor";
ROUTE107.fromField = "isActive";
ROUTE107.toNode = "TextScript";
ROUTE107.toField = "selectNextCard";
children[14] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "RandomTextClickedSensor";
ROUTE108.fromField = "isActive";
ROUTE108.toNode = "TextScript";
ROUTE108.toField = "selectRandomCard";
children[15] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "TextScript";
ROUTE109.fromField = "textToSpeechUrl";
ROUTE109.toNode = "TextToSpeechAnchor";
ROUTE109.toField = "url";
children[16] = ROUTE109;

}
