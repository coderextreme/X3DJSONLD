const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "Filters.x3d");
scene.addMetaData("description", "This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.");
scene.addMetaData("info", "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
scene.addMetaData("creator", "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
scene.addMetaData("created", "28 October 2020");
scene.addMetaData("modified", "5 December 2021");
scene.addMetaData("reference", "CHANGELOG.txt");
scene.addMetaData("TODO", "credit for audio files");
scene.addMetaData("reference", "https://www.medialab.hmu.gr/minipages/x3domAudio");
scene.addMetaData("identifier", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "Filters.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new X3D.MFColor([0.2,0.2,0.2]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "View entire audio model";
Viewpoint18.orientation = new X3D.SFRotation([1,0,0,-0.5]);
Viewpoint18.position = new X3D.SFVec3f([0,500,600]);
Viewpoint18.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "TransformAudio1";
Transform19.translation = new X3D.SFVec3f([-200,50,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "audio_emit";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material22.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material22.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material22;

appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 30;
geometry = Sphere23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[4] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "TransformAudio2";
Transform24.translation = new X3D.SFVec3f([0,50,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.DEF = "audio_emit2";
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material27.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material27.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material27;

appearance = Appearance26;

let Sphere28 = browser.currentScene.createNode("Sphere");
Sphere28.radius = 30;
geometry = Sphere28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

browser.currentScene.children[5] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "TransformAudio3";
Transform29.translation = new X3D.SFVec3f([200,50,0]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
Appearance31.DEF = "audio_emit3";
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material32.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material32.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material32;

appearance = Appearance31;

let Sphere33 = browser.currentScene.createNode("Sphere");
Sphere33.radius = 30;
geometry = Sphere33;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

browser.currentScene.children[6] = Transform29;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "AnimData";
Transform34.translation = new X3D.SFVec3f([0,50,0]);
browser.currentScene.children[7] = Transform34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "AnimDataBoxH";
Transform35.translation = new X3D.SFVec3f([0,100,0]);
browser.currentScene.children[8] = Transform35;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "AnimDataBoxM";
Transform36.translation = new X3D.SFVec3f([15,100,0]);
browser.currentScene.children[9] = Transform36;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "AnimDataBoxL";
Transform37.translation = new X3D.SFVec3f([30,100,0]);
browser.currentScene.children[10] = Transform37;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "AnimDataBoxMM";
Transform38.translation = new X3D.SFVec3f([-15,100,0]);
browser.currentScene.children[11] = Transform38;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "AnimDataBoxLM";
Transform39.translation = new X3D.SFVec3f([-30,100,0]);
browser.currentScene.children[12] = Transform39;

let Transform40 = browser.currentScene.createNode("Transform");
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
Appearance42.DEF = "floor";
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material43.shininess = 0.8;
Material43.specularColor = new X3D.SFColor([0.5,0.6,0.7]);
material = Material43;

appearance = Appearance42;

let Cylinder44 = browser.currentScene.createNode("Cylinder");
Cylinder44.radius = 500;
geometry = Cylinder44;

Transform40YYY.child = new X3D.undefined();

Transform40ZZZ.child[0] = Shape41;

browser.currentScene.children[13] = Transform40;

let ListenerPointSource45 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource45.trackCurrentView = True;
browser.currentScene.children[14] = ListenerPointSource45;

let StreamAudioDestination46 = browser.currentScene.createNode("StreamAudioDestination");
let DynamicsCompressor47 = browser.currentScene.createNode("DynamicsCompressor");
let Gain48 = browser.currentScene.createNode("Gain");
let SpatialSound49 = browser.currentScene.createNode("SpatialSound");
SpatialSound49.DEF = "Audio1";
let Gain50 = browser.currentScene.createNode("Gain");
let Analyser51 = browser.currentScene.createNode("Analyser");
let BiquadFilter52 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter52.detune = 50;
BiquadFilter52.frequency = 600;
BiquadFilter52.qualityFactor = 30;
BiquadFilter52.type = "ALLPASS";
let AudioClip53 = browser.currentScene.createNode("AudioClip");
AudioClip53.description = "Techno beat";
AudioClip53.loop = True;
AudioClip53.url = new X3D.MFString([new X3D.SFString("sound/techno_beat.mp3"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/techno_beat.mp3")]);
BiquadFilter52YYY.children = new X3D.MFNode();

BiquadFilter52ZZZ.children[0] = AudioClip53;

Analyser51YYY.children = new X3D.MFNode();

Analyser51ZZZ.children[0] = BiquadFilter52;

Gain50YYY.children = new X3D.MFNode();

Gain50ZZZ.children[0] = Analyser51;

SpatialSound49YYY.children = new X3D.MFNode();

SpatialSound49ZZZ.children[0] = Gain50;

Gain48YYY.children = new X3D.MFNode();

Gain48ZZZ.children[0] = SpatialSound49;

let SpatialSound54 = browser.currentScene.createNode("SpatialSound");
SpatialSound54.DEF = "Audio2";
let Gain55 = browser.currentScene.createNode("Gain");
let Analyser56 = browser.currentScene.createNode("Analyser");
let BiquadFilter57 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter57.detune = 15;
BiquadFilter57.frequency = 600;
BiquadFilter57.qualityFactor = 15;
BiquadFilter57.type = "ALLPASS";
let AudioClip58 = browser.currentScene.createNode("AudioClip");
AudioClip58.description = "Simple beat";
AudioClip58.loop = True;
AudioClip58.url = new X3D.MFString([new X3D.SFString("sound/beat.mp3"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/beat.mp3")]);
BiquadFilter57YYY.children = new X3D.MFNode();

BiquadFilter57ZZZ.children[0] = AudioClip58;

Analyser56YYY.children = new X3D.MFNode();

Analyser56ZZZ.children[0] = BiquadFilter57;

Gain55YYY.children = new X3D.MFNode();

Gain55ZZZ.children[0] = Analyser56;

SpatialSound54YYY.children = new X3D.MFNode();

SpatialSound54ZZZ.children[0] = Gain55;

Gain48ZZZ.children[1] = SpatialSound54;

let SpatialSound59 = browser.currentScene.createNode("SpatialSound");
SpatialSound59.DEF = "Audio3";
let Gain60 = browser.currentScene.createNode("Gain");
let Analyser61 = browser.currentScene.createNode("Analyser");
let BiquadFilter62 = browser.currentScene.createNode("BiquadFilter");
BiquadFilter62.frequency = 1000;
BiquadFilter62.qualityFactor = 0;
BiquadFilter62.type = "ALLPASS";
let AudioClip63 = browser.currentScene.createNode("AudioClip");
AudioClip63.description = "Wobble loop";
AudioClip63.loop = True;
AudioClip63.url = new X3D.MFString([new X3D.SFString("sound/wobble_loop.mp3"), new X3D.SFString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/wobble_loop.mp3")]);
BiquadFilter62YYY.children = new X3D.MFNode();

BiquadFilter62ZZZ.children[0] = AudioClip63;

Analyser61YYY.children = new X3D.MFNode();

Analyser61ZZZ.children[0] = BiquadFilter62;

Gain60YYY.children = new X3D.MFNode();

Gain60ZZZ.children[0] = Analyser61;

SpatialSound59YYY.children = new X3D.MFNode();

SpatialSound59ZZZ.children[0] = Gain60;

Gain48ZZZ.children[2] = SpatialSound59;

DynamicsCompressor47YYY.children = new X3D.MFNode();

DynamicsCompressor47ZZZ.children[0] = Gain48;

StreamAudioDestination46YYY.children = new X3D.MFNode();

StreamAudioDestination46ZZZ.children[0] = DynamicsCompressor47;

browser.currentScene.children[15] = StreamAudioDestination46;

}
main ();
