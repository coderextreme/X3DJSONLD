const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Sound", 3));
scene.addMetaData("title", "AllAudioGraphNodesTest.x3d");
scene.addMetaData("description", "List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("created", "25 October 2020");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:18:43 GMT");
scene.addMetaData("warning", "Developmental test, no actual 3D model expected");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d");
await browser .loadComponents (scene);
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "AllAudioGraphNodesTest.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let AcousticProperties14 = browser.currentScene.createNode("AcousticProperties");
AcousticProperties14.description = "Testing of X3D4 nodes demonstrating W3C Audio API in progress";
AcousticProperties14.diffuse = 0.25;
AcousticProperties14.specular = 1;
AcousticProperties14.refraction = 0.5;
acousticProperties = AcousticProperties14;

let Material15 = browser.currentScene.createNode("Material");
material = Material15;

appearance = Appearance13;

let Box16 = browser.currentScene.createNode("Box");
geometry = Box16;

browser.currentScene.children[1] = Shape12;

let Sound17 = browser.currentScene.createNode("Sound");
Sound17.location = new X3D.SFVec3f([0,1.6,0]);
let AudioClip18 = browser.currentScene.createNode("AudioClip");
AudioClip18.description = "testing";
AudioClip18.url = new X3D.MFString([new X3D.SFString("sound/saxophone.mp3"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3")]);
source = AudioClip18;

browser.currentScene.children[2] = Sound17;

let Sound19 = browser.currentScene.createNode("Sound");
Sound19.location = new X3D.SFVec3f([0,1.6,0]);
let MovieTexture20 = browser.currentScene.createNode("MovieTexture");
MovieTexture20.description = "testing";
MovieTexture20.url = new X3D.MFString([new X3D.SFString("bogus.mpg"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg")]);
source = MovieTexture20;

browser.currentScene.children[3] = Sound19;

let SpatialSound21 = browser.currentScene.createNode("SpatialSound");
let Analyser22 = browser.currentScene.createNode("Analyser");
let StreamAudioDestination23 = browser.currentScene.createNode("StreamAudioDestination");
let BiquadFilter24 = browser.currentScene.createNode("BiquadFilter");
let ChannelMerger25 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector26 = browser.currentScene.createNode("ChannelSelector");
let ChannelSplitter27 = browser.currentScene.createNode("ChannelSplitter");
let Convolver28 = browser.currentScene.createNode("Convolver");
let Delay29 = browser.currentScene.createNode("Delay");
let DynamicsCompressor30 = browser.currentScene.createNode("DynamicsCompressor");
let Gain31 = browser.currentScene.createNode("Gain");
let StreamAudioDestination32 = browser.currentScene.createNode("StreamAudioDestination");
let WaveShaper33 = browser.currentScene.createNode("WaveShaper");
let BufferAudioSource34 = browser.currentScene.createNode("BufferAudioSource");
WaveShaper33YYY.children = new X3D.MFNode();

WaveShaper33ZZZ.children[0] = BufferAudioSource34;

let ListenerPointSource35 = browser.currentScene.createNode("ListenerPointSource");
WaveShaper33ZZZ.children[1] = ListenerPointSource35;

let MicrophoneSource36 = browser.currentScene.createNode("MicrophoneSource");
WaveShaper33ZZZ.children[2] = MicrophoneSource36;

let OscillatorSource37 = browser.currentScene.createNode("OscillatorSource");
WaveShaper33ZZZ.children[3] = OscillatorSource37;

let StreamAudioSource38 = browser.currentScene.createNode("StreamAudioSource");
WaveShaper33ZZZ.children[4] = StreamAudioSource38;

StreamAudioDestination32YYY.children = new X3D.MFNode();

StreamAudioDestination32ZZZ.children[0] = WaveShaper33;

Gain31YYY.children = new X3D.MFNode();

Gain31ZZZ.children[0] = StreamAudioDestination32;

DynamicsCompressor30YYY.children = new X3D.MFNode();

DynamicsCompressor30ZZZ.children[0] = Gain31;

Delay29YYY.children = new X3D.MFNode();

Delay29ZZZ.children[0] = DynamicsCompressor30;

Convolver28YYY.children = new X3D.MFNode();

Convolver28ZZZ.children[0] = Delay29;

ChannelSplitter27YYY.outputs = new X3D.MFNode();

ChannelSplitter27ZZZ.outputs[0] = Convolver28;

ChannelSelector26YYY.children = new X3D.MFNode();

ChannelSelector26ZZZ.children[0] = ChannelSplitter27;

ChannelMerger25YYY.children = new X3D.MFNode();

ChannelMerger25ZZZ.children[0] = ChannelSelector26;

BiquadFilter24YYY.children = new X3D.MFNode();

BiquadFilter24ZZZ.children[0] = ChannelMerger25;

StreamAudioDestination23YYY.children = new X3D.MFNode();

StreamAudioDestination23ZZZ.children[0] = BiquadFilter24;

Analyser22YYY.children = new X3D.MFNode();

Analyser22ZZZ.children[0] = StreamAudioDestination23;

SpatialSound21YYY.children = new X3D.MFNode();

SpatialSound21ZZZ.children[0] = Analyser22;

browser.currentScene.children[4] = SpatialSound21;

}
main ();
