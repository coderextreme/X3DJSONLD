let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta6.content = "Sat, 30 Dec 2023 07:55:52 GMT";
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
meta15.name = "reference";
meta15.content = "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "https://gist.github.com/alotaiba/1728771";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "https://cloud.google.com/translate/docs/basic/translating-text";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "subject";
meta20.content = "Brian Eno, Oblique Strategies";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "Image";
meta21.content = "images/ObliqueStrategiesEntryScreen.png";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "Sound";
meta22.content = "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "Sound";
meta23.content = "translate_tts_HelloX3D.mp3";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "Sound";
meta24.content = "translate_tts_HelloX3D.wav";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "Sound";
meta25.content = "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "Sound";
meta26.content = "translate_tts_HelloX3D4.mp3";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "TODO";
meta27.content = "multiliingual translation parameter";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "warning";
meta28.content = "under development, scene Sound/AudioClip triggering (or retrieved file format) not working";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "warning";
meta29.content = "TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "identifier";
meta30.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d";
head1.meta[28] = meta30;

head = head1;

let WorldInfo32 = browser.currentScene.createNode("WorldInfo");
WorldInfo32.title = "ObliqueStrategies.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo32;

let NavigationInfo33 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo33.type = new MFString(new java.lang.String["NONE"]);
browser.currentScene.children[1] = NavigationInfo33;

let Background34 = browser.currentScene.createNode("Background");
Background34.skyColor = new MFColor(new float[0.419608,0.427451,1]);
browser.currentScene.children[2] = Background34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new SFVec3f(new float[0,1,0]);
Transform35.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let TouchSensor36 = browser.currentScene.createNode("TouchSensor");
TouchSensor36.DEF = "RandomTextClickedSensor";
TouchSensor36.description = "Select to see a new strategy";
Transform35.children = new MFNode();

Transform35.children[0] = TouchSensor36;

let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
let Material39 = browser.currentScene.createNode("Material");
Material39.diffuseColor = new SFColor(new float[1,1,1]);
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let Text40 = browser.currentScene.createNode("Text");
Text40.string = new MFString(new java.lang.String["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]);
let FontStyle41 = browser.currentScene.createNode("FontStyle");
FontStyle41.DEF = "MessageFont";
FontStyle41.family = new MFString(new java.lang.String["SANS"]);
FontStyle41.style = "BOLD";
FontStyle41.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text40.fontStyle = FontStyle41;

Shape37.geometry = Text40;

Transform35.child[1] = Shape37;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.scale = new SFVec3f(new float[10,3,1]);
let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "HeadlineClickSurface";
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.ambientIntensity = 0.245763;
Material45.diffuseColor = new SFColor(new float[0.34773,0.090909,0.005289]);
Material45.specularColor = new SFColor(new float[0.336735,0.051091,0.051091]);
Material45.shininess = 0.07;
Material45.transparency = 0.8;
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let IndexedFaceSet46 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet46.solid = False;
IndexedFaceSet46.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet46.coord = Coordinate47;

Shape43.geometry = IndexedFaceSet46;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform35.children[2] = Transform42;

browser.currentScene.children[3] = Transform35;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "TextScript";
Script48.url = new MFString(new java.lang.String["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]);
let field49 = browser.currentScene.createNode("field");
field49.accessType = "initializeOnly";
field49.type = "SFInt32";
field49.name = "index";
Script48.field = new MFNode();

Script48.field[0] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "outputOnly";
field50.type = "MFString";
field50.name = "string_changed";
Script48.field[1] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "outputOnly";
field51.type = "MFString";
field51.name = "textToSpeechUrl";
Script48.field[2] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "outputOnly";
field52.type = "SFTime";
field52.name = "newCardTime";
Script48.field[3] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "inputOnly";
field53.type = "SFBool";
field53.name = "selectPreviousCard";
Script48.field[4] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "inputOnly";
field54.type = "SFBool";
field54.name = "selectNextCard";
Script48.field[5] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "inputOnly";
field55.type = "SFBool";
field55.name = "selectRandomCard";
Script48.field[6] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "initializeOnly";
field56.type = "SFBool";
field56.name = "traceEnabled";
field56.value = "true";
Script48.field[7] = field56;

browser.currentScene.children[4] = Script48;

let Transform57 = browser.currentScene.createNode("Transform");
Transform57.DEF = "CardTransform";
Transform57.translation = new SFVec3f(new float[0,-1.5,0]);
Transform57.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let Shape58 = browser.currentScene.createNode("Shape");
let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new SFColor(new float[1,1,1]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

let Text61 = browser.currentScene.createNode("Text");
Text61.DEF = "CardText";
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.family = new MFString(new java.lang.String["SANS"]);
FontStyle62.style = "BOLD";
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text61.fontStyle = FontStyle62;

Shape58.geometry = Text61;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

let Sound63 = browser.currentScene.createNode("Sound");
Sound63.DEF = "CardSoundSpatialization";
Sound63.minBack = 20;
Sound63.minFront = 20;
Sound63.maxBack = 100;
Sound63.maxFront = 100;
let AudioClip64 = browser.currentScene.createNode("AudioClip");
AudioClip64.DEF = "TextToSpeechAudioClip";
AudioClip64.description = "sends strategy text google translate";
AudioClip64.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]);
Sound63.source = AudioClip64;

Transform57.children[1] = Sound63;

browser.currentScene.children[5] = Transform57;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.translation = new SFVec3f(new float[-3.2,2.5,0]);
Transform65.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let TouchSensor66 = browser.currentScene.createNode("TouchSensor");
TouchSensor66.DEF = "PreviousTextClickedSensor";
TouchSensor66.description = "Select to see previous strategy";
Transform65.children = new MFNode();

Transform65.children[0] = TouchSensor66;

let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.DEF = "InterfaceAppearance";
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

let Text70 = browser.currentScene.createNode("Text");
Text70.string = new MFString(new java.lang.String["previous"]);
let FontStyle71 = browser.currentScene.createNode("FontStyle");
FontStyle71.USE = "MessageFont";
Text70.fontStyle = FontStyle71;

Shape67.geometry = Text70;

Transform65.child[1] = Shape67;

let Transform72 = browser.currentScene.createNode("Transform");
Transform72.scale = new SFVec3f(new float[2,0.6,1]);
let Shape73 = browser.currentScene.createNode("Shape");
Shape73.DEF = "TransparentClickSurface";
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.transparency = 1;
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

let IndexedFaceSet76 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet76.solid = False;
IndexedFaceSet76.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
let Coordinate77 = browser.currentScene.createNode("Coordinate");
Coordinate77.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet76.coord = Coordinate77;

Shape73.geometry = IndexedFaceSet76;

Transform72.child = new undefined();

Transform72.child[0] = Shape73;

Transform65.children[2] = Transform72;

browser.currentScene.children[6] = Transform65;

let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new SFVec3f(new float[3.5,2.5,0]);
Transform78.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let TouchSensor79 = browser.currentScene.createNode("TouchSensor");
TouchSensor79.DEF = "NextTextClickedSensor";
TouchSensor79.description = "Select to see next strategy";
Transform78.children = new MFNode();

Transform78.children[0] = TouchSensor79;

let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
Appearance81.USE = "InterfaceAppearance";
Shape80.appearance = Appearance81;

let Text82 = browser.currentScene.createNode("Text");
Text82.string = new MFString(new java.lang.String["next"]);
let FontStyle83 = browser.currentScene.createNode("FontStyle");
FontStyle83.USE = "MessageFont";
Text82.fontStyle = FontStyle83;

Shape80.geometry = Text82;

Transform78.child[1] = Shape80;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.scale = new SFVec3f(new float[1.2,0.6,1]);
let Shape85 = browser.currentScene.createNode("Shape");
Shape85.USE = "TransparentClickSurface";
Transform84.child = new undefined();

Transform84.child[0] = Shape85;

Transform78.children[2] = Transform84;

browser.currentScene.children[7] = Transform78;

let Transform86 = browser.currentScene.createNode("Transform");
Transform86.translation = new SFVec3f(new float[-3.3,-0.5,0]);
Transform86.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let TouchSensor87 = browser.currentScene.createNode("TouchSensor");
TouchSensor87.USE = "RandomTextClickedSensor";
Transform86.children = new MFNode();

Transform86.children[0] = TouchSensor87;

let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
Appearance89.USE = "InterfaceAppearance";
Shape88.appearance = Appearance89;

let Text90 = browser.currentScene.createNode("Text");
Text90.string = new MFString(new java.lang.String["random"]);
let FontStyle91 = browser.currentScene.createNode("FontStyle");
FontStyle91.USE = "MessageFont";
Text90.fontStyle = FontStyle91;

Shape88.geometry = Text90;

Transform86.child[1] = Shape88;

let Transform92 = browser.currentScene.createNode("Transform");
Transform92.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.USE = "TransparentClickSurface";
Transform92.child = new undefined();

Transform92.child[0] = Shape93;

Transform86.children[2] = Transform92;

browser.currentScene.children[8] = Transform86;

let Transform94 = browser.currentScene.createNode("Transform");
Transform94.translation = new SFVec3f(new float[3.3,-0.5,0]);
Transform94.scale = new SFVec3f(new float[0.4,0.4,0.4]);
let Anchor95 = browser.currentScene.createNode("Anchor");
Anchor95.DEF = "TextToSpeechAnchor";
Anchor95.description = "text to speech in browser";
Anchor95.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]);
Anchor95.parameter = new MFString(new java.lang.String["target=_blank"]);
let Shape96 = browser.currentScene.createNode("Shape");
let Appearance97 = browser.currentScene.createNode("Appearance");
Appearance97.USE = "InterfaceAppearance";
Shape96.appearance = Appearance97;

let Text98 = browser.currentScene.createNode("Text");
Text98.string = new MFString(new java.lang.String["speech"]);
let FontStyle99 = browser.currentScene.createNode("FontStyle");
FontStyle99.USE = "MessageFont";
Text98.fontStyle = FontStyle99;

Shape96.geometry = Text98;

Anchor95.children = new MFNode();

Anchor95.children[0] = Shape96;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "TransparentClickSurface";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

Anchor95.children[1] = Transform100;

Transform94.children = new MFNode();

Transform94.children[0] = Anchor95;

browser.currentScene.children[9] = Transform94;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromNode = "TextScript";
ROUTE102.fromField = "string_changed";
ROUTE102.toNode = "CardText";
ROUTE102.toField = "string";
browser.currentScene.children[10] = ROUTE102;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromNode = "TextScript";
ROUTE103.fromField = "textToSpeechUrl";
ROUTE103.toNode = "TextToSpeechAudioClip";
ROUTE103.toField = "url";
browser.currentScene.children[11] = ROUTE103;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromNode = "TextScript";
ROUTE104.fromField = "newCardTime";
ROUTE104.toNode = "TextToSpeechAudioClip";
ROUTE104.toField = "startTime";
browser.currentScene.children[12] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromNode = "PreviousTextClickedSensor";
ROUTE105.fromField = "isActive";
ROUTE105.toNode = "TextScript";
ROUTE105.toField = "selectPreviousCard";
browser.currentScene.children[13] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "NextTextClickedSensor";
ROUTE106.fromField = "isActive";
ROUTE106.toNode = "TextScript";
ROUTE106.toField = "selectNextCard";
browser.currentScene.children[14] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "RandomTextClickedSensor";
ROUTE107.fromField = "isActive";
ROUTE107.toNode = "TextScript";
ROUTE107.toField = "selectRandomCard";
browser.currentScene.children[15] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "TextScript";
ROUTE108.fromField = "textToSpeechUrl";
ROUTE108.toNode = "TextToSpeechAnchor";
ROUTE108.toField = "url";
browser.currentScene.children[16] = ROUTE108;

