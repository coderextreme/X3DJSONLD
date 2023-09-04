#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "SpatialAudioCameraAnimation.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.";
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
meta9.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "TODO";
meta10.content = "credit for audio files";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

head = head1;

WorldInfo WorldInfo14 = createNode("WorldInfo");
WorldInfo14.title = "SpatialAudioCameraAnimation.x3d";
children = new MFNode();

children[0] = WorldInfo14;

NavigationInfo NavigationInfo15 = createNode("NavigationInfo");
children[1] = NavigationInfo15;

Background Background16 = createNode("Background");
Background16.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background16.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background16.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background16.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background16.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
children[2] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.DEF = "Camera001";
Viewpoint17.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view";
Viewpoint17.position = new SFVec3f(new float[0,2000,3500]);
Viewpoint17.orientation = new SFRotation(new float[1,0,0,-0.523599]);
children[3] = Viewpoint17;

TimeSensor TimeSensor18 = createNode("TimeSensor");
TimeSensor18.DEF = "TIMER";
TimeSensor18.cycleInterval = 33.333332;
TimeSensor18.loop = True;
children[4] = TimeSensor18;

PositionInterpolator PositionInterpolator19 = createNode("PositionInterpolator");
PositionInterpolator19.DEF = "Camera001-POS-INTERP";
PositionInterpolator19.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator19.keyValue = new MFVec3f(new float[0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]);
children[5] = PositionInterpolator19;

OrientationInterpolator OrientationInterpolator20 = createNode("OrientationInterpolator");
OrientationInterpolator20.DEF = "Camera001-ROT-INTERP";
OrientationInterpolator20.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator20.keyValue = new MFRotation(new float[1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]);
children[6] = OrientationInterpolator20;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "Floor";
Transform21.translation = new SFVec3f(new float[1.241,0,0.358]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Appearance23.DEF = "WireColor";
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

Box Box25 = createNode("Box");
Box25.size = new SFVec3f(new float[2000,1,2000]);
Shape22.geometry = Box25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

children[7] = Transform21;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "TransformAudio1";
Transform26.translation = new SFVec3f(new float[-933.1235,0,-926.2532]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Appearance28.DEF = "WireColor_1";
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.690196,0.101961,0.101961]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Sphere Sphere30 = createNode("Sphere");
Sphere30.radius = 100;
Shape27.geometry = Sphere30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

Billboard Billboard31 = createNode("Billboard");
Transform Transform32 = createNode("Transform");
Transform32.DEF = "violin";
Transform32.translation = new SFVec3f(new float[0,100,0]);
Transform32.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform32.scale = new SFVec3f(new float[100,100,100]);
Shape Shape33 = createNode("Shape");
Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.ambientIntensity = 0.0933;
Material35.diffuseColor = new SFColor(new float[1,1,1]);
Material35.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material35.shininess = 0.51;
Appearance34.material = Material35;

Shape33.appearance = Appearance34;

Text Text36 = createNode("Text");
Text36.string = new MFString(new java.lang.String["Violin"]);
FontStyle FontStyle37 = createNode("FontStyle");
FontStyle37.DEF = "ModelFontStyle";
FontStyle37.family = new MFString(new java.lang.String["Times","SERIF"]);
FontStyle37.style = "BOLD";
Text36.fontStyle = FontStyle37;

Shape33.geometry = Text36;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

Billboard31.children = new MFNode();

Billboard31.children[0] = Transform32;

Transform26.children[1] = Billboard31;

children[8] = Transform26;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "TransformAudio2";
Transform38.translation = new SFVec3f(new float[933.4756,0,924.4232]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Appearance40.DEF = "WireColor_2";
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.105882,0.694118,0.580392]);
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Sphere Sphere42 = createNode("Sphere");
Sphere42.radius = 100;
Shape39.geometry = Sphere42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Billboard Billboard43 = createNode("Billboard");
Transform Transform44 = createNode("Transform");
Transform44.DEF = "saxophone";
Transform44.translation = new SFVec3f(new float[0,100,0]);
Transform44.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform44.scale = new SFVec3f(new float[100,100,100]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.ambientIntensity = 0.0933;
Material47.diffuseColor = new SFColor(new float[1,1,1]);
Material47.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Material47.shininess = 0.51;
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Text Text48 = createNode("Text");
Text48.string = new MFString(new java.lang.String["Saxophone"]);
FontStyle FontStyle49 = createNode("FontStyle");
FontStyle49.USE = "ModelFontStyle";
Text48.fontStyle = FontStyle49;

Shape45.geometry = Text48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Billboard43.children = new MFNode();

Billboard43.children[0] = Transform44;

Transform38.children[1] = Billboard43;

children[9] = Transform38;

ListenerPointSource ListenerPointSource50 = createNode("ListenerPointSource");
ListenerPointSource50.trackCurrentView = True;
children[10] = ListenerPointSource50;

StreamAudioDestination StreamAudioDestination51 = createNode("StreamAudioDestination");
SpatialSound SpatialSound52 = createNode("SpatialSound");
SpatialSound52.DEF = "Audio1";
Gain Gain53 = createNode("Gain");
AudioClip AudioClip54 = createNode("AudioClip");
AudioClip54.description = "Violin";
AudioClip54.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
AudioClip54.loop = True;
Gain53.children = new MFNode();

Gain53.children[0] = AudioClip54;

SpatialSound52.children = new MFNode();

SpatialSound52.children[0] = Gain53;

StreamAudioDestination51.children = new MFNode();

StreamAudioDestination51.children[0] = SpatialSound52;

SpatialSound SpatialSound55 = createNode("SpatialSound");
SpatialSound55.DEF = "Audio2";
Gain Gain56 = createNode("Gain");
AudioClip AudioClip57 = createNode("AudioClip");
AudioClip57.description = "Saxophone";
AudioClip57.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
AudioClip57.loop = True;
Gain56.children = new MFNode();

Gain56.children[0] = AudioClip57;

SpatialSound55.children = new MFNode();

SpatialSound55.children[0] = Gain56;

StreamAudioDestination51.children[1] = SpatialSound55;

children[11] = StreamAudioDestination51;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "TIMER";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Camera001-POS-INTERP";
ROUTE58.toField = "set_fraction";
children[12] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "Camera001-POS-INTERP";
ROUTE59.fromField = "value_changed";
ROUTE59.toNode = "Camera001";
ROUTE59.toField = "position";
children[13] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "TIMER";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Camera001-ROT-INTERP";
ROUTE60.toField = "set_fraction";
children[14] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Camera001-ROT-INTERP";
ROUTE61.fromField = "value_changed";
ROUTE61.toNode = "Camera001";
ROUTE61.toField = "orientation";
children[15] = ROUTE61;

}
