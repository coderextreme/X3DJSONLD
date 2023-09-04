#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "SplitChannels.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "info";
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "28 October 2020";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "5 December 2021";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "CHANGELOG.txt";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "http://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "credit for audio files";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "SplitChannels.x3d";
children = new MFNode();

children[0] = WorldInfo14;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
children[1] = NavigationInfo15;

Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[0.2,0.2,0.21]);
children[2] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.position = new SFVec3f(new float[0,500,600]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.5]);
Viewpoint17.retainUserOffsets = True;
children[3] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "PowerR";
Transform18.translation = new SFVec3f(new float[100,400,400]);
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,40,0]);
Transform19.rotation = new SFRotation(new float[1,0,0,-0.5]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Appearance21.DEF = "audio_emit";
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,1,0]);
Material22.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material22.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Box Box23 = createNode("Box");
Box23.size = new SFVec3f(new float[10,80,0.01]);
Shape20.geometry = Box23;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[-2.7,37,0]);
Transform24.rotation = new SFRotation(new float[1,0,0,-0.5]);
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
Appearance26.DEF = "audio_emit2";
Material Material27 = createNode("Material");
Material27.diffuseColor = new SFColor(new float[0,1,0]);
Material27.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material27.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance26.material = Material27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance26.texture = ImageTexture28;

Shape25.appearance = Appearance26;

Box Box29 = createNode("Box");
Box29.size = new SFVec3f(new float[25,83,0.01]);
Shape25.geometry = Box29;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "volumeRight";
Transform30.translation = new SFVec3f(new float[0,-10,0]);
Transform30.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform30.scale = new SFVec3f(new float[10,10,10]);
Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.ambientIntensity = 0.0933;
Material33.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material33.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material33.shininess = 0.51;
Appearance32.material = Material33;

Shape31.appearance = Appearance32;

Text Text34 = createNode("Text");
FontStyle FontStyle35 = createNode("FontStyle");
FontStyle35.family = new MFString(new java.lang.String["Times"]);
FontStyle35.style = "BOLD";
Text34.fontStyle = FontStyle35;

Shape31.geometry = Text34;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform18.children[2] = Transform30;

children[4] = Transform18;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "PowerL";
Transform36.translation = new SFVec3f(new float[-100,400,400]);
Transform Transform37 = createNode("Transform");
Transform37.translation = new SFVec3f(new float[0,40,0]);
Transform37.rotation = new SFRotation(new float[1,0,0,-0.5]);
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Appearance39.DEF = "audio_emit3";
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[0,1,0]);
Material40.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material40.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Box Box41 = createNode("Box");
Box41.size = new SFVec3f(new float[10,80,0.01]);
Shape38.geometry = Box41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Transform37;

Transform Transform42 = createNode("Transform");
Transform42.translation = new SFVec3f(new float[13.2,37,0]);
Transform42.rotation = new SFRotation(new float[1,0,0,-0.5]);
Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
Appearance44.DEF = "audio_emit4";
Material Material45 = createNode("Material");
Material45.diffuseColor = new SFColor(new float[0,1,0]);
Material45.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material45.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance44.material = Material45;

ImageTexture ImageTexture46 = createNode("ImageTexture");
ImageTexture46.url = new MFString(new java.lang.String["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]);
Appearance44.texture = ImageTexture46;

Shape43.appearance = Appearance44;

Box Box47 = createNode("Box");
Box47.size = new SFVec3f(new float[25,83,0.01]);
Shape43.geometry = Box47;

Transform42.child = new undefined();

Transform42.child[0] = Shape43;

Transform36.children[1] = Transform42;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "volumeLeft";
Transform48.translation = new SFVec3f(new float[0,-10,0]);
Transform48.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform48.scale = new SFVec3f(new float[10,10,10]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.ambientIntensity = 0.0933;
Material51.diffuseColor = new SFColor(new float[0.345,0.345,0.882]);
Material51.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material51.shininess = 0.51;
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

Text Text52 = createNode("Text");
FontStyle FontStyle53 = createNode("FontStyle");
FontStyle53.family = new MFString(new java.lang.String["Times"]);
FontStyle53.style = "BOLD";
Text52.fontStyle = FontStyle53;

Shape49.geometry = Text52;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform36.children[2] = Transform48;

children[5] = Transform36;

Transform Transform54 = createNode("Transform");
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Appearance56.DEF = "floor";
Material Material57 = createNode("Material");
Material57.diffuseColor = new SFColor(new float[0.1,0.1,0.1]);
Material57.specularColor = new SFColor(new float[0.5,0.6,0.7]);
Material57.shininess = 0.8;
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

Box Box58 = createNode("Box");
Box58.size = new SFVec3f(new float[1500,10,500]);
Shape55.geometry = Box58;

Transform54.child = new undefined();

Transform54.child[0] = Shape55;

children[6] = Transform54;

ListenerPointSource ListenerPointSource59 = createNode("ListenerPointSource");
ListenerPointSource59.trackCurrentView = True;
children[7] = ListenerPointSource59;

StreamAudioDestination StreamAudioDestination60 = createNode("StreamAudioDestination");
Gain Gain61 = createNode("Gain");
ChannelMerger ChannelMerger62 = createNode("ChannelMerger");
ChannelSelector ChannelSelector63 = createNode("ChannelSelector");
Gain Gain64 = createNode("Gain");
ChannelSelector63.children = new MFNode();

ChannelSelector63.children[0] = Gain64;

ChannelMerger62.children = new MFNode();

ChannelMerger62.children[0] = ChannelSelector63;

ChannelSelector ChannelSelector65 = createNode("ChannelSelector");
ChannelSelector65.channelSelection = 1;
Gain Gain66 = createNode("Gain");
ChannelSelector65.children = new MFNode();

ChannelSelector65.children[0] = Gain66;

ChannelMerger62.children[1] = ChannelSelector65;

Gain61.children = new MFNode();

Gain61.children[0] = ChannelMerger62;

StreamAudioDestination60.children = new MFNode();

StreamAudioDestination60.children[0] = Gain61;

children[8] = StreamAudioDestination60;

ChannelSplitter ChannelSplitter67 = createNode("ChannelSplitter");
ChannelSplitter67.DEF = "ChannelSplitter";
ChannelSplitter67.channelCountMode = "EXPLICIT";
AudioClip AudioClip68 = createNode("AudioClip");
AudioClip68.description = "Violin";
AudioClip68.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
ChannelSplitter67.outputs = new MFNode();

ChannelSplitter67.outputs[0] = AudioClip68;

children[9] = ChannelSplitter67;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "Audio3";
Transform69.translation = new SFVec3f(new float[0,100,0]);
Transform69.rotation = new SFRotation(new float[1,0,0,-0.5]);
Shape Shape70 = createNode("Shape");
Appearance Appearance71 = createNode("Appearance");
Appearance71.DEF = "audio_emit5";
Material Material72 = createNode("Material");
Material72.diffuseColor = new SFColor(new float[0.3,1,0.3]);
Material72.specularColor = new SFColor(new float[0.01,0.01,0.01]);
Material72.emissiveColor = new SFColor(new float[0.8,0.8,0.8]);
Appearance71.material = Material72;

ImageTexture ImageTexture73 = createNode("ImageTexture");
ImageTexture73.url = new MFString(new java.lang.String["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]);
Appearance71.texture = ImageTexture73;

Shape70.appearance = Appearance71;

Box Box74 = createNode("Box");
Box74.size = new SFVec3f(new float[100,100,0.001]);
Shape70.geometry = Box74;

Transform69.child = new undefined();

Transform69.child[0] = Shape70;

children[10] = Transform69;

}
