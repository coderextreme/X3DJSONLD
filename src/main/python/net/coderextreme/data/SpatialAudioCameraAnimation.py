print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 07:12:59 GMT"

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

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "SpatialAudioCameraAnimation.x3d"

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()

Scene12.children.append(NavigationInfo14)
Background15 = x3d.Background()
Background15.frontUrl = ["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"]
Background15.backUrl = ["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"]
Background15.leftUrl = ["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"]
Background15.rightUrl = ["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"]
Background15.topUrl = ["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]
Background15.bottomUrl = ["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"]

Scene12.children.append(Background15)
Viewpoint16 = x3d.Viewpoint(DEF="Camera001")
Viewpoint16.description = "Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the \"ears of the user\". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view"
Viewpoint16.position = [0,2000,-3367.763]
Viewpoint16.orientation = [0.0000884716566625976,-0.961979599390949,-0.273121296365546,3.14182290693948]

Scene12.children.append(Viewpoint16)
TimeSensor17 = x3d.TimeSensor(DEF="TIMER")
TimeSensor17.cycleInterval = 33.333332
TimeSensor17.loop = True

Scene12.children.append(TimeSensor17)
PositionInterpolator18 = x3d.PositionInterpolator(DEF="Camera001-POS-INTERP")
PositionInterpolator18.key = [0,0.25,0.5,0.75,1]
PositionInterpolator18.keyValue = [(0, 2000, 3500),(0, 2000, 0),(0, 2000, -3500),(0, 2000, 0),(0, 2000, 3500)]

Scene12.children.append(PositionInterpolator18)
OrientationInterpolator19 = x3d.OrientationInterpolator(DEF="Camera001-ROT-INTERP")
OrientationInterpolator19.key = [0,0.25,0.5,0.75,1]
OrientationInterpolator19.keyValue = [(1, 0, 0, -0.523599),(0.99999, 0.003554, 0.002727, -1.309007),(0, -0.965926, -0.258819, -3.141593),(0.002282, -0.793351, -0.60876, -3.135645),(1, -0.000001, 0, -0.523599)]

Scene12.children.append(OrientationInterpolator19)
Transform20 = x3d.Transform(DEF="Floor")
Transform20.translation = [1.241,0,0.358]
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance(DEF="WireColor")
Material23 = x3d.Material()
Material23.diffuseColor = [0.122,0.114,0.125]

Appearance22.material = Material23

Shape21.appearance = Appearance22
Box24 = x3d.Box()
Box24.size = [2000,1,2000]

Shape21.geometry = Box24

Transform20.children.append(Shape21)

Scene12.children.append(Transform20)
Transform25 = x3d.Transform(DEF="TransformAudio1")
Transform25.translation = [-933.1235,0,-926.2532]
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance(DEF="WireColor_1")
Material28 = x3d.Material()
Material28.diffuseColor = [0.690196,0.101961,0.101961]

Appearance27.material = Material28

Shape26.appearance = Appearance27
Sphere29 = x3d.Sphere()
Sphere29.radius = 100

Shape26.geometry = Sphere29

Transform25.children.append(Shape26)
Billboard30 = x3d.Billboard()
Transform31 = x3d.Transform(DEF="violin")
Transform31.translation = [0,100,0]
Transform31.rotation = [1,0,0,-0.5]
Transform31.scale = [100,100,100]
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.ambientIntensity = 0.0933
Material34.diffuseColor = [1,1,1]
Material34.specularColor = [0.46,0.46,0.46]
Material34.shininess = 0.51

Appearance33.material = Material34

Shape32.appearance = Appearance33
Text35 = x3d.Text()
Text35.string = ["Violin"]
FontStyle36 = x3d.FontStyle(DEF="ModelFontStyle")
FontStyle36.family = ["Times","SERIF"]
FontStyle36.style = "BOLD"

Text35.fontStyle = FontStyle36

Shape32.geometry = Text35

Transform31.children.append(Shape32)

Billboard30.children.append(Transform31)

Transform25.children.append(Billboard30)

Scene12.children.append(Transform25)
Transform37 = x3d.Transform(DEF="TransformAudio2")
Transform37.translation = [933.4756,0,924.4232]
Shape38 = x3d.Shape()
Appearance39 = x3d.Appearance(DEF="WireColor_2")
Material40 = x3d.Material()
Material40.diffuseColor = [0.105882,0.694118,0.580392]

Appearance39.material = Material40

Shape38.appearance = Appearance39
Sphere41 = x3d.Sphere()
Sphere41.radius = 100

Shape38.geometry = Sphere41

Transform37.children.append(Shape38)
Billboard42 = x3d.Billboard()
Transform43 = x3d.Transform(DEF="saxophone")
Transform43.translation = [0,100,0]
Transform43.rotation = [1,0,0,-0.5]
Transform43.scale = [100,100,100]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.ambientIntensity = 0.0933
Material46.diffuseColor = [1,1,1]
Material46.specularColor = [0.46,0.46,0.46]
Material46.shininess = 0.51

Appearance45.material = Material46

Shape44.appearance = Appearance45
Text47 = x3d.Text()
Text47.string = ["Saxophone"]
FontStyle48 = x3d.FontStyle(USE="ModelFontStyle")

Text47.fontStyle = FontStyle48

Shape44.geometry = Text47

Transform43.children.append(Shape44)

Billboard42.children.append(Transform43)

Transform37.children.append(Billboard42)

Scene12.children.append(Transform37)
ListenerPointSource49 = x3d.ListenerPointSource()
ListenerPointSource49.trackCurrentView = True

Scene12.children.append(ListenerPointSource49)
StreamAudioDestination50 = x3d.StreamAudioDestination()
SpatialSound51 = x3d.SpatialSound(DEF="Audio1")
Gain52 = x3d.Gain()
AudioClip53 = x3d.AudioClip()
AudioClip53.description = "Violin"
AudioClip53.url = ["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]
AudioClip53.loop = True

Gain52.children.append(AudioClip53)

SpatialSound51.children.append(Gain52)

StreamAudioDestination50.children.append(SpatialSound51)
SpatialSound54 = x3d.SpatialSound(DEF="Audio2")
Gain55 = x3d.Gain()
AudioClip56 = x3d.AudioClip()
AudioClip56.description = "Saxophone"
AudioClip56.url = ["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"]
AudioClip56.loop = True

Gain55.children.append(AudioClip56)

SpatialSound54.children.append(Gain55)

StreamAudioDestination50.children.append(SpatialSound54)

Scene12.children.append(StreamAudioDestination50)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "TIMER"
ROUTE57.fromField = "fraction_changed"
ROUTE57.toNode = "Camera001-POS-INTERP"
ROUTE57.toField = "set_fraction"

Scene12.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Camera001-POS-INTERP"
ROUTE58.fromField = "value_changed"
ROUTE58.toNode = "Camera001"
ROUTE58.toField = "set_position"

Scene12.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "TIMER"
ROUTE59.fromField = "fraction_changed"
ROUTE59.toNode = "Camera001-ROT-INTERP"
ROUTE59.toField = "set_fraction"

Scene12.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Camera001-ROT-INTERP"
ROUTE60.fromField = "value_changed"
ROUTE60.toNode = "Camera001"
ROUTE60.toField = "set_orientation"

Scene12.children.append(ROUTE60)

X3D0.Scene = Scene12
f = open("../data/SpatialAudioCameraAnimation.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SpatialAudioCameraAnimation.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/SpatialAudioCameraAnimation.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
