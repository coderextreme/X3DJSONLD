var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = [];

browser.currentScene.children[0] = NavigationInfo2;

Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = [0.419608,0.427451,1];
browser.currentScene.children[1] = Background3;

Transform4 = browser.currentScene.createNode("Transform");
Transform4.scale = [0.4,0.4,0.4];
Transform4.translation = [0,1,0];
TouchSensor5 = browser.currentScene.createNode("TouchSensor");
TouchSensor5.DEF = "RandomTextClickedSensor";
TouchSensor5.description = "Select to see a new strategy";
Transform4.children = [];

Transform4.children[0] = TouchSensor5;

Shape6 = browser.currentScene.createNode("Shape");
Text7 = browser.currentScene.createNode("Text");
Text7.string = ["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"];
FontStyle8 = browser.currentScene.createNode("FontStyle");
FontStyle8.DEF = "MessageFont";
FontStyle8.family = ["SANS"];
FontStyle8.justify = ["MIDDLE","MIDDLE"];
FontStyle8.style = "BOLD";
Text7.fontStyle = FontStyle8;

Shape6.geometry = Text7;

Appearance9 = browser.currentScene.createNode("Appearance");
Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = [1,1,1];
Appearance9.material = Material10;

Shape6.appearance = Appearance9;

Transform4.children[1] = Shape6;

Transform11 = browser.currentScene.createNode("Transform");
Transform11.scale = [10,3,1];
Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "HeadlineClickSurface";
IndexedFaceSet13 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet13.coordIndex = [0,1,2,3,-1];
IndexedFaceSet13.solid = False;
Coordinate14 = browser.currentScene.createNode("Coordinate");
Coordinate14.point = [1,1,0,1,-1,0,-1,-1,0,-1,1,0];
IndexedFaceSet13.coord = Coordinate14;

Shape12.geometry = IndexedFaceSet13;

Appearance15 = browser.currentScene.createNode("Appearance");
Material16 = browser.currentScene.createNode("Material");
Material16.ambientIntensity = 0.245763;
Material16.diffuseColor = [0.34773,0.090909,0.005289];
Material16.shininess = 0.07;
Material16.specularColor = [0.336735,0.051091,0.051091];
Material16.transparency = 0.8;
Appearance15.material = Material16;

Shape12.appearance = Appearance15;

Transform11.children = [];

Transform11.children[0] = Shape12;

Transform4.children[2] = Transform11;

browser.currentScene.children[2] = Transform4;

Script17 = browser.currentScene.createNode("Script");
Script17.DEF = "TextScript";
Script17.url = ["../node/ObliqueStrategiesScript.js"];
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
field18 = browser.currentScene.createNode("field");
field18.name = "index";
field18.accessType = "initializeOnly";
field18.appinfo = "index for active strategy card, -1 means no selection";
field18.type = "SFInt32";
field18.value = "0";
Script17.field = [];

Script17.field[0] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "string_changed";
field19.accessType = "outputOnly";
field19.appinfo = "latest strategy card value";
field19.type = "MFString";
Script17.field[1] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "textToSpeechUrl";
field20.accessType = "outputOnly";
field20.appinfo = "url to invoke Google Translate";
field20.type = "MFString";
Script17.field[2] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "newCardTime";
field21.accessType = "outputOnly";
field21.appinfo = "activate Sound node";
field21.type = "SFTime";
Script17.field[3] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "selectPreviousCard";
field22.accessType = "inputOnly";
field22.type = "SFBool";
Script17.field[4] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "selectNextCard";
field23.accessType = "inputOnly";
field23.type = "SFBool";
Script17.field[5] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "selectRandomCard";
field24.accessType = "inputOnly";
field24.type = "SFBool";
Script17.field[6] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "traceEnabled";
field25.accessType = "initializeOnly";
field25.appinfo = "controls console tracing";
field25.type = "SFBool";
field25.value = "true";
Script17.field[7] = field25;

browser.currentScene.children[3] = Script17;

Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "CardTransform";
Transform26.scale = [0.4,0.4,0.4];
Transform26.translation = [0,-1.5,0];
Shape27 = browser.currentScene.createNode("Shape");
Text28 = browser.currentScene.createNode("Text");
Text28.DEF = "CardText";
FontStyle29 = browser.currentScene.createNode("FontStyle");
FontStyle29.family = ["SANS"];
FontStyle29.justify = ["MIDDLE","MIDDLE"];
FontStyle29.style = "BOLD";
Text28.fontStyle = FontStyle29;

Shape27.geometry = Text28;

Appearance30 = browser.currentScene.createNode("Appearance");
Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = [1,1,1];
Appearance30.material = Material31;

Shape27.appearance = Appearance30;

Transform26.children = [];

Transform26.children[0] = Shape27;

ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "string_changed";
ROUTE32.fromNode = "TextScript";
ROUTE32.toField = "string";
ROUTE32.toNode = "CardText";
Transform26.children[1] = ROUTE32;

Sound33 = browser.currentScene.createNode("Sound");
Sound33.DEF = "CardSoundSpatialization";
Sound33.maxBack = 100;
Sound33.maxFront = 100;
Sound33.minBack = 20;
Sound33.minFront = 20;
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
AudioClip34 = browser.currentScene.createNode("AudioClip");
AudioClip34.DEF = "TextToSpeechAudioClip";
AudioClip34.description = "sends strategy text google translate";
AudioClip34.url = ["http://translate.google.com/translate_tts?tl=en&q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav"];
Sound33.source = AudioClip34;

Transform26.children[2] = Sound33;

ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromField = "textToSpeechUrl";
ROUTE35.fromNode = "TextScript";
ROUTE35.toField = "url";
ROUTE35.toNode = "TextToSpeechAudioClip";
Transform26.children[3] = ROUTE35;

ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "newCardTime";
ROUTE36.fromNode = "TextScript";
ROUTE36.toField = "startTime";
ROUTE36.toNode = "TextToSpeechAudioClip";
Transform26.children[4] = ROUTE36;

browser.currentScene.children[4] = Transform26;

Transform37 = browser.currentScene.createNode("Transform");
Transform37.scale = [0.4,0.4,0.4];
Transform37.translation = [-3.2,2.5,0];
TouchSensor38 = browser.currentScene.createNode("TouchSensor");
TouchSensor38.DEF = "PreviousTextClickedSensor";
TouchSensor38.description = "Select to see previous strategy";
Transform37.children = [];

Transform37.children[0] = TouchSensor38;

ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "isActive";
ROUTE39.fromNode = "PreviousTextClickedSensor";
ROUTE39.toField = "selectPreviousCard";
ROUTE39.toNode = "TextScript";
Transform37.children[1] = ROUTE39;

Shape40 = browser.currentScene.createNode("Shape");
Text41 = browser.currentScene.createNode("Text");
Text41.string = ["previous"];
FontStyle42 = browser.currentScene.createNode("FontStyle");
FontStyle42.USE = "MessageFont";
Text41.fontStyle = FontStyle42;

Shape40.geometry = Text41;

Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.DEF = "InterfaceAppearance";
Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = [1,0,0.6];
Appearance43.material = Material44;

Shape40.appearance = Appearance43;

Transform37.children[2] = Shape40;

Transform45 = browser.currentScene.createNode("Transform");
Transform45.scale = [2,0.6,1];
Shape46 = browser.currentScene.createNode("Shape");
Shape46.DEF = "TransparentClickSurface";
//support Selectable Text with a scalable IFS
IndexedFaceSet47 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet47.coordIndex = [0,1,2,3,-1];
IndexedFaceSet47.solid = False;
Coordinate48 = browser.currentScene.createNode("Coordinate");
Coordinate48.point = [1,1,0,1,-1,0,-1,-1,0,-1,1,0];
IndexedFaceSet47.coord = Coordinate48;

Shape46.geometry = IndexedFaceSet47;

Appearance49 = browser.currentScene.createNode("Appearance");
Material50 = browser.currentScene.createNode("Material");
Material50.transparency = 1;
Appearance49.material = Material50;

Shape46.appearance = Appearance49;

Transform45.children = [];

Transform45.children[0] = Shape46;

Transform37.children[3] = Transform45;

browser.currentScene.children[5] = Transform37;

Transform51 = browser.currentScene.createNode("Transform");
Transform51.scale = [0.4,0.4,0.4];
Transform51.translation = [3.5,2.5,0];
TouchSensor52 = browser.currentScene.createNode("TouchSensor");
TouchSensor52.DEF = "NextTextClickedSensor";
TouchSensor52.description = "Select to see next strategy";
Transform51.children = [];

Transform51.children[0] = TouchSensor52;

ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "isActive";
ROUTE53.fromNode = "NextTextClickedSensor";
ROUTE53.toField = "selectNextCard";
ROUTE53.toNode = "TextScript";
Transform51.children[1] = ROUTE53;

Shape54 = browser.currentScene.createNode("Shape");
Text55 = browser.currentScene.createNode("Text");
Text55.string = ["next"];
FontStyle56 = browser.currentScene.createNode("FontStyle");
FontStyle56.USE = "MessageFont";
Text55.fontStyle = FontStyle56;

Shape54.geometry = Text55;

Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.USE = "InterfaceAppearance";
Shape54.appearance = Appearance57;

Transform51.children[2] = Shape54;

Transform58 = browser.currentScene.createNode("Transform");
Transform58.scale = [1.2,0.6,1];
Shape59 = browser.currentScene.createNode("Shape");
Shape59.USE = "TransparentClickSurface";
Transform58.children = [];

Transform58.children[0] = Shape59;

Transform51.children[3] = Transform58;

browser.currentScene.children[6] = Transform51;

Transform60 = browser.currentScene.createNode("Transform");
Transform60.scale = [0.4,0.4,0.4];
Transform60.translation = [-3.3,-0.5,0];
TouchSensor61 = browser.currentScene.createNode("TouchSensor");
TouchSensor61.USE = "RandomTextClickedSensor";
Transform60.children = [];

Transform60.children[0] = TouchSensor61;

ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "isActive";
ROUTE62.fromNode = "RandomTextClickedSensor";
ROUTE62.toField = "selectRandomCard";
ROUTE62.toNode = "TextScript";
Transform60.children[1] = ROUTE62;

Shape63 = browser.currentScene.createNode("Shape");
Text64 = browser.currentScene.createNode("Text");
Text64.string = ["random"];
FontStyle65 = browser.currentScene.createNode("FontStyle");
FontStyle65.USE = "MessageFont";
Text64.fontStyle = FontStyle65;

Shape63.geometry = Text64;

Appearance66 = browser.currentScene.createNode("Appearance");
Appearance66.USE = "InterfaceAppearance";
Shape63.appearance = Appearance66;

Transform60.children[2] = Shape63;

Transform67 = browser.currentScene.createNode("Transform");
Transform67.scale = [1.8,0.6,1];
Shape68 = browser.currentScene.createNode("Shape");
Shape68.USE = "TransparentClickSurface";
Transform67.children = [];

Transform67.children[0] = Shape68;

Transform60.children[3] = Transform67;

browser.currentScene.children[7] = Transform60;

Transform69 = browser.currentScene.createNode("Transform");
Transform69.scale = [0.4,0.4,0.4];
Transform69.translation = [3.3,-0.5,0];
Anchor70 = browser.currentScene.createNode("Anchor");
Anchor70.DEF = "TextToSpeechAnchor";
Anchor70.description = "text to speech in browser";
Anchor70.parameter = ["target=_blank"];
Anchor70.url = ["http://translate.google.com/translate_tts?tl=en&q=Overtly%20resist%20change"];
ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "textToSpeechUrl";
ROUTE71.fromNode = "TextScript";
ROUTE71.toField = "url";
ROUTE71.toNode = "TextToSpeechAnchor";
Anchor70.children = [];

Anchor70.children[0] = ROUTE71;

Shape72 = browser.currentScene.createNode("Shape");
Text73 = browser.currentScene.createNode("Text");
Text73.string = ["speech"];
FontStyle74 = browser.currentScene.createNode("FontStyle");
FontStyle74.USE = "MessageFont";
Text73.fontStyle = FontStyle74;

Shape72.geometry = Text73;

Appearance75 = browser.currentScene.createNode("Appearance");
Appearance75.USE = "InterfaceAppearance";
Shape72.appearance = Appearance75;

Anchor70.children[1] = Shape72;

Transform76 = browser.currentScene.createNode("Transform");
Transform76.scale = [1.8,0.6,1];
Shape77 = browser.currentScene.createNode("Shape");
Shape77.USE = "TransparentClickSurface";
Transform76.children = [];

Transform76.children[0] = Shape77;

Anchor70.children[2] = Transform76;

Transform69.children = [];

Transform69.children[0] = Anchor70;

browser.currentScene.children[8] = Transform69;

