import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("SpatialAudioCameraAnimation.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("info")
meta4.setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("28 October 2020")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("5 December 2021")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("CHANGELOG.txt")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("TODO")
meta9.setContent("credit for audio files")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://www.medialab.hmu.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("SpatialAudioCameraAnimation.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()

Scene14.addChild(NavigationInfo16)
Background17 = x3d.Background()
Background17.setBackUrl(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"])
Background17.setBottomUrl(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"])
Background17.setFrontUrl(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"])
Background17.setLeftUrl(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"])
Background17.setRightUrl(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"])
Background17.setTopUrl(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])

Scene14.addChild(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDEF("Camera001")
Viewpoint18.setDescription("Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view")
Viewpoint18.setOrientation(x3d.doubleToFloat([1,0,0,-0.523599]))
Viewpoint18.setPosition(x3d.doubleToFloat([0,2000,3500]))

Scene14.addChild(Viewpoint18)
TimeSensor19 = x3d.TimeSensor()
TimeSensor19.setDEF("TIMER")
TimeSensor19.setCycleInterval(33.333332)
TimeSensor19.setLoop(True)

Scene14.addChild(TimeSensor19)
PositionInterpolator20 = x3d.PositionInterpolator()
PositionInterpolator20.setDEF("Camera001-POS-INTERP")
PositionInterpolator20.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
PositionInterpolator20.setKeyValue(x3d.doubleToFloat([0,2000,3500,0,2000,0,0,2000,-3500,0,2000,0,0,2000,3500]))

Scene14.addChild(PositionInterpolator20)
OrientationInterpolator21 = x3d.OrientationInterpolator()
OrientationInterpolator21.setDEF("Camera001-ROT-INTERP")
OrientationInterpolator21.setKey(x3d.doubleToFloat([0,0.25,0.5,0.75,1]))
OrientationInterpolator21.setKeyValue(x3d.doubleToFloat([1,0,0,-0.523599,0.99999,0.003554,0.002727,-1.309007,0,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.60876,-3.135645,1,-0.000001,0,-0.523599]))

Scene14.addChild(OrientationInterpolator21)
ROUTE22 = x3d.ROUTE()
ROUTE22.setFromField("fraction_changed")
ROUTE22.setFromNode("TIMER")
ROUTE22.setToField("set_fraction")
ROUTE22.setToNode("Camera001-POS-INTERP")

Scene14.addChild(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.setFromField("value_changed")
ROUTE23.setFromNode("Camera001-POS-INTERP")
ROUTE23.setToField("set_position")
ROUTE23.setToNode("Camera001")

Scene14.addChild(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.setFromField("fraction_changed")
ROUTE24.setFromNode("TIMER")
ROUTE24.setToField("set_fraction")
ROUTE24.setToNode("Camera001-ROT-INTERP")

Scene14.addChild(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.setFromField("value_changed")
ROUTE25.setFromNode("Camera001-ROT-INTERP")
ROUTE25.setToField("set_orientation")
ROUTE25.setToNode("Camera001")

Scene14.addChild(ROUTE25)
Transform26 = x3d.Transform()
Transform26.setDEF("Floor")
Transform26.setTranslation(x3d.doubleToFloat([1.241,0,0.358]))
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Appearance28.setDEF("WireColor")
Material29 = x3d.Material()
Material29.setDiffuseColor(x3d.doubleToFloat([0.122,0.114,0.125]))

Appearance28.setMaterial(Material29)

Shape27.setAppearance(Appearance28)
Box30 = x3d.Box()
Box30.setSize(x3d.doubleToFloat([2000,1,2000]))

Shape27.setGeometry(Box30)

Transform26.addChild(Shape27)

Scene14.addChild(Transform26)
Transform31 = x3d.Transform()
Transform31.setDEF("TransformAudio1")
Transform31.setTranslation(x3d.doubleToFloat([-933.123474,0,-926.253235]))
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Appearance33.setDEF("WireColor_1")
Material34 = x3d.Material()
Material34.setDiffuseColor(x3d.doubleToFloat([0.690196,0.101961,0.101961]))

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Sphere35 = x3d.Sphere()
Sphere35.setRadius(100)

Shape32.setGeometry(Sphere35)

Transform31.addChild(Shape32)
Billboard36 = x3d.Billboard()
Transform37 = x3d.Transform()
Transform37.setDEF("violin")
Transform37.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform37.setScale(x3d.doubleToFloat([100,100,100]))
Transform37.setTranslation(x3d.doubleToFloat([0,100,0]))
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.setAmbientIntensity(0.0933)
Material40.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material40.setShininess(0.51)
Material40.setSpecularColor(x3d.doubleToFloat([0.46,0.46,0.46]))

Appearance39.setMaterial(Material40)

Shape38.setAppearance(Appearance39)
Text41 = x3d.Text()
Text41.setString(["Violin"])
FontStyle42 = x3d.FontStyle()
FontStyle42.setDEF("ModelFontStyle")
FontStyle42.setFamily(["Times","SERIF"])
FontStyle42.setStyle("BOLD")

Text41.setFontStyle(FontStyle42)

Shape38.setGeometry(Text41)

Transform37.addChild(Shape38)

Billboard36.addChild(Transform37)

Transform31.addChild(Billboard36)

Scene14.addChild(Transform31)
Transform43 = x3d.Transform()
Transform43.setDEF("TransformAudio2")
Transform43.setTranslation(x3d.doubleToFloat([933.475586,0,924.423218]))
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.setDEF("WireColor_2")
Material46 = x3d.Material()
Material46.setDiffuseColor(x3d.doubleToFloat([0.105882,0.694118,0.580392]))

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
Sphere47 = x3d.Sphere()
Sphere47.setRadius(100)

Shape44.setGeometry(Sphere47)

Transform43.addChild(Shape44)
Billboard48 = x3d.Billboard()
Transform49 = x3d.Transform()
Transform49.setDEF("saxophone")
Transform49.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform49.setScale(x3d.doubleToFloat([100,100,100]))
Transform49.setTranslation(x3d.doubleToFloat([0,100,0]))
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setAmbientIntensity(0.0933)
Material52.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material52.setShininess(0.51)
Material52.setSpecularColor(x3d.doubleToFloat([0.46,0.46,0.46]))

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Text53 = x3d.Text()
Text53.setString(["Saxophone"])
FontStyle54 = x3d.FontStyle()
FontStyle54.setUSE("ModelFontStyle")

Text53.setFontStyle(FontStyle54)

Shape50.setGeometry(Text53)

Transform49.addChild(Shape50)

Billboard48.addChild(Transform49)

Transform43.addChild(Billboard48)

Scene14.addChild(Transform43)
ListenerPointSource55 = x3d.ListenerPointSource()
ListenerPointSource55.setTrackCurrentView(True)

Scene14.addChild(ListenerPointSource55)
StreamAudioDestination56 = x3d.StreamAudioDestination()
SpatialSound57 = x3d.SpatialSound()
SpatialSound57.setDEF("Audio1")
Gain58 = x3d.Gain()
AudioClip59 = x3d.AudioClip()
AudioClip59.setDescription("Violin")
AudioClip59.setLoop(True)
AudioClip59.setUrl(["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])

Gain58.addChild(AudioClip59)

SpatialSound57.addChild(Gain58)

StreamAudioDestination56.addChild(SpatialSound57)
SpatialSound60 = x3d.SpatialSound()
SpatialSound60.setDEF("Audio2")
Gain61 = x3d.Gain()
AudioClip62 = x3d.AudioClip()
AudioClip62.setDescription("Saxophone")
AudioClip62.setLoop(True)
AudioClip62.setUrl(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Gain61.addChild(AudioClip62)

SpatialSound60.addChild(Gain61)

StreamAudioDestination56.addChild(SpatialSound60)

Scene14.addChild(StreamAudioDestination56)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/SpatialAudioCameraAnimation.new.graalpy.x3d")
X3D0.toFileJSON("../data/SpatialAudioCameraAnimation.new.graalpy.x3dj")
