let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ObliqueStrategies.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.type = new MFString(new java.lang.String["NONE"]);
browser.currentScene.children[1] = NavigationInfo3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[0.419608,0.427451,1]);
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform5.translation = new SFVec3f(new float[0,1,0]);
let TouchSensor6 = browser.currentScene.createNode("TouchSensor");
TouchSensor6.DEF = "RandomTextClickedSensor";
TouchSensor6.description = "Select to see a new strategy";
Transform5.children = new MFNode();

Transform5.children[0] = TouchSensor6;

let Shape7 = browser.currentScene.createNode("Shape");
let Text8 = browser.currentScene.createNode("Text");
Text8.string = new MFString(new java.lang.String["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"]);
let FontStyle9 = browser.currentScene.createNode("FontStyle");
FontStyle9.DEF = "MessageFont";
FontStyle9.family = new MFString(new java.lang.String["SANS"]);
FontStyle9.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle9.style = "BOLD";
Text8.fontStyle = FontStyle9;

Shape7.geometry = Text8;

let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,1,1]);
Appearance10.material = Material11;

Shape7.appearance = Appearance10;

Transform5.children[1] = Shape7;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.scale = new SFVec3f(new float[10,3,1]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "HeadlineClickSurface";
let IndexedFaceSet14 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet14.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet14.solid = False;
let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet14.coord = Coordinate15;

Shape13.geometry = IndexedFaceSet14;

let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.ambientIntensity = 0.245763;
Material17.diffuseColor = new SFColor(new float[0.34773,0.090909,0.005289]);
Material17.shininess = 0.07;
Material17.specularColor = new SFColor(new float[0.336735,0.051091,0.051091]);
Material17.transparency = 0.8;
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

Transform5.children[2] = Transform12;

browser.currentScene.children[3] = Transform5;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "TextScript";
Script18.url = new MFString(new java.lang.String["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"]);
// initialize() method includes unit test to printAllStrategies() to console 
// TODO insert field definitions here (index string_changed previous next random) and then animate! 
let field19 = browser.currentScene.createNode("field");
field19.accessType = "initializeOnly";
field19.appinfo = "index for active strategy card, -1 means no selection";
field19.name = "index";
field19.type = "SFInt32";
field19.value = "0";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "outputOnly";
field20.appinfo = "latest strategy card value";
field20.name = "string_changed";
field20.type = "MFString";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "outputOnly";
field21.appinfo = "\"url to invoke Google Translate\"";
field21.name = "textToSpeechUrl";
field21.type = "MFString";
Script18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "outputOnly";
field22.appinfo = "activate Sound node";
field22.name = "newCardTime";
field22.type = "SFTime";
Script18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOnly";
field23.name = "selectPreviousCard";
field23.type = "SFBool";
Script18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "inputOnly";
field24.name = "selectNextCard";
field24.type = "SFBool";
Script18.field[5] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "inputOnly";
field25.name = "selectRandomCard";
field25.type = "SFBool";
Script18.field[6] = field25;

let field26 = browser.currentScene.createNode("field");
field26.accessType = "initializeOnly";
field26.appinfo = "controls console tracing";
field26.name = "traceEnabled";
field26.type = "SFBool";
field26.value = "true";
Script18.field[7] = field26;

browser.currentScene.children[4] = Script18;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "CardTransform";
Transform27.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform27.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape28 = browser.currentScene.createNode("Shape");
let Text29 = browser.currentScene.createNode("Text");
Text29.DEF = "CardText";
let FontStyle30 = browser.currentScene.createNode("FontStyle");
FontStyle30.family = new MFString(new java.lang.String["SANS"]);
FontStyle30.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle30.style = "BOLD";
Text29.fontStyle = FontStyle30;

Shape28.geometry = Text29;

let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[1,1,1]);
Appearance31.material = Material32;

Shape28.appearance = Appearance31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "string_changed";
ROUTE33.fromNode = "TextScript";
ROUTE33.toField = "string";
ROUTE33.toNode = "CardText";
Transform27.children[1] = ROUTE33;

let Sound34 = browser.currentScene.createNode("Sound");
Sound34.DEF = "CardSoundSpatialization";
Sound34.maxBack = 100;
Sound34.maxFront = 100;
Sound34.minBack = 20;
Sound34.minFront = 20;
// Make sure the sound source AudioClip is audible at the user location 
// Not all X3D players seem to use the .mp3 
// &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players 
// %20 is space character used in uri/url encoding 
let AudioClip35 = browser.currentScene.createNode("AudioClip");
AudioClip35.DEF = "TextToSpeechAudioClip";
AudioClip35.description = "sends strategy text google translate";
AudioClip35.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]);
Sound34.source = AudioClip35;

Transform27.children[2] = Sound34;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "textToSpeechUrl";
ROUTE36.fromNode = "TextScript";
ROUTE36.toField = "url";
ROUTE36.toNode = "TextToSpeechAudioClip";
Transform27.children[3] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromField = "newCardTime";
ROUTE37.fromNode = "TextScript";
ROUTE37.toField = "startTime";
ROUTE37.toNode = "TextToSpeechAudioClip";
Transform27.children[4] = ROUTE37;

browser.currentScene.children[5] = Transform27;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform38.translation = new SFVec3f(new float[-3.2,2.5,0]);
let TouchSensor39 = browser.currentScene.createNode("TouchSensor");
TouchSensor39.DEF = "PreviousTextClickedSensor";
TouchSensor39.description = "Select to see previous strategy";
Transform38.children = new MFNode();

Transform38.children[0] = TouchSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "isActive";
ROUTE40.fromNode = "PreviousTextClickedSensor";
ROUTE40.toField = "selectPreviousCard";
ROUTE40.toNode = "TextScript";
Transform38.children[1] = ROUTE40;

let Shape41 = browser.currentScene.createNode("Shape");
let Text42 = browser.currentScene.createNode("Text");
Text42.string = new MFString(new java.lang.String["previous"]);
let FontStyle43 = browser.currentScene.createNode("FontStyle");
FontStyle43.USE = "MessageFont";
Text42.fontStyle = FontStyle43;

Shape41.geometry = Text42;

let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.DEF = "InterfaceAppearance";
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance44.material = Material45;

Shape41.appearance = Appearance44;

Transform38.children[2] = Shape41;

let Transform46 = browser.currentScene.createNode("Transform");
Transform46.scale = new SFVec3f(new float[2,0.6,1]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "TransparentClickSurface";
// support Selectable Text with a scalable IFS 
let IndexedFaceSet48 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet48.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet48.solid = False;
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet48.coord = Coordinate49;

Shape47.geometry = IndexedFaceSet48;

let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.transparency = 1;
Appearance50.material = Material51;

Shape47.appearance = Appearance50;

Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

Transform38.children[3] = Transform46;

browser.currentScene.children[6] = Transform38;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform52.translation = new SFVec3f(new float[3.5,2.5,0]);
let TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.DEF = "NextTextClickedSensor";
TouchSensor53.description = "Select to see next strategy";
Transform52.children = new MFNode();

Transform52.children[0] = TouchSensor53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "isActive";
ROUTE54.fromNode = "NextTextClickedSensor";
ROUTE54.toField = "selectNextCard";
ROUTE54.toNode = "TextScript";
Transform52.children[1] = ROUTE54;

let Shape55 = browser.currentScene.createNode("Shape");
let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["next"]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.USE = "MessageFont";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "InterfaceAppearance";
Shape55.appearance = Appearance58;

Transform52.children[2] = Shape55;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.scale = new SFVec3f(new float[1.2,0.6,1]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "TransparentClickSurface";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

Transform52.children[3] = Transform59;

browser.currentScene.children[7] = Transform52;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform61.translation = new SFVec3f(new float[-3.3,-0.5,0]);
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.USE = "RandomTextClickedSensor";
Transform61.children = new MFNode();

Transform61.children[0] = TouchSensor62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "isActive";
ROUTE63.fromNode = "RandomTextClickedSensor";
ROUTE63.toField = "selectRandomCard";
ROUTE63.toNode = "TextScript";
Transform61.children[1] = ROUTE63;

let Shape64 = browser.currentScene.createNode("Shape");
let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["random"]);
let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.USE = "MessageFont";
Text65.fontStyle = FontStyle66;

Shape64.geometry = Text65;

let Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.USE = "InterfaceAppearance";
Shape64.appearance = Appearance67;

Transform61.children[2] = Shape64;

let Transform68 = browser.currentScene.createNode("Transform");
Transform68.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "TransparentClickSurface";
Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

Transform61.children[3] = Transform68;

browser.currentScene.children[8] = Transform61;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform70.translation = new SFVec3f(new float[3.3,-0.5,0]);
let Anchor71 = browser.currentScene.createNode("Anchor");
Anchor71.DEF = "TextToSpeechAnchor";
Anchor71.description = "text to speech in browser";
Anchor71.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor71.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]);
let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "textToSpeechUrl";
ROUTE72.fromNode = "TextScript";
ROUTE72.toField = "url";
ROUTE72.toNode = "TextToSpeechAnchor";
Anchor71.children = new MFNode();

Anchor71.children[0] = ROUTE72;

let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new MFString(new java.lang.String["speech"]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.USE = "MessageFont";
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

let Appearance76 = browser.currentScene.createNode("Appearance");
Appearance76.USE = "InterfaceAppearance";
Shape73.appearance = Appearance76;

Anchor71.children[1] = Shape73;

let Transform77 = browser.currentScene.createNode("Transform");
Transform77.scale = new SFVec3f(new float[1.8,0.6,1]);
let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "TransparentClickSurface";
Transform77.children = new MFNode();

Transform77.children[0] = Shape78;

Anchor71.children[2] = Transform77;

Transform70.children = new MFNode();

Transform70.children[0] = Anchor71;

browser.currentScene.children[9] = Transform70;

