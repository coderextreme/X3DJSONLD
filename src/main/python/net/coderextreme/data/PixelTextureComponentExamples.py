# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("PixelTextureComponentExamples.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("25 August 2008")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("7 January 2014")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("X3D for Web Authors, Table 5.18")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("reference")
meta9.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("rights")
meta10.setContent("Copyright (c) 2006, Daly Realism and Don Brutzman")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("subject")
meta11.setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("identifier")
meta12.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta13)
meta14 = metaObject()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)
X3D0.setHead(head1)
Scene15 = SceneObject()

Background16 = BackgroundObject()
Background16.setSkyColor([0.1,0.1,0.4])

Scene15.addChild(Background16)
Viewpoint17 = ViewpointObject()
Viewpoint17.setDescription("Table 5.18 SFImage component examples")
Viewpoint17.setPosition([0,0,14])

Scene15.addChild(Viewpoint17)
Transform18 = TransformObject()
Transform18.setTranslation([-6,0,0])

Shape19 = ShapeObject()

Appearance20 = AppearanceObject()

PixelTexture21 = PixelTextureObject()
PixelTexture21.setDEF("ZeroComponents")

Appearance20.setTexture(PixelTexture21)
Shape19.setAppearance(Appearance20)
Box22 = BoxObject()

Shape19.setGeometry(Box22)
Transform18.addChild(Shape19)
Transform23 = TransformObject()
Transform23.setTranslation([0,-2,0])

Shape24 = ShapeObject()

Text25 = TextObject()
Text25.setString(["0"])

FontStyle26 = FontStyleObject()
FontStyle26.setDEF("CenterJustify")
FontStyle26.setJustify(["MIDDLE","MIDDLE"])

Text25.setFontStyle(FontStyle26)
Shape24.setGeometry(Text25)
Appearance27 = AppearanceObject()
Appearance27.setDEF("TextMaterial")

Material28 = MaterialObject()
Material28.setDiffuseColor([1,1,1])

Appearance27.setMaterial(Material28)
Shape24.setAppearance(Appearance27)
Transform23.addChild(Shape24)
Transform18.addChild(Transform23)
Scene15.addChild(Transform18)
Transform29 = TransformObject()
Transform29.setTranslation([-3,0,0])

Shape30 = ShapeObject()

Appearance31 = AppearanceObject()

PixelTexture32 = PixelTextureObject()
PixelTexture32.setDEF("OneComponent")
PixelTexture32.setImage([1,2,1,255,0])

Appearance31.setTexture(PixelTexture32)
Shape30.setAppearance(Appearance31)
Box33 = BoxObject()

Shape30.setGeometry(Box33)
Transform29.addChild(Shape30)
Transform34 = TransformObject()
Transform34.setTranslation([0,-2,0])

Shape35 = ShapeObject()

Text36 = TextObject()
Text36.setString(["1"])

FontStyle37 = FontStyleObject()
FontStyle37.setUSE("CenterJustify")

Text36.setFontStyle(FontStyle37)
Shape35.setGeometry(Text36)
Appearance38 = AppearanceObject()
Appearance38.setUSE("TextMaterial")

Shape35.setAppearance(Appearance38)
Transform34.addChild(Shape35)
Transform29.addChild(Transform34)
Scene15.addChild(Transform29)
Transform39 = TransformObject()

Shape40 = ShapeObject()

Appearance41 = AppearanceObject()

PixelTexture42 = PixelTextureObject()
PixelTexture42.setDEF("TwoComponents")
PixelTexture42.setImage([2,1,2,52479,8823])

Appearance41.setTexture(PixelTexture42)
Shape40.setAppearance(Appearance41)
Box43 = BoxObject()

Shape40.setGeometry(Box43)
Transform39.addChild(Shape40)
Transform44 = TransformObject()
Transform44.setTranslation([0,-2,0])

Shape45 = ShapeObject()

Text46 = TextObject()
Text46.setString(["2"])

FontStyle47 = FontStyleObject()
FontStyle47.setUSE("CenterJustify")

Text46.setFontStyle(FontStyle47)
Shape45.setGeometry(Text46)
Appearance48 = AppearanceObject()
Appearance48.setUSE("TextMaterial")

Shape45.setAppearance(Appearance48)
Transform44.addChild(Shape45)
Transform39.addChild(Transform44)
Scene15.addChild(Transform39)
Transform49 = TransformObject()
Transform49.setTranslation([3,0,0])

Shape50 = ShapeObject()

Appearance51 = AppearanceObject()


Appearance51.addComments(CommentsBlock("""note 0x000000 = 0"""))
PixelTexture52 = PixelTextureObject()
PixelTexture52.setDEF("ThreeComponents")
PixelTexture52.setImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])

Appearance51.setTexture(PixelTexture52)
Shape50.setAppearance(Appearance51)
Box53 = BoxObject()

Shape50.setGeometry(Box53)
Transform49.addChild(Shape50)
Transform54 = TransformObject()
Transform54.setTranslation([0,-2,0])

Shape55 = ShapeObject()

Text56 = TextObject()
Text56.setString(["3"])

FontStyle57 = FontStyleObject()
FontStyle57.setUSE("CenterJustify")

Text56.setFontStyle(FontStyle57)
Shape55.setGeometry(Text56)
Appearance58 = AppearanceObject()
Appearance58.setUSE("TextMaterial")

Shape55.setAppearance(Appearance58)
Transform54.addChild(Shape55)
Transform49.addChild(Transform54)
Scene15.addChild(Transform49)
Transform59 = TransformObject()
Transform59.setTranslation([6,0,0])

Shape60 = ShapeObject()

Appearance61 = AppearanceObject()


Appearance61.addComments(CommentsBlock("""Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127"""))
PixelTexture62 = PixelTextureObject()
PixelTexture62.setDEF("FourComponents")
PixelTexture62.setImage([3,2,4,-16776961,16711935,65535,-16777089,16711807,65407])

Appearance61.setTexture(PixelTexture62)
Shape60.setAppearance(Appearance61)
Box63 = BoxObject()

Shape60.setGeometry(Box63)
Transform59.addChild(Shape60)
Transform64 = TransformObject()
Transform64.setTranslation([0,-2,0])

Shape65 = ShapeObject()

Text66 = TextObject()
Text66.setString(["4"])

FontStyle67 = FontStyleObject()
FontStyle67.setUSE("CenterJustify")

Text66.setFontStyle(FontStyle67)
Shape65.setGeometry(Text66)
Appearance68 = AppearanceObject()
Appearance68.setUSE("TextMaterial")

Shape65.setAppearance(Appearance68)
Transform64.addChild(Shape65)
Transform59.addChild(Transform64)
Scene15.addChild(Transform59)

Scene15.addComments(CommentsBlock("""Background from PixelTextureBW.x3d"""))
Transform69 = TransformObject()
Transform69.setTranslation([0,6,-2])

Shape70 = ShapeObject()

Appearance71 = AppearanceObject()

PixelTexture72 = PixelTextureObject()
PixelTexture72.setImage([8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204])

Appearance71.setTexture(PixelTexture72)
Shape70.setAppearance(Appearance71)
Box73 = BoxObject()
Box73.setSize([16,16,0.1])

Shape70.setGeometry(Box73)
Transform69.addChild(Shape70)
Scene15.addChild(Transform69)
X3D0.setScene(Scene15)

X3D0.toFileX3D("../data/PixelTextureComponentExamples.new.x3d")
