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
meta9.name = "TODO";
meta9.content = "credit for audio files";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.medialab.hmu.gr/minipages/x3domAudio";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "SpatialAudioCameraAnimation.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
children[1] = NavigationInfo16;

Background Background17 = createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]);
Background17.frontUrl = new MFString(new java.lang.String["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]);
Background17.leftUrl = new MFString(new java.lang.String["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]);
Background17.rightUrl = new MFString(new java.lang.String["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]);
Background17.topUrl = new MFString(new java.lang.String["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]);
children[2] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "Camera001";
Viewpoint18.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view";
Viewpoint18.orientation = new SFRotation(new float[1,0,0,-0.523599]);
Viewpoint18.position = new SFVec3f(new float[0,2000,3500]);
children[3] = Viewpoint18;

TimeSensor TimeSensor19 = createNode("TimeSensor");
TimeSensor19.DEF = "TIMER";
TimeSensor19.cycleInterval = 33.333332;
TimeSensor19.loop = True;
children[4] = TimeSensor19;

PositionInterpolator PositionInterpolator20 = createNode("PositionInterpolator");
PositionInterpolator20.DEF = "Camera001-POS-INTERP";
PositionInterpolator20.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]);
children[5] = PositionInterpolator20;

OrientationInterpolator OrientationInterpolator21 = createNode("OrientationInterpolator");
OrientationInterpolator21.DEF = "Camera001-ROT-INTERP";
OrientationInterpolator21.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator21.keyValue = new MFRotation(new float[1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]);
children[6] = OrientationInterpolator21;

ROUTE ROUTE22 = createNode("ROUTE");
ROUTE22.fromField = "fraction_changed";
ROUTE22.fromNode = "TIMER";
ROUTE22.toField = "set_fraction";
ROUTE22.toNode = "Camera001-POS-INTERP";
children[7] = ROUTE22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromField = "value_changed";
ROUTE23.fromNode = "Camera001-POS-INTERP";
ROUTE23.toField = "set_position";
ROUTE23.toNode = "Camera001";
children[8] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromField = "fraction_changed";
ROUTE24.fromNode = "TIMER";
ROUTE24.toField = "set_fraction";
ROUTE24.toNode = "Camera001-ROT-INTERP";
children[9] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromField = "value_changed";
ROUTE25.fromNode = "Camera001-ROT-INTERP";
ROUTE25.toField = "set_orientation";
ROUTE25.toNode = "Camera001";
children[10] = ROUTE25;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "Floor";
Transform26.translation = new SFVec3f(new float[1.241,0,0.358]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Appearance28.DEF = "WireColor";
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.122,0.114,0.125]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Box Box30 = createNode("Box");
Box30.size = new SFVec3f(new float[2000,1,2000]);
Shape27.geometry = Box30;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

children[11] = Transform26;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "TransformAudio1";
Transform31.translation = new SFVec3f(new float[-933.123474,0,-926.253235]);
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Appearance33.DEF = "WireColor_1";
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[0.690196,0.101961,0.101961]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Sphere Sphere35 = createNode("Sphere");
Sphere35.radius = 100;
Shape32.geometry = Sphere35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

Billboard Billboard36 = createNode("Billboard");
Transform Transform37 = createNode("Transform");
Transform37.DEF = "violin";
Transform37.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform37.scale = new SFVec3f(new float[100,100,100]);
Transform37.translation = new SFVec3f(new float[0,100,0]);
Shape Shape38 = createNode("Shape");
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.ambientIntensity = 0.0933;
Material40.diffuseColor = new SFColor(new float[1,1,1]);
Material40.shininess = 0.51;
Material40.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance39.material = Material40;

Shape38.appearance = Appearance39;

Text Text41 = createNode("Text");
Text41.string = new MFString(new java.lang.String["Violin"]);
FontStyle FontStyle42 = createNode("FontStyle");
FontStyle42.DEF = "ModelFontStyle";
FontStyle42.family = new MFString(new java.lang.String["Times","SERIF"]);
FontStyle42.style = "BOLD";
Text41.fontStyle = FontStyle42;

Shape38.geometry = Text41;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

Billboard36.children = new MFNode();

Billboard36.children[0] = Transform37;

Transform31.children[1] = Billboard36;

children[12] = Transform31;

Transform Transform43 = createNode("Transform");
Transform43.DEF = "TransformAudio2";
Transform43.translation = new SFVec3f(new float[933.475586,0,924.423218]);
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Appearance45.DEF = "WireColor_2";
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.105882,0.694118,0.580392]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

Sphere Sphere47 = createNode("Sphere");
Sphere47.radius = 100;
Shape44.geometry = Sphere47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Billboard Billboard48 = createNode("Billboard");
Transform Transform49 = createNode("Transform");
Transform49.DEF = "saxophone";
Transform49.rotation = new SFRotation(new float[1,0,0,-0.5]);
Transform49.scale = new SFVec3f(new float[100,100,100]);
Transform49.translation = new SFVec3f(new float[0,100,0]);
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.ambientIntensity = 0.0933;
Material52.diffuseColor = new SFColor(new float[1,1,1]);
Material52.shininess = 0.51;
Material52.specularColor = new SFColor(new float[0.46,0.46,0.46]);
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

Text Text53 = createNode("Text");
Text53.string = new MFString(new java.lang.String["Saxophone"]);
FontStyle FontStyle54 = createNode("FontStyle");
FontStyle54.USE = "ModelFontStyle";
Text53.fontStyle = FontStyle54;

Shape50.geometry = Text53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Billboard48.children = new MFNode();

Billboard48.children[0] = Transform49;

Transform43.children[1] = Billboard48;

children[13] = Transform43;

ListenerPointSource ListenerPointSource55 = createNode("ListenerPointSource");
ListenerPointSource55.trackCurrentView = True;
children[14] = ListenerPointSource55;

StreamAudioDestination StreamAudioDestination56 = createNode("StreamAudioDestination");
StreamAudioDestination56.channelCountMode = "MAX";
StreamAudioDestination56.channelInterpretation = "SPEAKERS";
SpatialSound SpatialSound57 = createNode("SpatialSound");
SpatialSound57.DEF = "Audio1";
SpatialSound57.distanceModel = "INVERSE";
Gain Gain58 = createNode("Gain");
Gain58.channelCountMode = "MAX";
Gain58.channelInterpretation = "SPEAKERS";
AudioClip AudioClip59 = createNode("AudioClip");
AudioClip59.description = "Violin";
AudioClip59.loop = True;
AudioClip59.url = new MFString(new java.lang.String["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]);
Gain58.children = new MFNode();

Gain58.children[0] = AudioClip59;

SpatialSound57.children = new MFNode();

SpatialSound57.children[0] = Gain58;

StreamAudioDestination56.children = new MFNode();

StreamAudioDestination56.children[0] = SpatialSound57;

SpatialSound SpatialSound60 = createNode("SpatialSound");
SpatialSound60.DEF = "Audio2";
SpatialSound60.distanceModel = "INVERSE";
Gain Gain61 = createNode("Gain");
Gain61.channelCountMode = "MAX";
Gain61.channelInterpretation = "SPEAKERS";
AudioClip AudioClip62 = createNode("AudioClip");
AudioClip62.description = "Saxophone";
AudioClip62.loop = True;
AudioClip62.url = new MFString(new java.lang.String["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]);
Gain61.children = new MFNode();

Gain61.children[0] = AudioClip62;

SpatialSound60.children = new MFNode();

SpatialSound60.children[0] = Gain61;

StreamAudioDestination56.children[1] = SpatialSound60;

children[15] = StreamAudioDestination56;

}
