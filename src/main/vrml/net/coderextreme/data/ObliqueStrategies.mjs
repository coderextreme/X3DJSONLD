let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ObliqueStrategies.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Text scripting and animation example using Oblique Strategies card set by Brian Eno.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman, John Kelly, Ben Cheng";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "3 November 2013";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "10 November 2019";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "oblique.html";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "ObliqueStrategies.txt";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "ObliqueStrategiesScript.js";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.eno-web.co.uk/obliques.html";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "http://gothpunk.com/haiku-intro.html";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "http://www.rtqe.net/ObliqueStrategies/OSintro.html";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://en.wikipedia.org/wiki/Oblique_Strategies";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "subject";
meta15.content = "Brian Eno, Oblique Strategies";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "Image";
meta16.content = "images/ObliqueStrategiesEntryScreen.png";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "Sound";
meta17.content = "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "Sound";
meta18.content = "translate_tts_HelloX3D.mp3";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "Sound";
meta19.content = "translate_tts_HelloX3D.wav";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "TODO";
meta20.content = "multiliingual translation parameter";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "warning";
meta23.content = "under development, scene Sound/AudioClip triggering (or retrieved file format) not working";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "warning";
meta24.content = "TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "https://gist.github.com/alotaiba/1728771";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "Sound";
meta27.content = "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "Sound";
meta28.content = "translate_tts_HelloX3D4.mp3";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "reference";
meta29.content = "https://cloud.google.com/translate/docs/basic/translating-text";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "identifier";
meta30.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d";
head1.meta[28] = meta30;

let meta31 = browser.currentScene.createNode("meta");
meta31.name = "generator";
meta31.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[29] = meta31;

let meta32 = browser.currentScene.createNode("meta");
meta32.name = "license";
meta32.content = "../license.html";
head1.meta[30] = meta32;

head = head1;

let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.title = "ObliqueStrategies.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo34;

let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo35.type = new MFString(new java.lang.String["NONE"]);
browser.currentScene.children[1] = NavigationInfo35;

let Background36 = browser.currentScene.createNode("Background");
Background36.skyColor = new MFColor(new float[0.419608,0.427451,1]);
browser.currentScene.children[2] = Background36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform37.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor38 = browser.currentScene.createNode("TouchSensor");
TouchSensor38.DEF = "RandomTextClickedSensor";
TouchSensor38.description = "Select to see a new strategy";
Transform37.children = new MFNode();

Transform37.children[0] = TouchSensor38;

let Shape39 = browser.currentScene.createNode("Shape");
let Text40 = browser.currentScene.createNode("Text");
Text40.string = new MFString(new java.lang.String["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]);
let FontStyle41 = browser.currentScene.createNode("FontStyle");
FontStyle41.DEF = "MessageFont";
FontStyle41.family = new MFString(new java.lang.String["SANS"]);
FontStyle41.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle41.style = "BOLD";
Text40.fontStyle = FontStyle41;

Shape39.geometry = Text40;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape39.appearance = Appearance42;

Transform37.children[1] = Shape39;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = new SFVec3f(new float[10,3,1]);
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.DEF = "HeadlineClickSurface";
let IndexedFaceSet46 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet46.solid = False;
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape45.geometry = IndexedFaceSet46;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.ambientIntensity = 0.245763;
Material49.diffuseColor = new SFColor(new float[0.34773,0.090909,0.005289]);
Material49.shininess = 0.07;
Material49.specularColor = new SFColor(new float[0.336735,0.051091,0.051091]);
Material49.transparency = 0.8;
Appearance48.material = Material49;

Shape45.appearance = Appearance48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Transform37.children[2] = Transform44;

browser.currentScene.children[3] = Transform37;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "TextScript";
Script50.url = new MFString(new java.lang.String["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
let field51 = browser.currentScene.createNode("field");
field51.name = "index";
field51.accessType = "initializeOnly";
field51.appinfo = "index for active strategy card, -1 means no selection";
field51.type = "SFInt32";
field51.value = "0";
Script50.field = new MFNode();

Script50.field[0] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "string_changed";
field52.accessType = "outputOnly";
field52.appinfo = "latest strategy card value";
field52.type = "MFString";
Script50.field[1] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "textToSpeechUrl";
field53.accessType = "outputOnly";
field53.appinfo = "\"url to invoke Google Translate\"";
field53.type = "MFString";
Script50.field[2] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "newCardTime";
field54.accessType = "outputOnly";
field54.appinfo = "activate Sound node";
field54.type = "SFTime";
Script50.field[3] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "selectPreviousCard";
field55.accessType = "inputOnly";
field55.type = "SFBool";
Script50.field[4] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "selectNextCard";
field56.accessType = "inputOnly";
field56.type = "SFBool";
Script50.field[5] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "selectRandomCard";
field57.accessType = "inputOnly";
field57.type = "SFBool";
Script50.field[6] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "traceEnabled";
field58.accessType = "initializeOnly";
field58.appinfo = "controls console tracing";
field58.type = "SFBool";
field58.value = "true";
Script50.field[7] = field58;

browser.currentScene.children[4] = Script50;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "CardTransform";
Transform59.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform59.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape60 = browser.currentScene.createNode("Shape");
let Text61 = browser.currentScene.createNode("Text");
Text61.DEF = "CardText";
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.family = new MFString(new java.lang.String["SANS"]);
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle62.style = "BOLD";
Text61.fontStyle = FontStyle62;

Shape60.geometry = Text61;

let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new SFColor(new float[1,1,1]);
Appearance63.material = Material64;

Shape60.appearance = Appearance63;

Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "string_changed";
ROUTE65.fromNode = "TextScript";
ROUTE65.toField = "string";
ROUTE65.toNode = "CardText";
Transform59.children[1] = ROUTE65;

let Sound66 = browser.currentScene.createNode("Sound");
Sound66.DEF = "CardSoundSpatialization";
Sound66.maxBack = 100;
Sound66.maxFront = 100;
Sound66.minBack = 20;
Sound66.minFront = 20;
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
let AudioClip67 = browser.currentScene.createNode("AudioClip");
AudioClip67.DEF = "TextToSpeechAudioClip";
AudioClip67.description = "sends strategy text google translate";
AudioClip67.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]);
Sound66.source = AudioClip67;

Transform59.children[2] = Sound66;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "textToSpeechUrl";
ROUTE68.fromNode = "TextScript";
ROUTE68.toField = "url";
ROUTE68.toNode = "TextToSpeechAudioClip";
Transform59.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "newCardTime";
ROUTE69.fromNode = "TextScript";
ROUTE69.toField = "startTime";
ROUTE69.toNode = "TextToSpeechAudioClip";
Transform59.children[4] = ROUTE69;

browser.currentScene.children[5] = Transform59;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform70.translation = new SFVec3f(new float[-3.2,2.5,0]);
let TouchSensor71 = browser.currentScene.createNode("TouchSensor");
TouchSensor71.DEF = "PreviousTextClickedSensor";
TouchSensor71.description = "Select to see previous strategy";
Transform70.children = new MFNode();

Transform70.children[0] = TouchSensor71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "isActive";
ROUTE72.fromNode = "PreviousTextClickedSensor";
ROUTE72.toField = "selectPreviousCard";
ROUTE72.toNode = "TextScript";
Transform70.children[1] = ROUTE72;

let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new MFString(new java.lang.String["previous"]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.USE = "MessageFont";
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

let Appearance76 = browser.currentScene.createNode("Appearance");
Appearance76.DEF = "InterfaceAppearance";
let Material77 = browser.currentScene.createNode("Material");
Material77.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance76.material = Material77;

Shape73.appearance = Appearance76;

Transform70.children[2] = Shape73;

let Transform78 = browser.currentScene.createNode("Transform");
Transform78.scale = new SFVec3f(new float[2,0.6,1]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.DEF = "TransparentClickSurface";
//support Selectable Text with a scalable IFS
let IndexedFaceSet80 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet80.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet80.solid = False;
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet80.coord = Coordinate81;

Shape79.geometry = IndexedFaceSet80;

let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.transparency = 1;
Appearance82.material = Material83;

Shape79.appearance = Appearance82;

Transform78.children = new MFNode();

Transform78.children[0] = Shape79;

Transform70.children[3] = Transform78;

browser.currentScene.children[6] = Transform70;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform84.translation = new SFVec3f(new float[3.5,2.5,0]);
let TouchSensor85 = browser.currentScene.createNode("TouchSensor");
TouchSensor85.DEF = "NextTextClickedSensor";
TouchSensor85.description = "Select to see next strategy";
Transform84.children = new MFNode();

Transform84.children[0] = TouchSensor85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "isActive";
ROUTE86.fromNode = "NextTextClickedSensor";
ROUTE86.toField = "selectNextCard";
ROUTE86.toNode = "TextScript";
Transform84.children[1] = ROUTE86;

let Shape87 = browser.currentScene.createNode("Shape");
let Text88 = browser.currentScene.createNode("Text");
Text88.string = new MFString(new java.lang.String["next"]);
let FontStyle89 = browser.currentScene.createNode("FontStyle");
FontStyle89.USE = "MessageFont";
Text88.fontStyle = FontStyle89;

Shape87.geometry = Text88;

let Appearance90 = browser.currentScene.createNode("Appearance");
Appearance90.USE = "InterfaceAppearance";
Shape87.appearance = Appearance90;

Transform84.children[2] = Shape87;

let Transform91 = browser.currentScene.createNode("Transform");
Transform91.scale = new SFVec3f(new float[1.2,0.6,1]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "TransparentClickSurface";
Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

Transform84.children[3] = Transform91;

browser.currentScene.children[7] = Transform84;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform93.translation = new SFVec3f(new float[-3.3,-0.5,0]);
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.USE = "RandomTextClickedSensor";
Transform93.children = new MFNode();

Transform93.children[0] = TouchSensor94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromField = "isActive";
ROUTE95.fromNode = "RandomTextClickedSensor";
ROUTE95.toField = "selectRandomCard";
ROUTE95.toNode = "TextScript";
Transform93.children[1] = ROUTE95;

let Shape96 = browser.currentScene.createNode("Shape");
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new MFString(new java.lang.String["random"]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.USE = "MessageFont";
Text97.fontStyle = FontStyle98;

Shape96.geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.USE = "InterfaceAppearance";
Shape96.appearance = Appearance99;

Transform93.children[2] = Shape96;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "TransparentClickSurface";
Transform100.children = new MFNode();

Transform100.children[0] = Shape101;

Transform93.children[3] = Transform100;

browser.currentScene.children[8] = Transform93;

let Transform102 = browser.currentScene.createNode("Transform");
Transform102.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform102.translation = new SFVec3f(new float[3.3,-0.5,0]);
let Anchor103 = browser.currentScene.createNode("Anchor");
Anchor103.DEF = "TextToSpeechAnchor";
Anchor103.description = "text to speech in browser";
Anchor103.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor103.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]);
let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "textToSpeechUrl";
ROUTE104.fromNode = "TextScript";
ROUTE104.toField = "url";
ROUTE104.toNode = "TextToSpeechAnchor";
Anchor103.children = new MFNode();

Anchor103.children[0] = ROUTE104;

let Shape105 = browser.currentScene.createNode("Shape");
let Text106 = browser.currentScene.createNode("Text");
Text106.string = new MFString(new java.lang.String["speech"]);
let FontStyle107 = browser.currentScene.createNode("FontStyle");
FontStyle107.USE = "MessageFont";
Text106.fontStyle = FontStyle107;

Shape105.geometry = Text106;

let Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.USE = "InterfaceAppearance";
Shape105.appearance = Appearance108;

Anchor103.children[1] = Shape105;

let Transform109 = browser.currentScene.createNode("Transform");
Transform109.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "TransparentClickSurface";
Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

Anchor103.children[2] = Transform109;

Transform102.children = new MFNode();

Transform102.children[0] = Anchor103;

browser.currentScene.children[9] = Transform102;

