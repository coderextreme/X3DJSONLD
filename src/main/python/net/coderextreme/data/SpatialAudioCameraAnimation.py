print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "SpatialAudioCameraAnimation.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "info"
meta4.content = "This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "28 October 2020"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "modified"
meta7.content = "5 December 2021"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "reference"
meta8.content = "CHANGELOG.txt"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "TODO"
meta9.content = "credit for audio files"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.medialab.hmu.gr/minipages/x3domAudio"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "license"
meta13.content = "../license.html"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "SpatialAudioCameraAnimation.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()

Scene14.children.append(NavigationInfo16)
Background17 = x3d.Background()
Background17.backUrl = ["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]
Background17.bottomUrl = ["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]
Background17.frontUrl = ["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]
Background17.leftUrl = ["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]
Background17.rightUrl = ["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]
Background17.topUrl = ["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]

Scene14.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.DEF = "Camera001"
Viewpoint18.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"
Viewpoint18.orientation = [1,0,0,-0.523599]
Viewpoint18.position = [0,2000,3500]

Scene14.children.append(Viewpoint18)
TimeSensor19 = x3d.TimeSensor()
TimeSensor19.DEF = "TIMER"
TimeSensor19.cycleInterval = 33.333332
TimeSensor19.loop = True

Scene14.children.append(TimeSensor19)
PositionInterpolator20 = x3d.PositionInterpolator()
PositionInterpolator20.DEF = "Camera001-POS-INTERP"
PositionInterpolator20.key = [0,0.25,0.5,0.75,1]

Scene14.children.append(PositionInterpolator20)
OrientationInterpolator21 = x3d.OrientationInterpolator()
OrientationInterpolator21.DEF = "Camera001-ROT-INTERP"
OrientationInterpolator21.key = [0,0.25,0.5,0.75,1]

Scene14.children.append(OrientationInterpolator21)
ROUTE22 = x3d.ROUTE()
ROUTE22.fromField = "fraction_changed"
ROUTE22.fromNode = "TIMER"
ROUTE22.toField = "set_fraction"
ROUTE22.toNode = "Camera001-POS-INTERP"

Scene14.children.append(ROUTE22)
ROUTE23 = x3d.ROUTE()
ROUTE23.fromField = "value_changed"
ROUTE23.fromNode = "Camera001-POS-INTERP"
ROUTE23.toField = "set_position"
ROUTE23.toNode = "Camera001"

Scene14.children.append(ROUTE23)
ROUTE24 = x3d.ROUTE()
ROUTE24.fromField = "fraction_changed"
ROUTE24.fromNode = "TIMER"
ROUTE24.toField = "set_fraction"
ROUTE24.toNode = "Camera001-ROT-INTERP"

Scene14.children.append(ROUTE24)
ROUTE25 = x3d.ROUTE()
ROUTE25.fromField = "value_changed"
ROUTE25.fromNode = "Camera001-ROT-INTERP"
ROUTE25.toField = "set_orientation"
ROUTE25.toNode = "Camera001"

Scene14.children.append(ROUTE25)
Transform26 = x3d.Transform()
Transform26.DEF = "Floor"
Transform26.translation = [1.241,0,0.358]
Shape27 = x3d.Shape()
Appearance28 = x3d.Appearance()
Appearance28.DEF = "WireColor"
Material29 = x3d.Material()
Material29.diffuseColor = [0.122,0.114,0.125]

Appearance28.material = Material29

Shape27.appearance = Appearance28
Box30 = x3d.Box()
Box30.size = [2000,1,2000]

Shape27.geometry = Box30

Transform26.children.append(Shape27)

Scene14.children.append(Transform26)
Transform31 = x3d.Transform()
Transform31.DEF = "TransformAudio1"
Transform31.translation = [-933.123474,0,-926.253235]
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Appearance33.DEF = "WireColor_1"
Material34 = x3d.Material()
Material34.diffuseColor = [0.690196,0.101961,0.101961]

Appearance33.material = Material34

Shape32.appearance = Appearance33
Sphere35 = x3d.Sphere()
Sphere35.radius = 100

Shape32.geometry = Sphere35

Transform31.children.append(Shape32)
Billboard36 = x3d.Billboard()
Transform37 = x3d.Transform()
Transform37.DEF = "violin"
Transform37.rotation = [1,0,0,-0.5]
Transform37.scale = [100,100,100]
Transform37.translation = [0,100,0]
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance()
Material40 = x3d.Material()
Material40.ambientIntensity = 0.0933
Material40.diffuseColor = [1,1,1]
Material40.shininess = 0.51
Material40.specularColor = [0.46,0.46,0.46]

Appearance39.material = Material40

Shape38.appearance = Appearance39
Text41 = x3d.Text()
Text41.string = ["Violin"]
FontStyle42 = x3d.FontStyle()
FontStyle42.DEF = "ModelFontStyle"
FontStyle42.family = ["Times","SERIF"]
FontStyle42.style = "BOLD"

Text41.fontStyle = FontStyle42

Shape38.geometry = Text41

Transform37.children.append(Shape38)

Billboard36.children.append(Transform37)

Transform31.children.append(Billboard36)

Scene14.children.append(Transform31)
Transform43 = x3d.Transform()
Transform43.DEF = "TransformAudio2"
Transform43.translation = [933.475586,0,924.423218]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.DEF = "WireColor_2"
Material46 = x3d.Material()
Material46.diffuseColor = [0.105882,0.694118,0.580392]

Appearance45.material = Material46

Shape44.appearance = Appearance45
Sphere47 = x3d.Sphere()
Sphere47.radius = 100

Shape44.geometry = Sphere47

Transform43.children.append(Shape44)
Billboard48 = x3d.Billboard()
Transform49 = x3d.Transform()
Transform49.DEF = "saxophone"
Transform49.rotation = [1,0,0,-0.5]
Transform49.scale = [100,100,100]
Transform49.translation = [0,100,0]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.ambientIntensity = 0.0933
Material52.diffuseColor = [1,1,1]
Material52.shininess = 0.51
Material52.specularColor = [0.46,0.46,0.46]

Appearance51.material = Material52

Shape50.appearance = Appearance51
Text53 = x3d.Text()
Text53.string = ["Saxophone"]
FontStyle54 = x3d.FontStyle()
FontStyle54.USE = "ModelFontStyle"

Text53.fontStyle = FontStyle54

Shape50.geometry = Text53

Transform49.children.append(Shape50)

Billboard48.children.append(Transform49)

Transform43.children.append(Billboard48)

Scene14.children.append(Transform43)
ListenerPointSource55 = x3d.ListenerPointSource()
ListenerPointSource55.trackCurrentView = True

Scene14.children.append(ListenerPointSource55)
StreamAudioDestination56 = x3d.StreamAudioDestination()
SpatialSound57 = x3d.SpatialSound()
SpatialSound57.DEF = "Audio1"
Gain58 = x3d.Gain()
AudioClip59 = x3d.AudioClip()
AudioClip59.description = "Violin"
AudioClip59.loop = True
AudioClip59.url = ["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]

Gain58.children.append(AudioClip59)

SpatialSound57.children.append(Gain58)

StreamAudioDestination56.children.append(SpatialSound57)
SpatialSound60 = x3d.SpatialSound()
SpatialSound60.DEF = "Audio2"
Gain61 = x3d.Gain()
AudioClip62 = x3d.AudioClip()
AudioClip62.description = "Saxophone"
AudioClip62.loop = True
AudioClip62.url = ["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]

Gain61.children.append(AudioClip62)

SpatialSound60.children.append(Gain61)

StreamAudioDestination56.children.append(SpatialSound60)

Scene14.children.append(StreamAudioDestination56)

X3D0.Scene = Scene14
f = open("../data/SpatialAudioCameraAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SpatialAudioCameraAnimation.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
