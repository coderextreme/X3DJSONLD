const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("title", "SplitChannels.x3d");
scene.addMetaData("description", "This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.");
scene.addMetaData("info", "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.");
scene.addMetaData("creator", "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman");
scene.addMetaData("created", "28 October 2020");
scene.addMetaData("modified", "23 April 2023");
scene.addMetaData("reference", "CHANGELOG.txt");
scene.addMetaData("TODO", "credit for audio files");
scene.addMetaData("reference", "http://www.medialab.hmu.gr/minipages/x3domAudio");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d");
scene.addMetaData("generator", "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "SplitChannels.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new X3D.MFString([new X3D.SFString("NONE")]);
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new X3D.MFColor([0.2,0.2,0.21]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.orientation = new X3D.SFRotation([1,0,0,-0.5]);
Viewpoint18.position = new X3D.SFVec3f([0,500,600]);
Viewpoint18.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "PowerR";
Transform19.translation = new X3D.SFVec3f([100,400,400]);
let Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform20.translation = new X3D.SFVec3f([0,40,0]);
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
Appearance22.DEF = "audio_emit";
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0,1,0]);
Material23.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material23.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material23;

appearance = Appearance22;

let Box24 = browser.currentScene.createNode("Box");
Box24.size = new X3D.SFVec3f([10,80,0.01]);
geometry = Box24;

Transform20YYY.child = new X3D.undefined();

Transform20ZZZ.child[0] = Shape21;

Transform19YYY.children = new X3D.MFNode();

Transform19ZZZ.children[0] = Transform20;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform25.translation = new X3D.SFVec3f([-2.7,37,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.DEF = "audio_emit2";
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new X3D.SFColor([0,1,0]);
Material28.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material28.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("images/line.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")]);
texture = ImageTexture29;

appearance = Appearance27;

let Box30 = browser.currentScene.createNode("Box");
Box30.size = new X3D.SFVec3f([25,83,0.01]);
geometry = Box30;

Transform25YYY.child = new X3D.undefined();

Transform25ZZZ.child[0] = Shape26;

Transform19ZZZ.children[1] = Transform25;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "volumeRight";
Transform31.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform31.scale = new X3D.SFVec3f([10,10,10]);
Transform31.translation = new X3D.SFVec3f([0,-10,0]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.ambientIntensity = 0.0933;
Material34.diffuseColor = new X3D.SFColor([0.345,0.345,0.882]);
Material34.shininess = 0.51;
Material34.specularColor = new X3D.SFColor([0.46,0.46,0.46]);
material = Material34;

appearance = Appearance33;

let Text35 = browser.currentScene.createNode("Text");
Text35.string = new X3D.MFString([new X3D.SFString("Right Channel Volume")]);
let FontStyle36 = browser.currentScene.createNode("FontStyle");
FontStyle36.DEF = "VolumeFontStyle";
FontStyle36.family = new X3D.MFString([new X3D.SFString("Times"), new X3D.SFString("SERIF")]);
FontStyle36.style = "BOLD";
fontStyle = FontStyle36;

geometry = Text35;

Transform31YYY.child = new X3D.undefined();

Transform31ZZZ.child[0] = Shape32;

Transform19ZZZ.children[2] = Transform31;

browser.currentScene.children[4] = Transform19;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "PowerL";
Transform37.translation = new X3D.SFVec3f([-100,400,400]);
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform38.translation = new X3D.SFVec3f([0,40,0]);
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.DEF = "audio_emit3";
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new X3D.SFColor([0,1,0]);
Material41.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material41.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material41;

appearance = Appearance40;

let Box42 = browser.currentScene.createNode("Box");
Box42.size = new X3D.SFVec3f([10,80,0.01]);
geometry = Box42;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

Transform37YYY.children = new X3D.MFNode();

Transform37ZZZ.children[0] = Transform38;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform43.translation = new X3D.SFVec3f([13.2,37,0]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
Appearance45.DEF = "audio_emit4";
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new X3D.SFColor([0,1,0]);
Material46.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material46.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material46;

let ImageTexture47 = browser.currentScene.createNode("ImageTexture");
ImageTexture47.url = new X3D.MFString([new X3D.SFString("images/line.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png")]);
texture = ImageTexture47;

appearance = Appearance45;

let Box48 = browser.currentScene.createNode("Box");
Box48.size = new X3D.SFVec3f([25,83,0.01]);
geometry = Box48;

Transform43YYY.child = new X3D.undefined();

Transform43ZZZ.child[0] = Shape44;

Transform37ZZZ.children[1] = Transform43;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "volumeLeft";
Transform49.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform49.scale = new X3D.SFVec3f([10,10,10]);
Transform49.translation = new X3D.SFVec3f([0,-10,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0.0933;
Material52.diffuseColor = new X3D.SFColor([0.345,0.345,0.882]);
Material52.shininess = 0.51;
Material52.specularColor = new X3D.SFColor([0.46,0.46,0.46]);
material = Material52;

appearance = Appearance51;

let Text53 = browser.currentScene.createNode("Text");
Text53.string = new X3D.MFString([new X3D.SFString("Left Channel Volume")]);
let FontStyle54 = browser.currentScene.createNode("FontStyle");
FontStyle54.USE = "VolumeFontStyle";
fontStyle = FontStyle54;

geometry = Text53;

Transform49YYY.child = new X3D.undefined();

Transform49ZZZ.child[0] = Shape50;

Transform37ZZZ.children[2] = Transform49;

browser.currentScene.children[5] = Transform37;

let Transform55 = browser.currentScene.createNode("Transform");
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.DEF = "floor";
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new X3D.SFColor([0.1,0.1,0.1]);
Material58.shininess = 0.8;
Material58.specularColor = new X3D.SFColor([0.5,0.6,0.7]);
material = Material58;

appearance = Appearance57;

let Box59 = browser.currentScene.createNode("Box");
Box59.size = new X3D.SFVec3f([1500,10,500]);
geometry = Box59;

Transform55YYY.child = new X3D.undefined();

Transform55ZZZ.child[0] = Shape56;

browser.currentScene.children[6] = Transform55;

let ListenerPointSource60 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource60.trackCurrentView = True;
browser.currentScene.children[7] = ListenerPointSource60;

let StreamAudioDestination61 = browser.currentScene.createNode("StreamAudioDestination");
let Gain62 = browser.currentScene.createNode("Gain");
let ChannelMerger63 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector64 = browser.currentScene.createNode("ChannelSelector");
let Gain65 = browser.currentScene.createNode("Gain");
Gain65.USE = "ChannelSplitter";
ChannelSelector64YYY.children = new X3D.MFNode();

ChannelSelector64ZZZ.children[0] = Gain65;

ChannelMerger63YYY.children = new X3D.MFNode();

ChannelMerger63ZZZ.children[0] = ChannelSelector64;

let ChannelSelector66 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector66.channelSelection = 1;
let Gain67 = browser.currentScene.createNode("Gain");
Gain67.USE = "ChannelSplitter";
ChannelSelector66YYY.children = new X3D.MFNode();

ChannelSelector66ZZZ.children[0] = Gain67;

ChannelMerger63ZZZ.children[1] = ChannelSelector66;

Gain62YYY.children = new X3D.MFNode();

Gain62ZZZ.children[0] = ChannelMerger63;

StreamAudioDestination61YYY.children = new X3D.MFNode();

StreamAudioDestination61ZZZ.children[0] = Gain62;

browser.currentScene.children[8] = StreamAudioDestination61;

let ChannelSplitter68 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter68.DEF = "ChannelSplitter";
ChannelSplitter68.channelCountMode = "EXPLICIT";
let AudioClip69 = browser.currentScene.createNode("AudioClip");
AudioClip69.description = "Violin";
AudioClip69.url = new X3D.MFString([new X3D.SFString("sound/violin.mp3"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3")]);
ChannelSplitter68YYY.outputs = new X3D.MFNode();

ChannelSplitter68ZZZ.outputs[0] = AudioClip69;

browser.currentScene.children[9] = ChannelSplitter68;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.DEF = "Audio3";
Transform70.rotation = new X3D.SFRotation([1,0,0,-0.5]);
Transform70.translation = new X3D.SFVec3f([0,100,0]);
let Shape71 = browser.currentScene.createNode("Shape");
let Appearance72 = browser.currentScene.createNode("Appearance");
Appearance72.DEF = "audio_emit5";
let Material73 = browser.currentScene.createNode("Material");
Material73.diffuseColor = new X3D.SFColor([0.3,1,0.3]);
Material73.emissiveColor = new X3D.SFColor([0.8,0.8,0.8]);
Material73.specularColor = new X3D.SFColor([0.01,0.01,0.01]);
material = Material73;

let ImageTexture74 = browser.currentScene.createNode("ImageTexture");
ImageTexture74.url = new X3D.MFString([new X3D.SFString("images/loudspeaker.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png")]);
texture = ImageTexture74;

appearance = Appearance72;

let Box75 = browser.currentScene.createNode("Box");
Box75.size = new X3D.SFVec3f([100,100,0.001]);
geometry = Box75;

Transform70YYY.child = new X3D.undefined();

Transform70ZZZ.child[0] = Shape71;

browser.currentScene.children[10] = Transform70;

}
main ();
