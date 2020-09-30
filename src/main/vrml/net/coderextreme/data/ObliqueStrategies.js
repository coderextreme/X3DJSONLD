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
Background4.transparency = 0;
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform5.translation = new SFVec3f(new float[0,1,0]);
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let TouchSensor6 = browser.currentScene.createNode("TouchSensor");
TouchSensor6.DEF = "RandomTextClickedSensor";
TouchSensor6.description = "Select to see a new strategy";
Transform5.children = new MFNode();

Transform5.children[0] = TouchSensor6;

let Shape7 = browser.currentScene.createNode("Shape");
Shape7.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform12.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform12.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "HeadlineClickSurface";
Shape13.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "CardTransform";
Transform18.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform18.translation = new SFVec3f(new float[0,-1.5,0]);
Transform18.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform18.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text20 = browser.currentScene.createNode("Text");
Text20.DEF = "CardText";
let FontStyle21 = browser.currentScene.createNode("FontStyle");
FontStyle21.family = new MFString(new java.lang.String["SANS"]);
FontStyle21.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle21.style = "BOLD";
Text20.fontStyle = FontStyle21;

Shape19.geometry = Text20;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[1,1,1]);
Appearance22.material = Material23;

Shape19.appearance = Appearance22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "string_changed";
ROUTE24.fromNode = "TextScript";
ROUTE24.toField = "string";
ROUTE24.toNode = "CardText";
Transform18.children[1] = ROUTE24;

let Sound25 = browser.currentScene.createNode("Sound");
Sound25.DEF = "CardSoundSpatialization";
Sound25.maxBack = 100;
Sound25.maxFront = 100;
Sound25.minBack = 20;
Sound25.minFront = 20;
//Make sure the sound source AudioClip is audible at the user location
//Not all X3D players seem to use the .mp3
//&#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players
//%20 is space character used in uri/url encoding
let AudioClip26 = browser.currentScene.createNode("AudioClip");
AudioClip26.DEF = "TextToSpeechAudioClip";
AudioClip26.description = "sends strategy text google translate";
AudioClip26.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"]);
AudioClip26.loop = False;
AudioClip26.pitch = 1;
AudioClip26.startTime = 0;
AudioClip26.stopTime = 0;
AudioClip26.pauseTime = 0;
AudioClip26.resumeTime = 0;
Sound25.source = AudioClip26;

Transform18.children[2] = Sound25;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromField = "textToSpeechUrl";
ROUTE27.fromNode = "TextScript";
ROUTE27.toField = "url";
ROUTE27.toNode = "TextToSpeechAudioClip";
Transform18.children[3] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromField = "newCardTime";
ROUTE28.fromNode = "TextScript";
ROUTE28.toField = "startTime";
ROUTE28.toNode = "TextToSpeechAudioClip";
Transform18.children[4] = ROUTE28;

browser.currentScene.children[4] = Transform18;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform29.translation = new SFVec3f(new float[-3.2,2.5,0]);
Transform29.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform29.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let TouchSensor30 = browser.currentScene.createNode("TouchSensor");
TouchSensor30.DEF = "PreviousTextClickedSensor";
TouchSensor30.description = "Select to see previous strategy";
Transform29.children = new MFNode();

Transform29.children[0] = TouchSensor30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "isActive";
ROUTE31.fromNode = "PreviousTextClickedSensor";
ROUTE31.toField = "selectPreviousCard";
ROUTE31.toNode = "TextScript";
Transform29.children[1] = ROUTE31;

let Shape32 = browser.currentScene.createNode("Shape");
Shape32.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape32.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text33 = browser.currentScene.createNode("Text");
Text33.string = new MFString(new java.lang.String["previous"]);
let FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.USE = "MessageFont";
Text33.fontStyle = FontStyle34;

Shape32.geometry = Text33;

let Appearance35 = browser.currentScene.createNode("Appearance");
Appearance35.DEF = "InterfaceAppearance";
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[1,0,0.6]);
Appearance35.material = Material36;

Shape32.appearance = Appearance35;

Transform29.children[2] = Shape32;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.scale = new SFVec3f(new float[2,0.6,1]);
Transform37.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform37.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.DEF = "TransparentClickSurface";
Shape38.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//support Selectable Text with a scalable IFS
let IndexedFaceSet39 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet39.solid = False;
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
IndexedFaceSet39.coord = Coordinate40;

Shape38.geometry = IndexedFaceSet39;

let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.transparency = 1;
Appearance41.material = Material42;

Shape38.appearance = Appearance41;

Transform37.children = new MFNode();

Transform37.children[0] = Shape38;

Transform29.children[3] = Transform37;

browser.currentScene.children[5] = Transform29;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform43.translation = new SFVec3f(new float[3.5,2.5,0]);
Transform43.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform43.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let TouchSensor44 = browser.currentScene.createNode("TouchSensor");
TouchSensor44.DEF = "NextTextClickedSensor";
TouchSensor44.description = "Select to see next strategy";
Transform43.children = new MFNode();

Transform43.children[0] = TouchSensor44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "isActive";
ROUTE45.fromNode = "NextTextClickedSensor";
ROUTE45.toField = "selectNextCard";
ROUTE45.toNode = "TextScript";
Transform43.children[1] = ROUTE45;

let Shape46 = browser.currentScene.createNode("Shape");
Shape46.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape46.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text47 = browser.currentScene.createNode("Text");
Text47.string = new MFString(new java.lang.String["next"]);
let FontStyle48 = browser.currentScene.createNode("FontStyle");
FontStyle48.USE = "MessageFont";
Text47.fontStyle = FontStyle48;

Shape46.geometry = Text47;

let Appearance49 = browser.currentScene.createNode("Appearance");
Appearance49.USE = "InterfaceAppearance";
Shape46.appearance = Appearance49;

Transform43.children[2] = Shape46;

let Transform50 = browser.currentScene.createNode("Transform");
Transform50.scale = new SFVec3f(new float[1.2,0.6,1]);
Transform50.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform50.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape51 = browser.currentScene.createNode("Shape");
Shape51.USE = "TransparentClickSurface";
Transform50.children = new MFNode();

Transform50.children[0] = Shape51;

Transform43.children[3] = Transform50;

browser.currentScene.children[6] = Transform43;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform52.translation = new SFVec3f(new float[-3.3,-0.5,0]);
Transform52.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform52.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.USE = "RandomTextClickedSensor";
Transform52.children = new MFNode();

Transform52.children[0] = TouchSensor53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "isActive";
ROUTE54.fromNode = "RandomTextClickedSensor";
ROUTE54.toField = "selectRandomCard";
ROUTE54.toNode = "TextScript";
Transform52.children[1] = ROUTE54;

let Shape55 = browser.currentScene.createNode("Shape");
Shape55.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape55.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["random"]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.USE = "MessageFont";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
Appearance58.USE = "InterfaceAppearance";
Shape55.appearance = Appearance58;

Transform52.children[2] = Shape55;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.scale = new SFVec3f(new float[1.8,0.6,1]);
Transform59.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform59.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "TransparentClickSurface";
Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

Transform52.children[3] = Transform59;

browser.currentScene.children[7] = Transform52;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.scale = new SFVec3f(new float[0.4,0.4,0.4]);
Transform61.translation = new SFVec3f(new float[3.3,-0.5,0]);
Transform61.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform61.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Anchor62 = browser.currentScene.createNode("Anchor");
Anchor62.DEF = "TextToSpeechAnchor";
Anchor62.description = "text to speech in browser";
Anchor62.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor62.url = new MFString(new java.lang.String["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"]);
Anchor62.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "textToSpeechUrl";
ROUTE63.fromNode = "TextScript";
ROUTE63.toField = "url";
ROUTE63.toNode = "TextToSpeechAnchor";
Anchor62.children = new MFNode();

Anchor62.children[0] = ROUTE63;

let Shape64 = browser.currentScene.createNode("Shape");
Shape64.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape64.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["speech"]);
let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.USE = "MessageFont";
Text65.fontStyle = FontStyle66;

Shape64.geometry = Text65;

let Appearance67 = browser.currentScene.createNode("Appearance");
Appearance67.USE = "InterfaceAppearance";
Shape64.appearance = Appearance67;

Anchor62.children[1] = Shape64;

let Transform68 = browser.currentScene.createNode("Transform");
Transform68.scale = new SFVec3f(new float[1.8,0.6,1]);
Transform68.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform68.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "TransparentClickSurface";
Transform68.children = new MFNode();

Transform68.children[0] = Shape69;

Anchor62.children[2] = Transform68;

Transform61.children = new MFNode();

Transform61.children[0] = Anchor62;

browser.currentScene.children[8] = Transform61;

