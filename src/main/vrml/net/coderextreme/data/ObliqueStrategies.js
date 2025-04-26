const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ObliqueStrategies.x3d");
scene.addMetaData("description", "Text scripting and animation example using Oblique Strategies card set by Brian Eno.");
scene.addMetaData("creator", "Don Brutzman, John Kelly, Ben Cheng");
scene.addMetaData("created", "3 November 2013");
scene.addMetaData("modified", "10 November 2019");
scene.addMetaData("reference", "oblique.html");
scene.addMetaData("reference", "ObliqueStrategies.txt");
scene.addMetaData("reference", "ObliqueStrategiesScript.js");
scene.addMetaData("reference", "http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html");
scene.addMetaData("reference", "http://www.eno-web.co.uk/obliques.html");
scene.addMetaData("reference", "http://gothpunk.com/haiku-intro.html");
scene.addMetaData("reference", "http://www.rtqe.net/ObliqueStrategies/OSintro.html");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/Oblique_Strategies");
scene.addMetaData("subject", "Brian Eno, Oblique Strategies");
scene.addMetaData("Image", "images/ObliqueStrategiesEntryScreen.png");
scene.addMetaData("Sound", "http://translate.google.com/translate_tts?tl=en&q=hello%20X3D");
scene.addMetaData("Sound", "translate_tts_HelloX3D.mp3");
scene.addMetaData("Sound", "translate_tts_HelloX3D.wav");
scene.addMetaData("TODO", "multiliingual translation parameter");
scene.addMetaData("reference", "http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech");
scene.addMetaData("reference", "http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html");
scene.addMetaData("warning", "under development, scene Sound/AudioClip triggering (or retrieved file format) not working");
scene.addMetaData("warning", "TODO resolve potential error in Script node TextScript: parse problem line 15 " var strategy = [];");
scene.addMetaData("reference", "https://gist.github.com/alotaiba/1728771");
scene.addMetaData("reference", "https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api");
scene.addMetaData("Sound", "https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4");
scene.addMetaData("Sound", "translate_tts_HelloX3D4.mp3");
scene.addMetaData("reference", "https://cloud.google.com/translate/docs/basic/translating-text");
scene.addMetaData("identifier", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.title = "ObliqueStrategies.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo34;

let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo35.type = new X3D.MFString([new X3D.SFString("NONE")]);
browser.currentScene.children[1] = NavigationInfo35;

let Background36 = browser.currentScene.createNode("Background");
Background36.skyColor = new X3D.MFColor([0.419608,0.427451,1]);
browser.currentScene.children[2] = Background36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform37.translation = new X3D.SFVec3f([0,1,0]);
let TouchSensor38 = browser.currentScene.createNode("TouchSensor");
TouchSensor38.DEF = "RandomTextClickedSensor";
TouchSensor38.description = "Select to see a new strategy";
Transform37YYY.children = new X3D.MFNode();

Transform37ZZZ.children[0] = TouchSensor38;

let Shape39 = browser.currentScene.createNode("Shape");
let Text40 = browser.currentScene.createNode("Text");
Text40.string = new X3D.MFString([new X3D.SFString("Oblique Strategies"), new X3D.SFString(""), new X3D.SFString("(Over One Hundred Worthwhile Dilemmas)"), new X3D.SFString(""), new X3D.SFString("by Brian Eno and Peter Schmidt")]);
let FontStyle41 = browser.currentScene.createNode("FontStyle");
FontStyle41.DEF = "MessageFont";
FontStyle41.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle41.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle41.style = "BOLD";
fontStyle = FontStyle41;

geometry = Text40;

let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material43;

appearance = Appearance42;

Transform37ZZZ.child[1] = Shape39;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = new X3D.SFVec3f([10,3,1]);
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.DEF = "HeadlineClickSurface";
let IndexedFaceSet46 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet46.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
IndexedFaceSet46.solid = False;
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new X3D.MFVec3f([1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
coord = Coordinate47;

geometry = IndexedFaceSet46;

let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.ambientIntensity = 0.245763;
Material49.diffuseColor = new X3D.SFColor([0.34773,0.090909,0.005289]);
Material49.shininess = 0.07;
Material49.specularColor = new X3D.SFColor([0.336735,0.051091,0.051091]);
Material49.transparency = 0.8;
material = Material49;

appearance = Appearance48;

Transform44YYY.child = new X3D.undefined();

Transform44ZZZ.child[0] = Shape45;

Transform37ZZZ.children[2] = Transform44;

browser.currentScene.children[3] = Transform37;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "TextScript";
Script50.url = new X3D.MFString([new X3D.SFString("ObliqueStrategiesScript.js"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js")]);
//initialize() method includes unit test to printAllStrategies() to console
//TODO insert field definitions here (index string_changed previous next random) and then animate!
Script51.getField("index").setValue("0");
Script50YYY.field = new X3D.MFNode();

Script52.getField("string_changed")Script50YYY.field = new X3D.MFNode();

Script53.getField("textToSpeechUrl")Script50YYY.field = new X3D.MFNode();

Script54.getField("newCardTime")Script50YYY.field = new X3D.MFNode();

Script55.getField("selectPreviousCard")Script50YYY.field = new X3D.MFNode();

Script56.getField("selectNextCard")Script50YYY.field = new X3D.MFNode();

Script57.getField("selectRandomCard")Script50YYY.field = new X3D.MFNode();

Script58.getField("traceEnabled").setValue("true");
Script50YYY.field = new X3D.MFNode();

browser.currentScene.children[4] = Script50;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "CardTransform";
Transform59.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform59.translation = new X3D.SFVec3f([0,-1.5,0]);
let Shape60 = browser.currentScene.createNode("Shape");
let Text61 = browser.currentScene.createNode("Text");
Text61.DEF = "CardText";
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.family = new X3D.MFString([new X3D.SFString("SANS")]);
FontStyle62.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle62.style = "BOLD";
fontStyle = FontStyle62;

geometry = Text61;

let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material64;

appearance = Appearance63;

Transform59YYY.child = new X3D.undefined();

Transform59ZZZ.child[0] = Shape60;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "string_changed";
ROUTE65.fromNode = "TextScript";
ROUTE65.toField = "string";
ROUTE65.toNode = "CardText";
Transform59ZZZ.children[1] = ROUTE65;

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
AudioClip67.url = new X3D.MFString([new X3D.SFString("http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium"), new X3D.SFString("translate_tts_mp3FileFormatNotSupported.wav"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav")]);
source = AudioClip67;

Transform59ZZZ.children[2] = Sound66;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "textToSpeechUrl";
ROUTE68.fromNode = "TextScript";
ROUTE68.toField = "url";
ROUTE68.toNode = "TextToSpeechAudioClip";
Transform59ZZZ.children[3] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "newCardTime";
ROUTE69.fromNode = "TextScript";
ROUTE69.toField = "startTime";
ROUTE69.toNode = "TextToSpeechAudioClip";
Transform59ZZZ.children[4] = ROUTE69;

browser.currentScene.children[5] = Transform59;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform70.translation = new X3D.SFVec3f([-3.2,2.5,0]);
let TouchSensor71 = browser.currentScene.createNode("TouchSensor");
TouchSensor71.DEF = "PreviousTextClickedSensor";
TouchSensor71.description = "Select to see previous strategy";
Transform70YYY.children = new X3D.MFNode();

Transform70ZZZ.children[0] = TouchSensor71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "isActive";
ROUTE72.fromNode = "PreviousTextClickedSensor";
ROUTE72.toField = "selectPreviousCard";
ROUTE72.toNode = "TextScript";
Transform70ZZZ.children[1] = ROUTE72;

let Shape73 = browser.currentScene.createNode("Shape");
let Text74 = browser.currentScene.createNode("Text");
Text74.string = new X3D.MFString([new X3D.SFString("previous")]);
let FontStyle75 = browser.currentScene.createNode("FontStyle");
FontStyle75.USE = "MessageFont";
fontStyle = FontStyle75;

geometry = Text74;

let Appearance76 = browser.currentScene.createNode("Appearance");
Appearance76.DEF = "InterfaceAppearance";
let Material77 = browser.currentScene.createNode("Material");
Material77.diffuseColor = new X3D.SFColor([1,0,0.6]);
material = Material77;

appearance = Appearance76;

Transform70ZZZ.child[2] = Shape73;

let Transform78 = browser.currentScene.createNode("Transform");
Transform78.scale = new X3D.SFVec3f([2,0.6,1]);
let Shape79 = browser.currentScene.createNode("Shape");
Shape79.DEF = "TransparentClickSurface";
//support Selectable Text with a scalable IFS
let IndexedFaceSet80 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet80.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
IndexedFaceSet80.solid = False;
let Coordinate81 = browser.currentScene.createNode("Coordinate");
Coordinate81.point = new X3D.MFVec3f([1,1,0,1,-1,0,-1,-1,0,-1,1,0]);
coord = Coordinate81;

geometry = IndexedFaceSet80;

let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.transparency = 1;
material = Material83;

appearance = Appearance82;

Transform78YYY.child = new X3D.undefined();

Transform78ZZZ.child[0] = Shape79;

Transform70ZZZ.children[3] = Transform78;

browser.currentScene.children[6] = Transform70;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform84.translation = new X3D.SFVec3f([3.5,2.5,0]);
let TouchSensor85 = browser.currentScene.createNode("TouchSensor");
TouchSensor85.DEF = "NextTextClickedSensor";
TouchSensor85.description = "Select to see next strategy";
Transform84YYY.children = new X3D.MFNode();

Transform84ZZZ.children[0] = TouchSensor85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "isActive";
ROUTE86.fromNode = "NextTextClickedSensor";
ROUTE86.toField = "selectNextCard";
ROUTE86.toNode = "TextScript";
Transform84ZZZ.children[1] = ROUTE86;

let Shape87 = browser.currentScene.createNode("Shape");
let Text88 = browser.currentScene.createNode("Text");
Text88.string = new X3D.MFString([new X3D.SFString("next")]);
let FontStyle89 = browser.currentScene.createNode("FontStyle");
FontStyle89.USE = "MessageFont";
fontStyle = FontStyle89;

geometry = Text88;

let Appearance90 = browser.currentScene.createNode("Appearance");
Appearance90.USE = "InterfaceAppearance";
appearance = Appearance90;

Transform84ZZZ.child[2] = Shape87;

let Transform91 = browser.currentScene.createNode("Transform");
Transform91.scale = new X3D.SFVec3f([1.2,0.6,1]);
let Shape92 = browser.currentScene.createNode("Shape");
Shape92.USE = "TransparentClickSurface";
Transform91YYY.child = new X3D.undefined();

Transform91ZZZ.child[0] = Shape92;

Transform84ZZZ.children[3] = Transform91;

browser.currentScene.children[7] = Transform84;

let Transform93 = browser.currentScene.createNode("Transform");
Transform93.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform93.translation = new X3D.SFVec3f([-3.3,-0.5,0]);
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.USE = "RandomTextClickedSensor";
Transform93YYY.children = new X3D.MFNode();

Transform93ZZZ.children[0] = TouchSensor94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromField = "isActive";
ROUTE95.fromNode = "RandomTextClickedSensor";
ROUTE95.toField = "selectRandomCard";
ROUTE95.toNode = "TextScript";
Transform93ZZZ.children[1] = ROUTE95;

let Shape96 = browser.currentScene.createNode("Shape");
let Text97 = browser.currentScene.createNode("Text");
Text97.string = new X3D.MFString([new X3D.SFString("random")]);
let FontStyle98 = browser.currentScene.createNode("FontStyle");
FontStyle98.USE = "MessageFont";
fontStyle = FontStyle98;

geometry = Text97;

let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.USE = "InterfaceAppearance";
appearance = Appearance99;

Transform93ZZZ.child[2] = Shape96;

let Transform100 = browser.currentScene.createNode("Transform");
Transform100.scale = new X3D.SFVec3f([1.8,0.6,1]);
let Shape101 = browser.currentScene.createNode("Shape");
Shape101.USE = "TransparentClickSurface";
Transform100YYY.child = new X3D.undefined();

Transform100ZZZ.child[0] = Shape101;

Transform93ZZZ.children[3] = Transform100;

browser.currentScene.children[8] = Transform93;

let Transform102 = browser.currentScene.createNode("Transform");
Transform102.scale = new X3D.SFVec3f([0.4,0.4,0.4]);
Transform102.translation = new X3D.SFVec3f([3.3,-0.5,0]);
let Anchor103 = browser.currentScene.createNode("Anchor");
Anchor103.DEF = "TextToSpeechAnchor";
Anchor103.description = "text to speech in browser";
Anchor103.parameter = new X3D.MFString([new X3D.SFString("target=_blank")]);
Anchor103.url = new X3D.MFString([new X3D.SFString("http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change")]);
let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromField = "textToSpeechUrl";
ROUTE104.fromNode = "TextScript";
ROUTE104.toField = "url";
ROUTE104.toNode = "TextToSpeechAnchor";
Anchor103YYY.children = new X3D.MFNode();

Anchor103ZZZ.children[0] = ROUTE104;

let Shape105 = browser.currentScene.createNode("Shape");
let Text106 = browser.currentScene.createNode("Text");
Text106.string = new X3D.MFString([new X3D.SFString("speech")]);
let FontStyle107 = browser.currentScene.createNode("FontStyle");
FontStyle107.USE = "MessageFont";
fontStyle = FontStyle107;

geometry = Text106;

let Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.USE = "InterfaceAppearance";
appearance = Appearance108;

Anchor103ZZZ.children[1] = Shape105;

let Transform109 = browser.currentScene.createNode("Transform");
Transform109.scale = new X3D.SFVec3f([1.8,0.6,1]);
let Shape110 = browser.currentScene.createNode("Shape");
Shape110.USE = "TransparentClickSurface";
Transform109YYY.child = new X3D.undefined();

Transform109ZZZ.child[0] = Shape110;

Anchor103ZZZ.children[2] = Transform109;

Transform102YYY.children = new X3D.MFNode();

Transform102ZZZ.children[0] = Anchor103;

browser.currentScene.children[9] = Transform102;

}
main ();
