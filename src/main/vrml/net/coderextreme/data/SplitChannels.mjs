let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "SplitChannels.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "info";
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "28 October 2020";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "5 December 2021";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "TODO";
meta9.content = "credit for audio files";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "SplitChannels.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ON"]);
browser.currentScene.children[1] = NavigationInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new MFColor(new float[0.2,0.2,0.21]);
browser.currentScene.children[2] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint18.position = new SFVec3f(new float[0,500,600]);
Viewpoint18.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "PowerR";
Transform19.translation = new SFVec3f(new float[100,400,400]);
let Transform20 = browser.currentScene.createNode("Transform");
Transform20.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform20.translation = new SFVec3f(new float[0,40,0]);
let Shape21 = browser.currentScene.createNode("Shape");
let Appearance22 = browser.currentScene.createNode("Appearance");
Appearance22.DEF = "audio_emit";
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new SFColor(new float[0,1,0]);
Material23.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material23.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

let Box24 = browser.currentScene.createNode("Box");
Box24.size = new SFVec3f(new float[10,80,0.01]);
Shape21.geometry = Box24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

Transform19.children = new MFNode();

Transform19.children[0] = Transform20;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform25.translation = new SFVec3f(new float[-2.7,37,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
Appearance27.DEF = "audio_emit2";
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[0,1,0]);
Material28.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material28.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance27.material = Material28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance27.texture = ImageTexture29;

Shape26.appearance = Appearance27;

let Box30 = browser.currentScene.createNode("Box");
Box30.size = new SFVec3f(new float[25,83,0.01]);
Shape26.geometry = Box30;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform19.children[1] = Transform25;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.DEF = "volumeRight";
Transform31.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform31.scale = new SFVec3f(new float[10,10,10]);
Transform31.translation = new SFVec3f(new float[0,-10,0]);
let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.ambientIntensity = 0.0933;
Material34.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material34.shininess = 0.51;
Material34.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

let Text35 = browser.currentScene.createNode("Text");
Text35.string = new MFString(new java.lang.String["Right Channel Volume"]);
let FontStyle36 = browser.currentScene.createNode("FontStyle");
FontStyle36.family = new MFString(new java.lang.String["Times"]);
FontStyle36.style = "BOLD";
Text35.fontStyle = FontStyle36;

Shape32.geometry = Text35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Transform19.children[2] = Transform31;

browser.currentScene.children[4] = Transform19;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "PowerL";
Transform37.translation = new SFVec3f(new float[-100,400,400]);
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform38.translation = new SFVec3f(new float[0,40,0]);
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.DEF = "audio_emit3";
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new SFColor(new float[0,1,0]);
Material41.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material41.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

let Box42 = browser.currentScene.createNode("Box");
Box42.size = new SFVec3f(new float[10,80,0.01]);
Shape39.geometry = Box42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform43.translation = new SFVec3f(new float[13.2,37,0]);
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
Appearance45.DEF = "audio_emit4";
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0,1,0]);
Material46.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material46.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance45.material = Material46;

let ImageTexture47 = browser.currentScene.createNode("ImageTexture");
ImageTexture47.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance45.texture = ImageTexture47;

Shape44.appearance = Appearance45;

let Box48 = browser.currentScene.createNode("Box");
Box48.size = new SFVec3f(new float[25,83,0.01]);
Shape44.geometry = Box48;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform37.children[1] = Transform43;

let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "volumeLeft";
Transform49.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform49.scale = new SFVec3f(new float[10,10,10]);
Transform49.translation = new SFVec3f(new float[0,-10,0]);
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.ambientIntensity = 0.0933;
Material52.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material52.shininess = 0.51;
Material52.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Text53 = browser.currentScene.createNode("Text");
Text53.string = new MFString(new java.lang.String["Left Channel Volume"]);
let FontStyle54 = browser.currentScene.createNode("FontStyle");
FontStyle54.family = new MFString(new java.lang.String["Times"]);
FontStyle54.style = "BOLD";
Text53.fontStyle = FontStyle54;

Shape50.geometry = Text53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform37.children[2] = Transform49;

browser.currentScene.children[5] = Transform37;

let Transform55 = browser.currentScene.createNode("Transform");
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
Appearance57.DEF = "floor";
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material58.shininess = 0.8;
Material58.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Box59 = browser.currentScene.createNode("Box");
Box59.size = new SFVec3f(new float[1500,10,500]);
Shape56.geometry = Box59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

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
ChannelSelector64.children = new MFNode();

ChannelSelector64.children[0] = Gain65;

ChannelMerger63.children = new MFNode();

ChannelMerger63.children[0] = ChannelSelector64;

let ChannelSelector66 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector66.channelSelection = 1;
let Gain67 = browser.currentScene.createNode("Gain");
Gain67.USE = "ChannelSplitter";
ChannelSelector66.children = new MFNode();

ChannelSelector66.children[0] = Gain67;

ChannelMerger63.children[1] = ChannelSelector66;

Gain62.children = new MFNode();

Gain62.children[0] = ChannelMerger63;

StreamAudioDestination61.children = new MFNode();

StreamAudioDestination61.children[0] = Gain62;

browser.currentScene.children[8] = StreamAudioDestination61;

let ChannelSplitter68 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter68.DEF = "ChannelSplitter";
ChannelSplitter68.channelCountMode = "EXPLICIT";
let AudioClip69 = browser.currentScene.createNode("AudioClip");
AudioClip69.description = "Violin";
AudioClip69.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
ChannelSplitter68.outputs = new MFNode();

ChannelSplitter68.outputs[0] = AudioClip69;

browser.currentScene.children[9] = ChannelSplitter68;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.DEF = "Audio3";
Transform70.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform70.translation = new SFVec3f(new float[0,100,0]);
let Shape71 = browser.currentScene.createNode("Shape");
let Appearance72 = browser.currentScene.createNode("Appearance");
Appearance72.DEF = "audio_emit5";
let Material73 = browser.currentScene.createNode("Material");
Material73.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material73.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Material73.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Appearance72.material = Material73;

let ImageTexture74 = browser.currentScene.createNode("ImageTexture");
ImageTexture74.url = new MFString(new java.lang.String["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]);
Appearance72.texture = ImageTexture74;

Shape71.appearance = Appearance72;

let Box75 = browser.currentScene.createNode("Box");
Box75.size = new SFVec3f(new float[100,100,0.001]);
Shape71.geometry = Box75;

Transform70.child = new undefined();

Transform70.child[0] = Shape71;

browser.currentScene.children[10] = Transform70;

