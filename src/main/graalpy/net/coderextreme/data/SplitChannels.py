import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("SplitChannels.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.")

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
meta7.setContent("23 April 2023")

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
meta10.setContent("http://www.medialab.hmu.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d")

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
WorldInfo15.setTitle("SplitChannels.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["NONE"])

Scene14.addChild(NavigationInfo16)
Background17 = x3d.Background()
Background17.setSkyColor(x3d.doubleToFloat([0.2,0.2,0.21]))

Scene14.addChild(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setOrientation(x3d.doubleToFloat([1,0,0,-0.5]))
Viewpoint18.setPosition(x3d.doubleToFloat([0,500,600]))
Viewpoint18.setRetainUserOffsets(True)

Scene14.addChild(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.setDEF("PowerR")
Transform19.setTranslation(x3d.doubleToFloat([100,400,400]))
Transform20 = x3d.Transform()
Transform20.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform20.setTranslation(x3d.doubleToFloat([0,40,0]))
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Appearance22.setDEF("audio_emit")
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material23.setEmissiveColor(x3d.doubleToFloat([0.8,0.8,0.8]))
Material23.setSpecularColor(x3d.doubleToFloat([0.01,0.01,0.01]))

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Box24 = x3d.Box()
Box24.setSize(x3d.doubleToFloat([10,80,0.01]))

Shape21.setGeometry(Box24)

Transform20.addChild(Shape21)

Transform19.addChild(Transform20)
Transform25 = x3d.Transform()
Transform25.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform25.setTranslation(x3d.doubleToFloat([-2.7,37,0]))
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Appearance27.setDEF("audio_emit2")
Material28 = x3d.Material()
Material28.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material28.setEmissiveColor(x3d.doubleToFloat([0.8,0.8,0.8]))
Material28.setSpecularColor(x3d.doubleToFloat([0.01,0.01,0.01]))

Appearance27.setMaterial(Material28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])

Appearance27.setTexture(ImageTexture29)

Shape26.setAppearance(Appearance27)
Box30 = x3d.Box()
Box30.setSize(x3d.doubleToFloat([25,83,0.01]))

Shape26.setGeometry(Box30)

Transform25.addChild(Shape26)

Transform19.addChild(Transform25)
Transform31 = x3d.Transform()
Transform31.setDEF("volumeRight")
Transform31.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform31.setScale(x3d.doubleToFloat([10,10,10]))
Transform31.setTranslation(x3d.doubleToFloat([0,-10,0]))
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setAmbientIntensity(0.0933)
Material34.setDiffuseColor(x3d.doubleToFloat([0.345,0.345,0.882]))
Material34.setShininess(0.51)
Material34.setSpecularColor(x3d.doubleToFloat([0.46,0.46,0.46]))

Appearance33.setMaterial(Material34)

Shape32.setAppearance(Appearance33)
Text35 = x3d.Text()
Text35.setString(["Right Channel Volume"])
FontStyle36 = x3d.FontStyle()
FontStyle36.setDEF("VolumeFontStyle")
FontStyle36.setFamily(["Times","SERIF"])
FontStyle36.setStyle("BOLD")

Text35.setFontStyle(FontStyle36)

Shape32.setGeometry(Text35)

Transform31.addChild(Shape32)

Transform19.addChild(Transform31)

Scene14.addChild(Transform19)
Transform37 = x3d.Transform()
Transform37.setDEF("PowerL")
Transform37.setTranslation(x3d.doubleToFloat([-100,400,400]))
Transform38 = x3d.Transform()
Transform38.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform38.setTranslation(x3d.doubleToFloat([0,40,0]))
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Appearance40.setDEF("audio_emit3")
Material41 = x3d.Material()
Material41.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material41.setEmissiveColor(x3d.doubleToFloat([0.8,0.8,0.8]))
Material41.setSpecularColor(x3d.doubleToFloat([0.01,0.01,0.01]))

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
Box42 = x3d.Box()
Box42.setSize(x3d.doubleToFloat([10,80,0.01]))

Shape39.setGeometry(Box42)

Transform38.addChild(Shape39)

Transform37.addChild(Transform38)
Transform43 = x3d.Transform()
Transform43.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform43.setTranslation(x3d.doubleToFloat([13.2,37,0]))
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Appearance45.setDEF("audio_emit4")
Material46 = x3d.Material()
Material46.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material46.setEmissiveColor(x3d.doubleToFloat([0.8,0.8,0.8]))
Material46.setSpecularColor(x3d.doubleToFloat([0.01,0.01,0.01]))

Appearance45.setMaterial(Material46)
ImageTexture47 = x3d.ImageTexture()
ImageTexture47.setUrl(["images/line.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])

Appearance45.setTexture(ImageTexture47)

Shape44.setAppearance(Appearance45)
Box48 = x3d.Box()
Box48.setSize(x3d.doubleToFloat([25,83,0.01]))

Shape44.setGeometry(Box48)

Transform43.addChild(Shape44)

Transform37.addChild(Transform43)
Transform49 = x3d.Transform()
Transform49.setDEF("volumeLeft")
Transform49.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform49.setScale(x3d.doubleToFloat([10,10,10]))
Transform49.setTranslation(x3d.doubleToFloat([0,-10,0]))
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setAmbientIntensity(0.0933)
Material52.setDiffuseColor(x3d.doubleToFloat([0.345,0.345,0.882]))
Material52.setShininess(0.51)
Material52.setSpecularColor(x3d.doubleToFloat([0.46,0.46,0.46]))

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
Text53 = x3d.Text()
Text53.setString(["Left Channel Volume"])
FontStyle54 = x3d.FontStyle()
FontStyle54.setUSE("VolumeFontStyle")

Text53.setFontStyle(FontStyle54)

Shape50.setGeometry(Text53)

Transform49.addChild(Shape50)

Transform37.addChild(Transform49)

Scene14.addChild(Transform37)
Transform55 = x3d.Transform()
Shape56 = x3d.Shape()
Appearance57 = x3d.Appearance()
Appearance57.setDEF("floor")
Material58 = x3d.Material()
Material58.setDiffuseColor(x3d.doubleToFloat([0.1,0.1,0.1]))
Material58.setShininess(0.8)
Material58.setSpecularColor(x3d.doubleToFloat([0.5,0.6,0.7]))

Appearance57.setMaterial(Material58)

Shape56.setAppearance(Appearance57)
Box59 = x3d.Box()
Box59.setSize(x3d.doubleToFloat([1500,10,500]))

Shape56.setGeometry(Box59)

Transform55.addChild(Shape56)

Scene14.addChild(Transform55)
ListenerPointSource60 = x3d.ListenerPointSource()
ListenerPointSource60.setTrackCurrentView(True)

Scene14.addChild(ListenerPointSource60)
StreamAudioDestination61 = x3d.StreamAudioDestination()
Gain62 = x3d.Gain()
ChannelMerger63 = x3d.ChannelMerger()
ChannelSelector64 = x3d.ChannelSelector()
Gain65 = x3d.Gain()
Gain65.setUSE("ChannelSplitter")

ChannelSelector64.addChild(Gain65)

ChannelMerger63.addChild(ChannelSelector64)
ChannelSelector66 = x3d.ChannelSelector()
ChannelSelector66.setChannelSelection(1)
Gain67 = x3d.Gain()
Gain67.setUSE("ChannelSplitter")

ChannelSelector66.addChild(Gain67)

ChannelMerger63.addChild(ChannelSelector66)

Gain62.addChild(ChannelMerger63)

StreamAudioDestination61.addChild(Gain62)

Scene14.addChild(StreamAudioDestination61)
ChannelSplitter68 = x3d.ChannelSplitter()
ChannelSplitter68.setDEF("ChannelSplitter")
ChannelSplitter68.setChannelCountMode("EXPLICIT")
AudioClip69 = x3d.AudioClip()
AudioClip69.setDescription("Violin")
AudioClip69.setUrl(["sound/violin.mp3","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])

ChannelSplitter68.addOutputs(AudioClip69)

Scene14.addChild(ChannelSplitter68)
Transform70 = x3d.Transform()
Transform70.setDEF("Audio3")
Transform70.setRotation(x3d.doubleToFloat([1,0,0,-0.5]))
Transform70.setTranslation(x3d.doubleToFloat([0,100,0]))
Shape71 = x3d.Shape()
Appearance72 = x3d.Appearance()
Appearance72.setDEF("audio_emit5")
Material73 = x3d.Material()
Material73.setDiffuseColor(x3d.doubleToFloat([0.3,1,0.3]))
Material73.setEmissiveColor(x3d.doubleToFloat([0.8,0.8,0.8]))
Material73.setSpecularColor(x3d.doubleToFloat([0.01,0.01,0.01]))

Appearance72.setMaterial(Material73)
ImageTexture74 = x3d.ImageTexture()
ImageTexture74.setUrl(["images/loudspeaker.png","https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"])

Appearance72.setTexture(ImageTexture74)

Shape71.setAppearance(Appearance72)
Box75 = x3d.Box()
Box75.setSize(x3d.doubleToFloat([100,100,0.001]))

Shape71.setGeometry(Box75)

Transform70.addChild(Shape71)

Scene14.addChild(Transform70)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/SplitChannels.new.graalpy.x3d")
X3D0.toFileJSON("../data/SplitChannels.new.graalpy.json")
