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

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "SplitChannels.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo15;

let Background16 = browser.currentScene.createNode("Background");
Background16.skyColor = new MFColor(new float[0.2,0.2,0.21]);
browser.currentScene.children[2] = Background16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,500,600]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint17.retainUserOffsets = True;
browser.currentScene.children[3] = Viewpoint17;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "PowerR";
Transform18.translation = new SFVec3f(new float[100,400,400]);
let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,40,0]);
Transform19.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
Appearance21.DEF = "audio_emit";
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,1,0]);
Material22.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material22.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Box23 = browser.currentScene.createNode("Box");
Box23.size = new SFVec3f(new float[10,80,0.01]);
Shape20.geometry = Box23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[-2.7,37,0]);
Transform24.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.DEF = "audio_emit2";
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,1,0]);
Material27.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material27.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance26.material = Material27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance26.texture = ImageTexture28;

Shape25.appearance = Appearance26;

let Box29 = browser.currentScene.createNode("Box");
Box29.size = new SFVec3f(new float[25,83,0.01]);
Shape25.geometry = Box29;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "volumeRight";
Transform30.translation = new SFVec3f(new float[0,-10,0]);
Transform30.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform30.scale = new SFVec3f(new float[10,10,10]);
let Shape31 = browser.currentScene.createNode("Shape");
let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.ambientIntensity = 0.0933;
Material33.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material33.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material33.shininess = 0.51;
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

let Text34 = browser.currentScene.createNode("Text");
let FontStyle35 = browser.currentScene.createNode("FontStyle");
FontStyle35.family = new MFString(new java.lang.String["Times"]);
FontStyle35.style = "BOLD";
Text34.fontStyle = FontStyle35;

Shape31.geometry = Text34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform18.children[2] = Transform30;

browser.currentScene.children[4] = Transform18;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "PowerL";
Transform36.translation = new SFVec3f(new float[-100,400,400]);
let Transform37 = browser.currentScene.createNode("Transform");
Transform37.translation = new SFVec3f(new float[0,40,0]);
Transform37.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape38 = browser.currentScene.createNode("Shape");
let Appearance39 = browser.currentScene.createNode("Appearance");
Appearance39.DEF = "audio_emit3";
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0,1,0]);
Material40.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material40.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

let Box41 = browser.currentScene.createNode("Box");
Box41.size = new SFVec3f(new float[10,80,0.01]);
Shape38.geometry = Box41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Transform37;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.translation = new SFVec3f(new float[13.2,37,0]);
Transform42.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape43 = browser.currentScene.createNode("Shape");
let Appearance44 = browser.currentScene.createNode("Appearance");
Appearance44.DEF = "audio_emit4";
let Material45 = browser.currentScene.createNode("Material");
Material45.diffuseColor = new SFColor(new float[0,1,0]);
Material45.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material45.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance44.material = Material45;

let ImageTexture46 = browser.currentScene.createNode("ImageTexture");
ImageTexture46.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance44.texture = ImageTexture46;

Shape43.appearance = Appearance44;

let Box47 = browser.currentScene.createNode("Box");
Box47.size = new SFVec3f(new float[25,83,0.01]);
Shape43.geometry = Box47;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform36.children[1] = Transform42;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.DEF = "volumeLeft";
Transform48.translation = new SFVec3f(new float[0,-10,0]);
Transform48.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform48.scale = new SFVec3f(new float[10,10,10]);
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.ambientIntensity = 0.0933;
Material51.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material51.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material51.shininess = 0.51;
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let Text52 = browser.currentScene.createNode("Text");
let FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.family = new MFString(new java.lang.String["Times"]);
FontStyle53.style = "BOLD";
Text52.fontStyle = FontStyle53;

Shape49.geometry = Text52;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform36.children[2] = Transform48;

browser.currentScene.children[5] = Transform36;

let Transform54 = browser.currentScene.createNode("Transform");
let Shape55 = browser.currentScene.createNode("Shape");
let Appearance56 = browser.currentScene.createNode("Appearance");
Appearance56.DEF = "floor";
let Material57 = browser.currentScene.createNode("Material");
Material57.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material57.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Material57.shininess = 0.8;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

let Box58 = browser.currentScene.createNode("Box");
Box58.size = new SFVec3f(new float[1500,10,500]);
Shape55.geometry = Box58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

browser.currentScene.children[6] = Transform54;

let ListenerPointSource59 = browser.currentScene.createNode("ListenerPointSource");
ListenerPointSource59.trackCurrentView = True;
browser.currentScene.children[7] = ListenerPointSource59;

let StreamAudioDestination60 = browser.currentScene.createNode("StreamAudioDestination");
let Gain61 = browser.currentScene.createNode("Gain");
let ChannelMerger62 = browser.currentScene.createNode("ChannelMerger");
let ChannelSelector63 = browser.currentScene.createNode("ChannelSelector");
let Gain64 = browser.currentScene.createNode("Gain");
ChannelSelector63.children = new MFNode();

ChannelSelector63.children[0] = Gain64;

ChannelMerger62.children = new MFNode();

ChannelMerger62.children[0] = ChannelSelector63;

let ChannelSelector65 = browser.currentScene.createNode("ChannelSelector");
ChannelSelector65.channelSelection = 1;
let Gain66 = browser.currentScene.createNode("Gain");
ChannelSelector65.children = new MFNode();

ChannelSelector65.children[0] = Gain66;

ChannelMerger62.children[1] = ChannelSelector65;

Gain61.children = new MFNode();

Gain61.children[0] = ChannelMerger62;

StreamAudioDestination60.children = new MFNode();

StreamAudioDestination60.children[0] = Gain61;

browser.currentScene.children[8] = StreamAudioDestination60;

let ChannelSplitter67 = browser.currentScene.createNode("ChannelSplitter");
ChannelSplitter67.DEF = "ChannelSplitter";
ChannelSplitter67.channelCountMode = "EXPLICIT";
let AudioClip68 = browser.currentScene.createNode("AudioClip");
AudioClip68.description = "Violin";
AudioClip68.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
ChannelSplitter67.outputs = new MFNode();

ChannelSplitter67.outputs[0] = AudioClip68;

browser.currentScene.children[9] = ChannelSplitter67;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "Audio3";
Transform69.translation = new SFVec3f(new float[0,100,0]);
Transform69.rotation = new SFRotation(new float[1,0,0,-0.5]);
let Shape70 = browser.currentScene.createNode("Shape");
let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.DEF = "audio_emit5";
let Material72 = browser.currentScene.createNode("Material");
Material72.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material72.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material72.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance71.material = Material72;

let ImageTexture73 = browser.currentScene.createNode("ImageTexture");
ImageTexture73.url = new MFString(new java.lang.String["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]);
Appearance71.texture = ImageTexture73;

Shape70.appearance = Appearance71;

let Box74 = browser.currentScene.createNode("Box");
Box74.size = new SFVec3f(new float[100,100,0.001]);
Shape70.geometry = Box74;

Transform69.child = new undefined();

Transform69.child[0] = Shape70;

browser.currentScene.children[10] = Transform69;

