from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("AllAudioGraphNodesTest.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("created")
meta5.setContent("25 October 2020")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("modified")
meta6.setContent("4 August 2021")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("warning")
meta7.setContent("Developmental test, no actual 3D model expected")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("identifier")
meta8.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("generator")
meta9.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("license")
meta10.setContent("../license.html")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = Scene()
WorldInfo12 = WorldInfo()
WorldInfo12.setTitle("AllAudioGraphNodes.x3d")

Scene11.addChildren(WorldInfo12)
Shape13 = Shape()
Box14 = Box()

Shape13.setGeometry(Box14)
Appearance15 = Appearance()
AcousticProperties16 = AcousticProperties()

Appearance15.setAcousticProperties(AcousticProperties16)
Material17 = Material()

Appearance15.setMaterial(Material17)

Shape13.setAppearance(Appearance15)

Scene11.addChildren(Shape13)
SpatialSound18 = SpatialSound()
SpatialSound18.setDistanceModel("INVERSE")
SpatialSound18.setDopplerEnabled("false")
Analyser19 = Analyser()
Analyser19.setChannelCountMode("MAX")
Analyser19.setChannelInterpretation("SPEAKERS")
AudioDestination20 = AudioDestination()
AudioDestination20.setChannelCountMode("MAX")
AudioDestination20.setChannelInterpretation("SPEAKERS")
BiquadFilter21 = BiquadFilter()
BiquadFilter21.setChannelCountMode("MAX")
BiquadFilter21.setChannelInterpretation("SPEAKERS")
BiquadFilter21.setType("LOWPASS")
ChannelMerger22 = ChannelMerger()
ChannelMerger22.setChannelCountMode("MAX")
ChannelMerger22.setChannelInterpretation("SPEAKERS")
ChannelSelector23 = ChannelSelector()
ChannelSelector23.setChannelCountMode("MAX")
ChannelSelector23.setChannelInterpretation("SPEAKERS")
ChannelSplitter24 = ChannelSplitter()
ChannelSplitter24.setChannelCountMode("MAX")
ChannelSplitter24.setChannelInterpretation("SPEAKERS")
Convolver25 = Convolver()
Convolver25.setChannelCountMode("MAX")
Convolver25.setChannelInterpretation("SPEAKERS")
Delay26 = Delay()
Delay26.setChannelCountMode("MAX")
Delay26.setChannelInterpretation("SPEAKERS")
DynamicsCompressor27 = DynamicsCompressor()
DynamicsCompressor27.setChannelCountMode("MAX")
DynamicsCompressor27.setChannelInterpretation("SPEAKERS")
Gain28 = Gain()
Gain28.setChannelCountMode("MAX")
Gain28.setChannelInterpretation("SPEAKERS")
StreamAudioDestination29 = StreamAudioDestination()
StreamAudioDestination29.setChannelCountMode("MAX")
StreamAudioDestination29.setChannelInterpretation("SPEAKERS")
WaveShaper30 = WaveShaper()
WaveShaper30.setChannelCountMode("MAX")
WaveShaper30.setChannelInterpretation("SPEAKERS")
#The following X3DSoundSourceNode nodes have no audio-graph children
BufferAudioSource31 = BufferAudioSource()
BufferAudioSource31.setChannelCountMode("MAX")
BufferAudioSource31.setChannelInterpretation("SPEAKERS")

WaveShaper30.addChildren(BufferAudioSource31)
ListenerPointSource32 = ListenerPointSource()
ListenerPointSource32.setDopplerEnabled("false")

WaveShaper30.addChildren(ListenerPointSource32)
MicrophoneSource33 = MicrophoneSource()

WaveShaper30.addChildren(MicrophoneSource33)
OscillatorSource34 = OscillatorSource()
OscillatorSource34.setFrequency(440)

WaveShaper30.addChildren(OscillatorSource34)
StreamAudioSource35 = StreamAudioSource()
StreamAudioSource35.setChannelCountMode("MAX")
StreamAudioSource35.setChannelInterpretation("SPEAKERS")

WaveShaper30.addChildren(StreamAudioSource35)

StreamAudioDestination29.addChildren(WaveShaper30)

Gain28.addChildren(StreamAudioDestination29)

DynamicsCompressor27.addChildren(Gain28)

Delay26.addChildren(DynamicsCompressor27)

Convolver25.addChildren(Delay26)

ChannelSplitter24.addOutputs(Convolver25)

ChannelSelector23.addChildren(ChannelSplitter24)

ChannelMerger22.addChildren(ChannelSelector23)

BiquadFilter21.addChildren(ChannelMerger22)

AudioDestination20.addChildren(BiquadFilter21)

Analyser19.addChildren(AudioDestination20)

SpatialSound18.addChildren(Analyser19)

Scene11.addChildren(SpatialSound18)
Sound36 = Sound()
Sound36.setLocation([0,1.6,0])
AudioClip37 = AudioClip()
AudioClip37.setDescription("testing")
AudioClip37.setUrl(["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])

Sound36.setSource(AudioClip37)

Scene11.addChildren(Sound36)
Sound38 = Sound()
Sound38.setLocation([0,1.6,0])
MovieTexture39 = MovieTexture()
MovieTexture39.setDescription("testing")
MovieTexture39.setUrl(["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])

Sound38.setSource(MovieTexture39)

Scene11.addChildren(Sound38)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/AllAudioGraphNodesTest_RoundTrip.x3d")
