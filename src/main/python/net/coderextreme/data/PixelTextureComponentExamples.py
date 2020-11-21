import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("PixelTextureComponentExamples.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("25 August 2008")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("7 January 2014")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("X3D for Web Authors, Table 5.18")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("rights")
meta10.setContent("Copyright (c) 2006, Daly Realism and Don Brutzman")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("subject")
meta11.setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("identifier")
meta12.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
Background16 = x3d.Background()
Background16.setSkyColor([0.1,0.1,0.4])

Scene15.addChildren(Background16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Table 5.18 SFImage component examples")
Viewpoint17.setPosition([0,0,14])

Scene15.addChildren(Viewpoint17)
Transform18 = x3d.Transform()
Transform18.setTranslation([-6,0,0])
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
PixelTexture21 = x3d.PixelTexture()
PixelTexture21.setDEF("ZeroComponents")

Appearance20.setTexture(PixelTexture21)

Shape19.setAppearance(Appearance20)
Box22 = x3d.Box()

Shape19.setGeometry(Box22)

Transform18.addChildren(Shape19)
Transform23 = x3d.Transform()
Transform23.setTranslation([0,-2,0])
Shape24 = x3d.Shape()
Text25 = x3d.Text()
Text25.setString(["0"])
FontStyle26 = x3d.FontStyle()
FontStyle26.setDEF("CenterJustify")
FontStyle26.setJustify(["MIDDLE","MIDDLE"])

Text25.setFontStyle(FontStyle26)

Shape24.setGeometry(Text25)
Appearance27 = x3d.Appearance()
Appearance27.setDEF("TextMaterial")
Material28 = x3d.Material()
Material28.setDiffuseColor([1,1,1])

Appearance27.setMaterial(Material28)

Shape24.setAppearance(Appearance27)

Transform23.addChildren(Shape24)

Transform18.addChildren(Transform23)

Scene15.addChildren(Transform18)
Transform29 = x3d.Transform()
Transform29.setTranslation([-3,0,0])
Shape30 = x3d.Shape()
Appearance31 = x3d.Appearance()
PixelTexture32 = x3d.PixelTexture()
PixelTexture32.setDEF("OneComponent")
PixelTexture32.setImage([1,2,1,255,0])

Appearance31.setTexture(PixelTexture32)

Shape30.setAppearance(Appearance31)
Box33 = x3d.Box()

Shape30.setGeometry(Box33)

Transform29.addChildren(Shape30)
Transform34 = x3d.Transform()
Transform34.setTranslation([0,-2,0])
Shape35 = x3d.Shape()
Text36 = x3d.Text()
Text36.setString(["1"])
FontStyle37 = x3d.FontStyle()
FontStyle37.setUSE("CenterJustify")

Text36.setFontStyle(FontStyle37)

Shape35.setGeometry(Text36)
Appearance38 = x3d.Appearance()
Appearance38.setUSE("TextMaterial")

Shape35.setAppearance(Appearance38)

Transform34.addChildren(Shape35)

Transform29.addChildren(Transform34)

Scene15.addChildren(Transform29)
Transform39 = x3d.Transform()
Shape40 = x3d.Shape()
Appearance41 = x3d.Appearance()
PixelTexture42 = x3d.PixelTexture()
PixelTexture42.setDEF("TwoComponents")
PixelTexture42.setImage([2,1,2,52479,8823])

Appearance41.setTexture(PixelTexture42)

Shape40.setAppearance(Appearance41)
Box43 = x3d.Box()

Shape40.setGeometry(Box43)

Transform39.addChildren(Shape40)
Transform44 = x3d.Transform()
Transform44.setTranslation([0,-2,0])
Shape45 = x3d.Shape()
Text46 = x3d.Text()
Text46.setString(["2"])
FontStyle47 = x3d.FontStyle()
FontStyle47.setUSE("CenterJustify")

Text46.setFontStyle(FontStyle47)

Shape45.setGeometry(Text46)
Appearance48 = x3d.Appearance()
Appearance48.setUSE("TextMaterial")

Shape45.setAppearance(Appearance48)

Transform44.addChildren(Shape45)

Transform39.addChildren(Transform44)

Scene15.addChildren(Transform39)
Transform49 = x3d.Transform()
Transform49.setTranslation([3,0,0])
Shape50 = x3d.Shape()
Appearance51 = x3d.Appearance()
#note 0x000000 = 0
PixelTexture52 = x3d.PixelTexture()
PixelTexture52.setDEF("ThreeComponents")
PixelTexture52.setImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])

Appearance51.setTexture(PixelTexture52)

Shape50.setAppearance(Appearance51)
Box53 = x3d.Box()

Shape50.setGeometry(Box53)

Transform49.addChildren(Shape50)
Transform54 = x3d.Transform()
Transform54.setTranslation([0,-2,0])
Shape55 = x3d.Shape()
Text56 = x3d.Text()
Text56.setString(["3"])
FontStyle57 = x3d.FontStyle()
FontStyle57.setUSE("CenterJustify")

Text56.setFontStyle(FontStyle57)

Shape55.setGeometry(Text56)
Appearance58 = x3d.Appearance()
Appearance58.setUSE("TextMaterial")

Shape55.setAppearance(Appearance58)

Transform54.addChildren(Shape55)

Transform49.addChildren(Transform54)

Scene15.addChildren(Transform49)
Transform59 = x3d.Transform()
Transform59.setTranslation([6,0,0])
Shape60 = x3d.Shape()
Appearance61 = x3d.Appearance()
#Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
PixelTexture62 = x3d.PixelTexture()
PixelTexture62.setDEF("FourComponents")
PixelTexture62.setImage([3,2,4,-16776961,16711935,65535,-16777089,16711807,65407])

Appearance61.setTexture(PixelTexture62)

Shape60.setAppearance(Appearance61)
Box63 = x3d.Box()

Shape60.setGeometry(Box63)

Transform59.addChildren(Shape60)
Transform64 = x3d.Transform()
Transform64.setTranslation([0,-2,0])
Shape65 = x3d.Shape()
Text66 = x3d.Text()
Text66.setString(["4"])
FontStyle67 = x3d.FontStyle()
FontStyle67.setUSE("CenterJustify")

Text66.setFontStyle(FontStyle67)

Shape65.setGeometry(Text66)
Appearance68 = x3d.Appearance()
Appearance68.setUSE("TextMaterial")

Shape65.setAppearance(Appearance68)

Transform64.addChildren(Shape65)

Transform59.addChildren(Transform64)

Scene15.addChildren(Transform59)
#Background from PixelTextureBW.x3d
Transform69 = x3d.Transform()
Transform69.setTranslation([0,6,-2])
Shape70 = x3d.Shape()
Appearance71 = x3d.Appearance()
PixelTexture72 = x3d.PixelTexture()
PixelTexture72.setImage([8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204])

Appearance71.setTexture(PixelTexture72)

Shape70.setAppearance(Appearance71)
Box73 = x3d.Box()
Box73.setSize([16,16,0.1])

Shape70.setGeometry(Box73)

Transform69.addChildren(Shape70)

Scene15.addChildren(Transform69)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/PixelTextureComponentExamples_RoundTrip.x3d")
