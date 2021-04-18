import x3dpsail as x3d
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
meta7.setContent("28 October 2020")

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
meta10.setContent("http://www.medialab.teicrete.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d")

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

Scene14.addChildren(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setDEF("NAV")
NavigationInfo16.setType(["NONE"])

Scene14.addChildren(NavigationInfo16)
Background17 = x3d.Background()
Background17.setSkyColor([0.2,0.2,0.21])

Scene14.addChildren(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setOrientation([1,0,0,-0.5])
Viewpoint18.setPosition([0,500,600])
Viewpoint18.setRetainUserOffsets(True)

Scene14.addChildren(Viewpoint18)
Transform19 = x3d.Transform()
Transform19.setDEF("PowerR")
Transform19.setTranslation([100,400,400])
Transform20 = x3d.Transform()
Transform20.setDEF("pR")
Transform20.setRotation([1,0,0,-0.5])
Transform20.setTranslation([0,40,0])
Shape21 = x3d.Shape()
Appearance22 = x3d.Appearance()
Appearance22.setDEF("audio_emit1")
Material23 = x3d.Material()
Material23.setDiffuseColor([0,1,0])
Material23.setEmissiveColor([0.8,0.8,0.8])
Material23.setSpecularColor([0.01,0.01,0.01])

Appearance22.setMaterial(Material23)

Shape21.setAppearance(Appearance22)
Box24 = x3d.Box()
Box24.setSize([10,80,0.01])

Shape21.setGeometry(Box24)

Transform20.addChildren(Shape21)

Transform19.addChildren(Transform20)
Transform25 = x3d.Transform()
Transform25.setRotation([1,0,0,-0.5])
Transform25.setTranslation([-2.7,37,0])
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Appearance27.setDEF("audio_emit2")
Material28 = x3d.Material()
Material28.setDiffuseColor([0,1,0])
Material28.setEmissiveColor([0.8,0.8,0.8])
Material28.setSpecularColor([0.01,0.01,0.01])

Appearance27.setMaterial(Material28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["images/line.png"])

Appearance27.setTexture(ImageTexture29)

Shape26.setAppearance(Appearance27)
Box30 = x3d.Box()
Box30.setSize([25,83,0.01])

Shape26.setGeometry(Box30)

Transform25.addChildren(Shape26)

Transform19.addChildren(Transform25)
Transform31 = x3d.Transform()
Transform31.setDEF("volumeRight")
Transform31.setRotation([1,0,0,-0.5])
Transform31.setScale([10,10,10])
Transform31.setTranslation([0,-10,0])
Shape32 = x3d.Shape()
Appearance33 = x3d.Appearance()
Material34 = x3d.Material()
Material34.setDiffuseColor([0.345,0.345,0.882])

Appearance33.setMaterial(Material34)
Material35 = x3d.Material()
Material35.setAmbientIntensity(0.0933)
Material35.setDiffuseColor([1,1,1])
Material35.setShininess(0.51)
Material35.setSpecularColor([0.46,0.46,0.46])

Appearance33.setMaterial(Material35)

Shape32.setAppearance(Appearance33)
Text36 = x3d.Text()
Text36.setString(["Right Channel Volume"])
FontStyle37 = x3d.FontStyle()
FontStyle37.setFamily(["Times"])
FontStyle37.setStyle("BOLD")

Text36.setFontStyle(FontStyle37)

Shape32.setGeometry(Text36)

Transform31.addChildren(Shape32)

Transform19.addChildren(Transform31)

Scene14.addChildren(Transform19)
Transform38 = x3d.Transform()
Transform38.setDEF("PowerL")
Transform38.setTranslation([-100,400,400])
Transform39 = x3d.Transform()
Transform39.setDEF("pL")
Transform39.setRotation([1,0,0,-0.5])
Transform39.setTranslation([0,40,0])
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
Appearance41.setDEF("audio_emit3")
Material42 = x3d.Material()
Material42.setDiffuseColor([0,1,0])
Material42.setEmissiveColor([0.8,0.8,0.8])
Material42.setSpecularColor([0.01,0.01,0.01])

Appearance41.setMaterial(Material42)

Shape40.setAppearance(Appearance41)
Box43 = x3d.Box()
Box43.setSize([10,80,0.01])

Shape40.setGeometry(Box43)

Transform39.addChildren(Shape40)

Transform38.addChildren(Transform39)
Transform44 = x3d.Transform()
Transform44.setRotation([1,0,0,-0.5])
Transform44.setTranslation([13.2,37,0])
Shape45 = x3d.Shape()
Appearance46 = x3d.Appearance()
Appearance46.setDEF("audio_emit4")
Material47 = x3d.Material()
Material47.setDiffuseColor([0,1,0])
Material47.setEmissiveColor([0.8,0.8,0.8])
Material47.setSpecularColor([0.01,0.01,0.01])

Appearance46.setMaterial(Material47)
ImageTexture48 = x3d.ImageTexture()
ImageTexture48.setUrl(["images/line.png"])

Appearance46.setTexture(ImageTexture48)

Shape45.setAppearance(Appearance46)
Box49 = x3d.Box()
Box49.setSize([25,83,0.01])

Shape45.setGeometry(Box49)

Transform44.addChildren(Shape45)

Transform38.addChildren(Transform44)
Transform50 = x3d.Transform()
Transform50.setDEF("volumeLeft")
Transform50.setRotation([1,0,0,-0.5])
Transform50.setScale([10,10,10])
Transform50.setTranslation([0,-10,0])
Shape51 = x3d.Shape()
Appearance52 = x3d.Appearance()
Material53 = x3d.Material()
Material53.setDiffuseColor([0.345,0.345,0.882])

Appearance52.setMaterial(Material53)
Material54 = x3d.Material()
Material54.setAmbientIntensity(0.0933)
Material54.setDiffuseColor([1,1,1])
Material54.setShininess(0.51)
Material54.setSpecularColor([0.46,0.46,0.46])

Appearance52.setMaterial(Material54)

Shape51.setAppearance(Appearance52)
Text55 = x3d.Text()
Text55.setString(["Left Channel Volume"])
FontStyle56 = x3d.FontStyle()
FontStyle56.setFamily(["Times"])
FontStyle56.setStyle("BOLD")

Text55.setFontStyle(FontStyle56)

Shape51.setGeometry(Text55)

Transform50.addChildren(Shape51)

Transform38.addChildren(Transform50)

Scene14.addChildren(Transform38)
Transform57 = x3d.Transform()
Transform57.setDEF("Audio3")
Transform57.setRotation([1,0,0,-0.5])
Transform57.setTranslation([0,100,0])
Shape58 = x3d.Shape()
Appearance59 = x3d.Appearance()
Appearance59.setDEF("audio_emit5")
Material60 = x3d.Material()
Material60.setDiffuseColor([0.3,1,0.3])
Material60.setEmissiveColor([0.8,0.8,0.8])
Material60.setSpecularColor([0.01,0.01,0.01])

Appearance59.setMaterial(Material60)
ImageTexture61 = x3d.ImageTexture()
ImageTexture61.setUrl(["images/loudspeaker.png"])

Appearance59.setTexture(ImageTexture61)

Shape58.setAppearance(Appearance59)
Box62 = x3d.Box()
Box62.setSize([100,100,0.001])

Shape58.setGeometry(Box62)

Transform57.addChildren(Shape58)

Scene14.addChildren(Transform57)
Transform63 = x3d.Transform()
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Appearance65.setDEF("floor")
Material66 = x3d.Material()
Material66.setDiffuseColor([0.1,0.1,0.1])
Material66.setShininess(0.8)
Material66.setSpecularColor([0.5,0.6,0.7])

Appearance65.setMaterial(Material66)

Shape64.setAppearance(Appearance65)
Box67 = x3d.Box()
Box67.setSize([1500,10,500])

Shape64.setGeometry(Box67)

Transform63.addChildren(Shape64)

Scene14.addChildren(Transform63)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/SplitChannels_RoundTrip.x3d")
