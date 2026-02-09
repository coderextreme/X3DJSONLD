print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
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
meta7.content = "Mon, 09 Feb 2026 07:13:12 GMT"

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

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "SplitChannels.x3d"

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()
NavigationInfo14.type = ["NONE"]

Scene12.children.append(NavigationInfo14)
Background15 = x3d.Background()
Background15.skyColor = [(0.2, 0.2, 0.21)]

Scene12.children.append(Background15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.position = [0,500,600]
Viewpoint16.orientation = [1,0,0,-0.5]
Viewpoint16.retainUserOffsets = True

Scene12.children.append(Viewpoint16)
Transform17 = x3d.Transform(DEF="PowerR")
Transform17.translation = [100,400,400]
Transform18 = x3d.Transform()
Transform18.translation = [0,40,0]
Transform18.rotation = [1,0,0,-0.5]
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance(DEF="audio_emit")
Material21 = x3d.Material()
Material21.diffuseColor = [0,1,0]
Material21.specularColor = [0.01,0.01,0.01]
Material21.emissiveColor = [0.8,0.8,0.8]

Appearance20.material = Material21

Shape19.appearance = Appearance20
Box22 = x3d.Box()
Box22.size = [10,80,0.01]

Shape19.geometry = Box22

Transform18.children.append(Shape19)

Transform17.children.append(Transform18)
Transform23 = x3d.Transform()
Transform23.translation = [-2.7,37,0]
Transform23.rotation = [1,0,0,-0.5]
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance(DEF="audio_emit2")
Material26 = x3d.Material()
Material26.diffuseColor = [0,1,0]
Material26.specularColor = [0.01,0.01,0.01]
Material26.emissiveColor = [0.8,0.8,0.8]

Appearance25.material = Material26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]

Appearance25.texture = ImageTexture27

Shape24.appearance = Appearance25
Box28 = x3d.Box()
Box28.size = [25,83,0.01]

Shape24.geometry = Box28

Transform23.children.append(Shape24)

Transform17.children.append(Transform23)
Transform29 = x3d.Transform(DEF="volumeRight")
Transform29.translation = [0,-10,0]
Transform29.rotation = [1,0,0,-0.5]
Transform29.scale = [10,10,10]
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
Material32 = x3d.Material()
Material32.ambientIntensity = 0.0933
Material32.diffuseColor = [0.345,0.345,0.882]
Material32.specularColor = [0.46,0.46,0.46]
Material32.shininess = 0.51

Appearance31.material = Material32

Shape30.appearance = Appearance31
Text33 = x3d.Text()
Text33.string = ["Right Channel Volume"]
FontStyle34 = x3d.FontStyle(DEF="VolumeFontStyle")
FontStyle34.family = ["Times","SERIF"]
FontStyle34.style = "BOLD"

Text33.fontStyle = FontStyle34

Shape30.geometry = Text33

Transform29.children.append(Shape30)

Transform17.children.append(Transform29)

Scene12.children.append(Transform17)
Transform35 = x3d.Transform(DEF="PowerL")
Transform35.translation = [-100,400,400]
Transform36 = x3d.Transform()
Transform36.translation = [0,40,0]
Transform36.rotation = [1,0,0,-0.5]
Shape37 = x3d.Shape()
Appearance38 = x3d.Appearance(DEF="audio_emit3")
Material39 = x3d.Material()
Material39.diffuseColor = [0,1,0]
Material39.specularColor = [0.01,0.01,0.01]
Material39.emissiveColor = [0.8,0.8,0.8]

Appearance38.material = Material39

Shape37.appearance = Appearance38
Box40 = x3d.Box()
Box40.size = [10,80,0.01]

Shape37.geometry = Box40

Transform36.children.append(Shape37)

Transform35.children.append(Transform36)
Transform41 = x3d.Transform()
Transform41.translation = [13.2,37,0]
Transform41.rotation = [1,0,0,-0.5]
Shape42 = x3d.Shape()
Appearance43 = x3d.Appearance(DEF="audio_emit4")
Material44 = x3d.Material()
Material44.diffuseColor = [0,1,0]
Material44.specularColor = [0.01,0.01,0.01]
Material44.emissiveColor = [0.8,0.8,0.8]

Appearance43.material = Material44
ImageTexture45 = x3d.ImageTexture()
ImageTexture45.url = ["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"]

Appearance43.texture = ImageTexture45

Shape42.appearance = Appearance43
Box46 = x3d.Box()
Box46.size = [25,83,0.01]

Shape42.geometry = Box46

Transform41.children.append(Shape42)

Transform35.children.append(Transform41)
Transform47 = x3d.Transform(DEF="volumeLeft")
Transform47.translation = [0,-10,0]
Transform47.rotation = [1,0,0,-0.5]
Transform47.scale = [10,10,10]
Shape48 = x3d.Shape()
Appearance49 = x3d.Appearance()
Material50 = x3d.Material()
Material50.ambientIntensity = 0.0933
Material50.diffuseColor = [0.345,0.345,0.882]
Material50.specularColor = [0.46,0.46,0.46]
Material50.shininess = 0.51

Appearance49.material = Material50

Shape48.appearance = Appearance49
Text51 = x3d.Text()
Text51.string = ["Left Channel Volume"]
FontStyle52 = x3d.FontStyle(USE="VolumeFontStyle")

Text51.fontStyle = FontStyle52

Shape48.geometry = Text51

Transform47.children.append(Shape48)

Transform35.children.append(Transform47)

Scene12.children.append(Transform35)
Transform53 = x3d.Transform()
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance(DEF="floor")
Material56 = x3d.Material()
Material56.diffuseColor = [0.1,0.1,0.1]
Material56.specularColor = [0.5,0.6,0.7]
Material56.shininess = 0.8

Appearance55.material = Material56

Shape54.appearance = Appearance55
Box57 = x3d.Box()
Box57.size = [1500,10,500]

Shape54.geometry = Box57

Transform53.children.append(Shape54)

Scene12.children.append(Transform53)
ListenerPointSource58 = x3d.ListenerPointSource()
ListenerPointSource58.trackCurrentView = True

Scene12.children.append(ListenerPointSource58)
StreamAudioDestination59 = x3d.StreamAudioDestination()
Gain60 = x3d.Gain()
ChannelMerger61 = x3d.ChannelMerger()
ChannelSelector62 = x3d.ChannelSelector()
ChannelSplitter63 = x3d.ChannelSplitter(DEF="ChannelSplitter")
ChannelSplitter63.channelCountMode = "EXPLICIT"
AudioClip64 = x3d.AudioClip()
AudioClip64.description = "Violin"
AudioClip64.url = ["sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"]

ChannelSplitter63.outputs.append(AudioClip64)

ChannelSelector62.children.append(ChannelSplitter63)

ChannelMerger61.children.append(ChannelSelector62)
ChannelSelector65 = x3d.ChannelSelector()
ChannelSelector65.channelSelection = 1
ChannelSplitter66 = x3d.ChannelSplitter(USE="ChannelSplitter")

ChannelSelector65.children.append(ChannelSplitter66)

ChannelMerger61.children.append(ChannelSelector65)

Gain60.children.append(ChannelMerger61)

StreamAudioDestination59.children.append(Gain60)

Scene12.children.append(StreamAudioDestination59)
ChannelSplitter67 = x3d.ChannelSplitter(USE="ChannelSplitter")

Scene12.children.append(ChannelSplitter67)
Transform68 = x3d.Transform(DEF="Audio3")
Transform68.translation = [0,100,0]
Transform68.rotation = [1,0,0,-0.5]
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance(DEF="audio_emit5")
Material71 = x3d.Material()
Material71.diffuseColor = [0.3,1,0.3]
Material71.specularColor = [0.01,0.01,0.01]
Material71.emissiveColor = [0.8,0.8,0.8]

Appearance70.material = Material71
ImageTexture72 = x3d.ImageTexture()
ImageTexture72.url = ["images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"]

Appearance70.texture = ImageTexture72

Shape69.appearance = Appearance70
Box73 = x3d.Box()
Box73.size = [100,100,0.001]

Shape69.geometry = Box73

Transform68.children.append(Shape69)

Scene12.children.append(Transform68)

X3D0.Scene = Scene12
f = open("../data/SplitChannels.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/SplitChannels.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/SplitChannels.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
