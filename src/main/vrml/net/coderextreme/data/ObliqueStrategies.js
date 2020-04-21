var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ObliqueStrategies.x3d";
browser.currentScene.children = [];

browser.currentScene.children[0] = WorldInfo2;

NavigationInfo3 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo3.type = ["NONE"];
browser.currentScene.children[1] = NavigationInfo3;

Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = [0.419608,0.427451,1];
browser.currentScene.children[2] = Background4;

Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = [0.4,0.4,0.4];
Transform5.translation = [0,1,0];
TouchSensor6 = browser.currentScene.createNode("TouchSensor");
TouchSensor6.DEF = "RandomTextClickedSensor";
TouchSensor6.description = "Select to see a new strategy";
Transform5.children = [];

Transform5.children[0] = TouchSensor6;

Shape7 = browser.currentScene.createNode("Shape");
Text8 = browser.currentScene.createNode("Text");
Text8.string = ["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"];
FontStyle9 = browser.currentScene.createNode("FontStyle");
FontStyle9.DEF = "MessageFont";
FontStyle9.family = ["SANS"];
FontStyle9.justify = ["MIDDLE","MIDDLE"];
FontStyle9.style = "BOLD";
Text8.fontStyle = FontStyle9;

Shape7.geometry = Text8;

Appearance10 = browser.currentScene.createNode("Appearance");
Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = [1,1,1];
Appearance10.material = Material11;

Shape7.appearance = Appearance10;

Transform5.children[1] = Shape7;

Transform12 = browser.currentScene.createNode("Transform");
Transform12.scale = [10,3,1];
Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "HeadlineClickSurface";
IndexedFaceSet14 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet14.coordIndex = [0,1,2,3,-1];
IndexedFaceSet14.solid = False;
Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = [1,1,0,1,-1,0,-1,-1,0,-1,1,0];
IndexedFaceSet14.coord = Coordinate15;

Shape13.geometry = IndexedFaceSet14;

Appearance16 = browser.currentScene.createNode("Appearance");
Material17 = browser.currentScene.createNode("Material");
Material17.ambientIntensity = 0.245763;
Material17.diffuseColor = [0.34773,0.090909,0.005289];
Material17.shininess = 0.07;
Material17.specularColor = [0.336735,0.051091,0.051091];
Material17.transparency = 0.8;
Appearance16.material = Material17;

Shape13.appearance = Appearance16;

Transform12.children = [];

Transform12.children[0] = Shape13;

Transform5.children[2] = Transform12;

browser.currentScene.children[3] = Transform5;

Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "TextScript";
Script18.url = ["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"];
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
field19 = browser.currentScene.createNode("field");
field19.name = "index";
field19.accessType = "initializeOnly";
field19.appinfo = "index for active strategy card, -1 means no selection";
field19.type = "SFInt32";
field19.value = "0";
Script18.field = [];

Script18.field[0] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "string_changed";
field20.accessType = "outputOnly";
field20.appinfo = "latest strategy card value";
field20.type = "MFString";
Script18.field[1] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "textToSpeechUrl";
field21.accessType = "outputOnly";
field21.appinfo = "\"url to invoke Google Translate\"";
field21.type = "MFString";
Script18.field[2] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "newCardTime";
field22.accessType = "outputOnly";
field22.appinfo = "activate Sound node";
field22.type = "SFTime";
Script18.field[3] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "selectPreviousCard";
field23.accessType = "inputOnly";
field23.type = "SFBool";
Script18.field[4] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "selectNextCard";
field24.accessType = "inputOnly";
field24.type = "SFBool";
Script18.field[5] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "selectRandomCard";
field25.accessType = "inputOnly";
field25.type = "SFBool";
Script18.field[6] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "controls console tracing";
field26.type = "SFBool";
field26.value = "true";
Script18.field[7] = field26;

browser.currentScene.children[4] = Script18;

Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "CardTransform";
Transform27.scale = [0.4,0.4,0.4];
Transform27.translation = [0,-1.5,0];
Shape28 = browser.currentScene.createNode("Shape");
Text29 = browser.currentScene.createNode("Text");
Text29.DEF = "CardText";
FontStyle30 = browser.currentScene.createNode("FontStyle");
FontStyle30.family = ["SANS"];
FontStyle30.justify = ["MIDDLE","MIDDLE"];
FontStyle30.style = "BOLD";
Text29.fontStyle = FontStyle30;

Shape28.geometry = Text29;

Appearance31 = browser.currentScene.createNode("Appearance");
Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = [1,1,1];
Appearance31.material = Material32;

Shape28.appearance = Appearance31;

Transform27.children = [];

Transform27.children[0] = Shape28;

ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "string_changed";
ROUTE33.fromNode = "TextScript";
ROUTE33.toField = "string";
ROUTE33.toNode = "CardText";
Transform27.children[1] = ROUTE33;

Sound34 = browser.currentScene.createNode("Sound");
Sound34.DEF = "CardSoundSpatialization";
Sound34.maxBack = 100;
Sound34.maxFront = 100;
Sound34.minBack = 20;
Sound34.minFront = 20;
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
AudioClip35 = browser.currentScene.createNode("AudioClip");
AudioClip35.DEF = "TextToSpeechAudioClip";
AudioClip35.description = "sends strategy text google translate";
AudioClip35.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"];
Sound34.source = AudioClip35;

Transform27.children[2] = Sound34;

ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "textToSpeechUrl";
ROUTE36.fromNode = "TextScript";
ROUTE36.toField = "url";
ROUTE36.toNode = "TextToSpeechAudioClip";
Transform27.children[3] = ROUTE36;

ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromField = "newCardTime";
ROUTE37.fromNode = "TextScript";
ROUTE37.toField = "startTime";
ROUTE37.toNode = "TextToSpeechAudioClip";
Transform27.children[4] = ROUTE37;

browser.currentScene.children[5] = Transform27;

Transform38 = browser.currentScene.createNode("Transform");
Transform38.scale = [0.4,0.4,0.4];
Transform38.translation = [-3.2,2.5,0];
TouchSensor39 = browser.currentScene.createNode("TouchSensor");
TouchSensor39.DEF = "PreviousTextClickedSensor";
TouchSensor39.description = "Select to see previous strategy";
Transform38.children = [];

Transform38.children[0] = TouchSensor39;

ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "isActive";
ROUTE40.fromNode = "PreviousTextClickedSensor";
ROUTE40.toField = "selectPreviousCard";
ROUTE40.toNode = "TextScript";
Transform38.children[1] = ROUTE40;

Shape41 = browser.currentScene.createNode("Shape");
Text42 = browser.currentScene.createNode("Text");
Text42.string = ["previous"];
FontStyle43 = browser.currentScene.createNode("FontStyle");
FontStyle43.USE = "MessageFont";
Text42.fontStyle = FontStyle43;

Shape41.geometry = Text42;

Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.DEF = "InterfaceAppearance";
Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = [1,0,0.6];
Appearance44.material = Material45;

Shape41.appearance = Appearance44;

Transform38.children[2] = Shape41;

Transform46 = browser.currentScene.createNode("Transform");
Transform46.scale = [2,0.6,1];
Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "TransparentClickSurface";
//support Selectable Text with a scalable IFS
IndexedFaceSet48 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet48.coordIndex = [0,1,2,3,-1];
IndexedFaceSet48.solid = False;
Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = [1,1,0,1,-1,0,-1,-1,0,-1,1,0];
IndexedFaceSet48.coord = Coordinate49;

Shape47.geometry = IndexedFaceSet48;

Appearance50 = browser.currentScene.createNode("Appearance");
Material51 = browser.currentScene.createNode("Material");
Material51.transparency = 1;
Appearance50.material = Material51;

Shape47.appearance = Appearance50;

Transform46.children = [];

Transform46.children[0] = Shape47;

Transform38.children[3] = Transform46;

browser.currentScene.children[6] = Transform38;

Transform52 = browser.currentScene.createNode("Transform");
Transform52.scale = [0.4,0.4,0.4];
Transform52.translation = [3.5,2.5,0];
TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.DEF = "NextTextClickedSensor";
TouchSensor53.description = "Select to see next strategy";
Transform52.children = [];

Transform52.children[0] = TouchSensor53;

ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "isActive";
ROUTE54.fromNode = "NextTextClickedSensor";
ROUTE54.toField = "selectNextCard";
ROUTE54.toNode = "TextScript";
Transform52.children[1] = ROUTE54;

Shape55 = browser.currentScene.createNode("Shape");
Text56 = browser.currentScene.createNode("Text");
Text56.string = ["next"];
FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.USE = "MessageFont";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "InterfaceAppearance";
Shape55.appearance = Appearance58;

Transform52.children[2] = Shape55;

Transform59 = browser.currentScene.createNode("Transform");
Transform59.scale = [1.2,0.6,1];
Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "TransparentClickSurface";
Transform59.children = [];

Transform59.children[0] = Shape60;

Transform52.children[3] = Transform59;

browser.currentScene.children[7] = Transform52;

Transform61 = browser.currentScene.createNode("Transform");
Transform61.scale = [0.4,0.4,0.4];
Transform61.translation = [-3.3,-0.5,0];
TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.USE = "RandomTextClickedSensor";
Transform61.children = [];

Transform61.children[0] = TouchSensor62;

ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "isActive";
ROUTE63.fromNode = "RandomTextClickedSensor";
ROUTE63.toField = "selectRandomCard";
ROUTE63.toNode = "TextScript";
Transform61.children[1] = ROUTE63;

Shape64 = browser.currentScene.createNode("Shape");
Text65 = browser.currentScene.createNode("Text");
Text65.string = ["random"];
FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.USE = "MessageFont";
Text65.fontStyle = FontStyle66;

Shape64.geometry = Text65;

Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.USE = "InterfaceAppearance";
Shape64.appearance = Appearance67;

Transform61.children[2] = Shape64;

Transform68 = browser.currentScene.createNode("Transform");
Transform68.scale = [1.8,0.6,1];
Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "TransparentClickSurface";
Transform68.children = [];

Transform68.children[0] = Shape69;

Transform61.children[3] = Transform68;

browser.currentScene.children[8] = Transform61;

Transform70 = browser.currentScene.createNode("Transform");
Transform70.scale = [0.4,0.4,0.4];
Transform70.translation = [3.3,-0.5,0];
Anchor71 = browser.currentScene.createNode("Anchor");
Anchor71.DEF = "TextToSpeechAnchor";
Anchor71.description = "text to speech in browser";
Anchor71.parameter = ["target=_blank"];
Anchor71.url = ["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"];
ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "textToSpeechUrl";
ROUTE72.fromNode = "TextScript";
ROUTE72.toField = "url";
ROUTE72.toNode = "TextToSpeechAnchor";
Anchor71.children = [];

Anchor71.children[0] = ROUTE72;

Shape73 = browser.currentScene.createNode("Shape");
Text74 = browser.currentScene.createNode("Text");
Text74.string = ["speech"];
FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.USE = "MessageFont";
Text74.fontStyle = FontStyle75;

Shape73.geometry = Text74;

Appearance76 = browser.currentScene.createNode("Appearance");
Appearance76.USE = "InterfaceAppearance";
Shape73.appearance = Appearance76;

Anchor71.children[1] = Shape73;

Transform77 = browser.currentScene.createNode("Transform");
Transform77.scale = [1.8,0.6,1];
Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "TransparentClickSurface";
Transform77.children = [];

Transform77.children[0] = Shape78;

Anchor71.children[2] = Transform77;

Transform70.children = [];

Transform70.children[0] = Anchor71;

browser.currentScene.children[9] = Transform70;

