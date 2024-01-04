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
meta7.content = "Sat, 30 Dec 2023 07:58:55 GMT";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "TODO";
meta10.content = "credit for audio files";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d";
head1.meta[9] = meta11;

head = head1;

let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "SplitChannels.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo13;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo14;

let Background15 = browser.currentScene.createNode("Background");
Background15.skyColor = new MFColor(new float[0.2,0.2,0.21]);
browser.currentScene.children[2] = Background15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.position = new SFVec3f(new float[0,500,600]);
Viewpoint16.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint16.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint16;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "PowerR";
Transform17.translation = new SFVec3f(new float[100,400,400]);
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,40,0]);
Transform18.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
Appearance20.DEF = "audio_emit";
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[0,1,0]);
Material21.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material21.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Box22 = browser.currentScene.createNode("Box");
Box22.size = new SFVec3f(new float[10,80,0.01]);
Shape19.geometry = Box22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[-2.7,37,0]);
Transform23.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
Appearance25.DEF = "audio_emit2";
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0,1,0]);
Material26.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material26.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance25.material = Material26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance25.texture = ImageTexture27;

Shape24.appearance = Appearance25;

let Box28 = browser.currentScene.createNode("Box");
Box28.size = new SFVec3f(new float[25,83,0.01]);
Shape24.geometry = Box28;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform17.children[1] = Transform23;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "volumeRight";
Transform29.translation = new SFVec3f(new float[0,-10,0]);
Transform29.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform29.scale = new SFVec3f(new float[10,10,10]);
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.ambientIntensity = 0.0933;
Material32.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material32.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material32.shininess = 0.51;
Appearance31.material = Material32;

Shape30.appearance = Appearance31;

let Text33 = browser.currentScene.createNode("Text");
let FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.family = new MFString(new java.lang.String["Times"]);
FontStyle34.style = "BOLD";
Text33.fontStyle = FontStyle34;

Shape30.geometry = Text33;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform17.children[2] = Transform29;

browser.currentScene.children[4] = Transform17;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "PowerL";
Transform35.translation = new SFVec3f(new float[-100,400,400]);
let Transform36 = browser.currentScene.createNode("Transform");
Transform36.translation = new SFVec3f(new float[0,40,0]);
Transform36.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape37 = browser.currentScene.createNode("Shape");
let Appearance38 = browser.currentScene.createNode("Appearance");
Appearance38.DEF = "audio_emit3";
let Material39 = browser.currentScene.createNode("Material");
Material39.diffuseColor = new SFColor(new float[0,1,0]);
Material39.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material39.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

let Box40 = browser.currentScene.createNode("Box");
Box40.size = new SFVec3f(new float[10,80,0.01]);
Shape37.geometry = Box40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Transform36;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[13.2,37,0]);
Transform41.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
Appearance43.DEF = "audio_emit4";
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0,1,0]);
Material44.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material44.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance43.material = Material44;

let ImageTexture45 = browser.currentScene.createNode("ImageTexture");
ImageTexture45.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance43.texture = ImageTexture45;

Shape42.appearance = Appearance43;

let Box46 = browser.currentScene.createNode("Box");
Box46.size = new SFVec3f(new float[25,83,0.01]);
Shape42.geometry = Box46;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform35.children[1] = Transform41;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "volumeLeft";
Transform47.translation = new SFVec3f(new float[0,-10,0]);
Transform47.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform47.scale = new SFVec3f(new float[10,10,10]);
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.ambientIntensity = 0.0933;
Material50.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material50.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material50.shininess = 0.51;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let Text51 = browser.currentScene.createNode("Text");
let FontStyle52 = browser.currentScene.createNode("FontStyle");
FontStyle52.family = new MFString(new java.lang.String["Times"]);
FontStyle52.style = "BOLD";
Text51.fontStyle = FontStyle52;

Shape48.geometry = Text51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform35.children[2] = Transform47;

browser.currentScene.children[5] = Transform35;

let Transform53 = browser.currentScene.createNode("Transform");
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
Appearance55.DEF = "floor";
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material56.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Material56.shininess = 0.8;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let Box57 = browser.currentScene.createNode("Box");
Box57.size = new SFVec3f(new float[1500,10,500]);
Shape54.geometry = Box57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

browser.currentScene.children[6] = Transform53;

let ListenerPointSource58 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource58.trackCurrentView = True;
browser.currentScene.children[7] = ListenerPointSource58;

let StreamAudioDestination59 = browser.currentScene.createNode("StreamAudioDestination");
let Gain60 = browser.currentScene.createNode("Gain");
let ChannelMerger61 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector62 = browser.currentScene.createNode("ChannelSelector");
let Gain63 = browser.currentScene.createNode("Gain");
ChannelSelector62.children = new MFNode();

ChannelSelector62.children[0] = Gain63;

ChannelMerger61.children = new MFNode();

ChannelMerger61.children[0] = ChannelSelector62;

let ChannelSelector64 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector64.channelSelection = 1;
let Gain65 = browser.currentScene.createNode("Gain");
ChannelSelector64.children = new MFNode();

ChannelSelector64.children[0] = Gain65;

ChannelMerger61.children[1] = ChannelSelector64;

Gain60.children = new MFNode();

Gain60.children[0] = ChannelMerger61;

StreamAudioDestination59.children = new MFNode();

StreamAudioDestination59.children[0] = Gain60;

browser.currentScene.children[8] = StreamAudioDestination59;

let ChannelSplitter66 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter66.DEF = "ChannelSplitter";
ChannelSplitter66.channelCountMode = "EXPLICIT";
let AudioClip67 = browser.currentScene.createNode("AudioClip");
AudioClip67.description = "Violin";
AudioClip67.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
ChannelSplitter66.outputs = new MFNode();

ChannelSplitter66.outputs[0] = AudioClip67;

browser.currentScene.children[9] = ChannelSplitter66;

let Transform68 = browser.currentScene.createNode("Transform");
Transform68.DEF = "Audio3";
Transform68.translation = new SFVec3f(new float[0,100,0]);
Transform68.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape69 = browser.currentScene.createNode("Shape");
let Appearance70 = browser.currentScene.createNode("Appearance");
Appearance70.DEF = "audio_emit5";
let Material71 = browser.currentScene.createNode("Material");
Material71.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material71.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material71.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance70.material = Material71;

let ImageTexture72 = browser.currentScene.createNode("ImageTexture");
ImageTexture72.url = new MFString(new java.lang.String["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]);
Appearance70.texture = ImageTexture72;

Shape69.appearance = Appearance70;

let Box73 = browser.currentScene.createNode("Box");
Box73.size = new SFVec3f(new float[100,100,0.001]);
Shape69.geometry = Box73;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

browser.currentScene.children[10] = Transform68;

