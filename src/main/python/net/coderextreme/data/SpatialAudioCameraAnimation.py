from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("SpatialAudioCameraAnimation.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("info")
meta4.setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("28 October 2020")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("7 August 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("CHANGELOG.txt")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("TODO")
meta9.setContent("credit for audio files")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("https://www.medialab.hmu.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
WorldInfo15 = WorldInfo()
WorldInfo15.setTitle("SpatialAudioCameraAnimation.x3d")

Scene14.addChildren(WorldInfo15)
NavigationInfo16 = NavigationInfo()

Scene14.addChildren(NavigationInfo16)
Background17 = Background()
Background17.setBackUrl(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"])
Background17.setBottomUrl(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"])
Background17.setFrontUrl(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"])
Background17.setLeftUrl(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"])
Background17.setRightUrl(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"])
Background17.setTopUrl(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])

Scene14.addChildren(Background17)
Viewpoint18 = Viewpoint()
Viewpoint18.setDEF("Camera001")
Viewpoint18.setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view")
Viewpoint18.setFarDistance(0)
Viewpoint18.setNearDistance(1)
Viewpoint18.setOrientation([1,0,0,-0.523599])
Viewpoint18.setPosition([0,2000,3500])

Scene14.addChildren(Viewpoint18)
TimeSensor19 = TimeSensor()
TimeSensor19.setDEF("TIMER")
TimeSensor19.setCycleInterval(33.333332)
TimeSensor19.setLoop(True)

Scene14.addChildren(TimeSensor19)
PositionInterpolator20 = PositionInterpolator()
PositionInterpolator20.setDEF("Camera001-POS-INTERP")
PositionInterpolator20.setKey([0,0.25,0.5,0.75,1])
PositionInterpolator20.setKeyValue([0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500])

Scene14.addChildren(PositionInterpolator20)
OrientationInterpolator21 = OrientationInterpolator()
OrientationInterpolator21.setDEF("Camera001-ROT-INTERP")
OrientationInterpolator21.setKey([0,0.25,0.5,0.75,1])
OrientationInterpolator21.setKeyValue([1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599])

Scene14.addChildren(OrientationInterpolator21)
ROUTE22 = ROUTE()
ROUTE22.setFromField("fraction_changed")
ROUTE22.setFromNode("TIMER")
ROUTE22.setToField("set_fraction")
ROUTE22.setToNode("Camera001-POS-INTERP")

Scene14.addChildren(ROUTE22)
ROUTE23 = ROUTE()
ROUTE23.setFromField("value_changed")
ROUTE23.setFromNode("Camera001-POS-INTERP")
ROUTE23.setToField("set_position")
ROUTE23.setToNode("Camera001")

Scene14.addChildren(ROUTE23)
ROUTE24 = ROUTE()
ROUTE24.setFromField("fraction_changed")
ROUTE24.setFromNode("TIMER")
ROUTE24.setToField("set_fraction")
ROUTE24.setToNode("Camera001-ROT-INTERP")

Scene14.addChildren(ROUTE24)
ROUTE25 = ROUTE()
ROUTE25.setFromField("value_changed")
ROUTE25.setFromNode("Camera001-ROT-INTERP")
ROUTE25.setToField("set_orientation")
ROUTE25.setToNode("Camera001")

Scene14.addChildren(ROUTE25)
Transform26 = Transform()
Transform26.setDEF("Floor")
Transform26.setTranslation([1.241,0,0.358])
Shape27 = Shape()
Appearance28 = Appearance()
Appearance28.setDEF("WireColor")
Material29 = Material()
Material29.setDiffuseColor([0.122,0.114,0.125])

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Box30 = Box()
Box30.setSize([2000,1,2000])

Shape27.setGeometry(Box30)

Transform26.addChildren(Shape27)

Scene14.addChildren(Transform26)
Transform31 = Transform()
Transform31.setDEF("Audio1Transform")
Transform31.setTranslation([-933.123474,0,-926.253235])
Shape32 = Shape()
Appearance33 = Appearance()
Appearance33.setDEF("WireColor_1")
Material34 = Material()
Material34.setDiffuseColor([0.690196,0.101961,0.101961])

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Sphere35 = Sphere()
Sphere35.setRadius(100)

Shape32.setGeometry(Sphere35)

Transform31.addChildren(Shape32)
Billboard36 = Billboard()
Transform37 = Transform()
Transform37.setDEF("violin")
Transform37.setRotation([1,0,0,-0.5])
Transform37.setScale([100,100,100])
Transform37.setTranslation([0,100,0])
Shape38 = Shape()
Appearance39 = Appearance()
Material40 = Material()
Material40.setAmbientIntensity(0.0933)
Material40.setDiffuseColor([1,1,1])
Material40.setShininess(0.51)
Material40.setSpecularColor([0.46,0.46,0.46])

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
Text41 = Text()
Text41.setString(["Violin"])
FontStyle42 = FontStyle()
FontStyle42.setStyle("BOLD")

Text41.setFontStyle(FontStyle42)

Shape38.setGeometry(Text41)

Transform37.addChildren(Shape38)

Billboard36.addChildren(Transform37)

Transform31.addChildren(Billboard36)

Scene14.addChildren(Transform31)
Transform43 = Transform()
Transform43.setDEF("Audio2")
Transform43.setTranslation([933.475586,0,924.423218])
Shape44 = Shape()
Appearance45 = Appearance()
Appearance45.setDEF("WireColor_2")
Material46 = Material()
Material46.setDiffuseColor([0.105882,0.694118,0.580392])

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
Sphere47 = Sphere()
Sphere47.setRadius(100)

Shape44.setGeometry(Sphere47)

Transform43.addChildren(Shape44)
Billboard48 = Billboard()
Transform49 = Transform()
Transform49.setDEF("saxophone")
Transform49.setRotation([1,0,0,-0.5])
Transform49.setScale([100,100,100])
Transform49.setTranslation([0,100,0])
Shape50 = Shape()
Appearance51 = Appearance()
Material52 = Material()
Material52.setAmbientIntensity(0.0933)
Material52.setDiffuseColor([1,1,1])
Material52.setShininess(0.51)
Material52.setSpecularColor([0.46,0.46,0.46])

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Text53 = Text()
Text53.setString(["Saxophone"])
FontStyle54 = FontStyle()
FontStyle54.setFamily(["Times"])
FontStyle54.setStyle("BOLD")

Text53.setFontStyle(FontStyle54)

Shape50.setGeometry(Text53)

Transform49.addChildren(Shape50)

Billboard48.addChildren(Transform49)

Transform43.addChildren(Billboard48)

Scene14.addChildren(Transform43)
ListenerPointSource55 = ListenerPointSource()
ListenerPointSource55.setTrackCurrentView(True)
ListenerPointSource55.setDopplerEnabled("false")

Scene14.addChildren(ListenerPointSource55)
StreamAudioDestination56 = StreamAudioDestination()
StreamAudioDestination56.setChannelCountMode("MAX")
StreamAudioDestination56.setChannelInterpretation("SPEAKERS")
SpatialSound57 = SpatialSound()
SpatialSound57.setDEF("Audio1")
SpatialSound57.setDistanceModel("INVERSE")
SpatialSound57.setDopplerEnabled("false")
Gain58 = Gain()
Gain58.setChannelCountMode("MAX")
Gain58.setChannelInterpretation("SPEAKERS")
AudioClip59 = AudioClip()
AudioClip59.setLoop(True)
AudioClip59.setPauseTime(-1)
AudioClip59.setResumeTime(-1)
AudioClip59.setStopTime(-1)
AudioClip59.setUrl(["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])

Gain58.addChildren(AudioClip59)

SpatialSound57.addChildren(Gain58)

StreamAudioDestination56.addChildren(SpatialSound57)
SpatialSound60 = SpatialSound()
SpatialSound60.setDEF("Audio2")
SpatialSound60.setDistanceModel("INVERSE")
SpatialSound60.setDopplerEnabled("false")
Gain61 = Gain()
Gain61.setChannelCountMode("MAX")
Gain61.setChannelInterpretation("SPEAKERS")
AudioClip62 = AudioClip()
AudioClip62.setLoop(True)
AudioClip62.setPauseTime(-1)
AudioClip62.setResumeTime(-1)
AudioClip62.setStopTime(-1)
AudioClip62.setUrl(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Gain61.addChildren(AudioClip62)

SpatialSound60.addChildren(Gain61)

StreamAudioDestination56.addChildren(SpatialSound60)

Scene14.addChildren(StreamAudioDestination56)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/SpatialAudioCameraAnimation_RoundTrip.x3d")
