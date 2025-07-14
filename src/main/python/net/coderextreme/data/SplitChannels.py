print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "SplitChannels.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."

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
meta7.content = "23 April 2023"

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
meta10.content = "http://www.medialab.hmu.gr/minipages/x3domAudio"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"

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
WorldInfo15.title = "SplitChannels.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.type = ["NONE"]

Scene14.children.append(NavigationInfo16)
Background17 = x3d.Background()

Scene14.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.orientation = [1,0,0,-0.5]
Viewpoint18.position = [0,500,600]
Viewpoint18.retainUserOffsets = True

Scene14.children.append(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.DEF = "PowerR"
Transform19.translation = [100,400,400]
Transform20 = x3d.Transform()
Transform20.rotation = [1,0,0,-0.5]
Transform20.translation = [0,40,0]
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Appearance22.DEF = "audio_emit"
Material23 = x3d.Material()
Material23.diffuseColor = [0,1,0]
Material23.emissiveColor = [0.8,0.8,0.8]
Material23.specularColor = [0.01,0.01,0.01]

Appearance22.material = Material23

Shape21.appearance = Appearance22
Box24 = x3d.Box()
Box24.size = [10,80,0.01]

Shape21.geometry = Box24

Transform20.children.append(Shape21)

Transform19.children.append(Transform20)
Transform25 = x3d.Transform()
Transform25.rotation = [1,0,0,-0.5]
Transform25.translation = [-2.7,37,0]
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Appearance27.DEF = "audio_emit2"
Material28 = x3d.Material()
Material28.diffuseColor = [0,1,0]
Material28.emissiveColor = [0.8,0.8,0.8]
Material28.specularColor = [0.01,0.01,0.01]

Appearance27.material = Material28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]

Appearance27.texture = ImageTexture29

Shape26.appearance = Appearance27
Box30 = x3d.Box()
Box30.size = [25,83,0.01]

Shape26.geometry = Box30

Transform25.children.append(Shape26)

Transform19.children.append(Transform25)
Transform31 = x3d.Transform()
Transform31.DEF = "volumeRight"
Transform31.rotation = [1,0,0,-0.5]
Transform31.scale = [10,10,10]
Transform31.translation = [0,-10,0]
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.ambientIntensity = 0.0933
Material34.diffuseColor = [0.345,0.345,0.882]
Material34.shininess = 0.51
Material34.specularColor = [0.46,0.46,0.46]

Appearance33.material = Material34

Shape32.appearance = Appearance33
Text35 = x3d.Text()
Text35.string = ["Right Channel Volume"]
FontStyle36 = x3d.FontStyle()
FontStyle36.DEF = "VolumeFontStyle"
FontStyle36.family = ["Times","SERIF"]
FontStyle36.style = "BOLD"

Text35.fontStyle = FontStyle36

Shape32.geometry = Text35

Transform31.children.append(Shape32)

Transform19.children.append(Transform31)

Scene14.children.append(Transform19)
Transform37 = x3d.Transform()
Transform37.DEF = "PowerL"
Transform37.translation = [-100,400,400]
Transform38 = x3d.Transform()
Transform38.rotation = [1,0,0,-0.5]
Transform38.translation = [0,40,0]
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.DEF = "audio_emit3"
Material41 = x3d.Material()
Material41.diffuseColor = [0,1,0]
Material41.emissiveColor = [0.8,0.8,0.8]
Material41.specularColor = [0.01,0.01,0.01]

Appearance40.material = Material41

Shape39.appearance = Appearance40
Box42 = x3d.Box()
Box42.size = [10,80,0.01]

Shape39.geometry = Box42

Transform38.children.append(Shape39)

Transform37.children.append(Transform38)
Transform43 = x3d.Transform()
Transform43.rotation = [1,0,0,-0.5]
Transform43.translation = [13.2,37,0]
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.DEF = "audio_emit4"
Material46 = x3d.Material()
Material46.diffuseColor = [0,1,0]
Material46.emissiveColor = [0.8,0.8,0.8]
Material46.specularColor = [0.01,0.01,0.01]

Appearance45.material = Material46
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.url = ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]

Appearance45.texture = ImageTexture47

Shape44.appearance = Appearance45
Box48 = x3d.Box()
Box48.size = [25,83,0.01]

Shape44.geometry = Box48

Transform43.children.append(Shape44)

Transform37.children.append(Transform43)
Transform49 = x3d.Transform()
Transform49.DEF = "volumeLeft"
Transform49.rotation = [1,0,0,-0.5]
Transform49.scale = [10,10,10]
Transform49.translation = [0,-10,0]
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.ambientIntensity = 0.0933
Material52.diffuseColor = [0.345,0.345,0.882]
Material52.shininess = 0.51
Material52.specularColor = [0.46,0.46,0.46]

Appearance51.material = Material52

Shape50.appearance = Appearance51
Text53 = x3d.Text()
Text53.string = ["Left Channel Volume"]
FontStyle54 = x3d.FontStyle()
FontStyle54.USE = "VolumeFontStyle"

Text53.fontStyle = FontStyle54

Shape50.geometry = Text53

Transform49.children.append(Shape50)

Transform37.children.append(Transform49)

Scene14.children.append(Transform37)
Transform55 = x3d.Transform()
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Appearance57.DEF = "floor"
Material58 = x3d.Material()
Material58.diffuseColor = [0.1,0.1,0.1]
Material58.shininess = 0.8
Material58.specularColor = [0.5,0.6,0.7]

Appearance57.material = Material58

Shape56.appearance = Appearance57
Box59 = x3d.Box()
Box59.size = [1500,10,500]

Shape56.geometry = Box59

Transform55.children.append(Shape56)

Scene14.children.append(Transform55)
ListenerPointSource60 = x3d.ListenerPointSource()
ListenerPointSource60.trackCurrentView = True

Scene14.children.append(ListenerPointSource60)
StreamAudioDestination61 = x3d.StreamAudioDestination()
Gain62 = x3d.Gain()
ChannelMerger63 = x3d.ChannelMerger()
ChannelSelector64 = x3d.ChannelSelector()
Gain65 = x3d.Gain()
Gain65.USE = "ChannelSplitter"

ChannelSelector64.children.append(Gain65)

ChannelMerger63.children.append(ChannelSelector64)
ChannelSelector66 = x3d.ChannelSelector()
ChannelSelector66.channelSelection = 1
Gain67 = x3d.Gain()
Gain67.USE = "ChannelSplitter"

ChannelSelector66.children.append(Gain67)

ChannelMerger63.children.append(ChannelSelector66)

Gain62.children.append(ChannelMerger63)

StreamAudioDestination61.children.append(Gain62)

Scene14.children.append(StreamAudioDestination61)
ChannelSplitter68 = x3d.ChannelSplitter()
ChannelSplitter68.DEF = "ChannelSplitter"
ChannelSplitter68.channelCountMode = "EXPLICIT"
AudioClip69 = x3d.AudioClip()
AudioClip69.description = "Violin"
AudioClip69.url = ["sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]

ChannelSplitter68.outputs.append(AudioClip69)

Scene14.children.append(ChannelSplitter68)
Transform70 = x3d.Transform()
Transform70.DEF = "Audio3"
Transform70.rotation = [1,0,0,-0.5]
Transform70.translation = [0,100,0]
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Appearance72.DEF = "audio_emit5"
Material73 = x3d.Material()
Material73.diffuseColor = [0.3,1,0.3]
Material73.emissiveColor = [0.8,0.8,0.8]
Material73.specularColor = [0.01,0.01,0.01]

Appearance72.material = Material73
ImageTexture74 = x3d.ImageTexture()
ImageTexture74.url = ["images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]

Appearance72.texture = ImageTexture74

Shape71.appearance = Appearance72
Box75 = x3d.Box()
Box75.size = [100,100,0.001]

Shape71.geometry = Box75

Transform70.children.append(Shape71)

Scene14.children.append(Transform70)

X3D0.Scene = Scene14
f = open("../data/SplitChannels.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SplitChannels.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
