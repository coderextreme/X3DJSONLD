# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("Table5_18PixelTexture")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("PixelTexture example for Table 5.18")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("18 December 2006")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("2 April 2017")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("reference")
meta8.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("rights")
meta9.setContent("Copyright 2006, Daly Realism and Don Brutzman")

head1.addMeta(meta9)
meta10 = metaObject()
meta10.setName("subject")
meta10.setContent("X3D, PixelTexture")

head1.addMeta(meta10)
meta11 = metaObject()
meta11.setName("identifier")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture")

head1.addMeta(meta11)
meta12 = metaObject()
meta12.setName("generator")
meta12.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = metaObject()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)
X3D0.setHead(head1)
Scene14 = SceneObject()

Background15 = BackgroundObject()
Background15.setSkyColor([0,0,1])

Scene14.addChild(Background15)
Transform16 = TransformObject()
Transform16.setDEF("Checkerboard")
Transform16.setTranslation([0,0,-10])

Shape17 = ShapeObject()

Appearance18 = AppearanceObject()

TextureTransform19 = TextureTransformObject()
TextureTransform19.setScale([500,500])

Appearance18.setTextureTransform(TextureTransform19)
PixelTexture20 = PixelTextureObject()
PixelTexture20.setImage([2,2,3,15119869,16767927,16767927,15119869])

Appearance18.setTexture(PixelTexture20)
Shape17.setAppearance(Appearance18)
Box21 = BoxObject()
Box21.setSize([1000,1000,0.01])

Shape17.setGeometry(Box21)
Transform16.addChild(Shape17)
Scene14.addChild(Transform16)
Viewpoint22 = ViewpointObject()
Viewpoint22.setDescription("View All")
Viewpoint22.setPosition([0,0,20])

Scene14.addChild(Viewpoint22)
Viewpoint23 = ViewpointObject()
Viewpoint23.setDescription("Empty Image")
Viewpoint23.setPosition([0,5,5])

Scene14.addChild(Viewpoint23)
Transform24 = TransformObject()
Transform24.setDEF("EmptyImage")
Transform24.setRotation([1,1,0,1])
Transform24.setTranslation([0,5,0])

Shape25 = ShapeObject()

Appearance26 = AppearanceObject()

PixelTexture27 = PixelTextureObject()

Appearance26.setTexture(PixelTexture27)
Shape25.setAppearance(Appearance26)
Box28 = BoxObject()
Box28.setDEF("StandardBox")

Shape25.setGeometry(Box28)
Transform24.addChild(Shape25)
Scene14.addChild(Transform24)
Viewpoint29 = ViewpointObject()
Viewpoint29.setDescription("Black and white PixelTexture")
Viewpoint29.setPosition([-5,0,5])

Scene14.addChild(Viewpoint29)
Transform30 = TransformObject()
Transform30.setDEF("BW")
Transform30.setRotation([1,1,0,1])
Transform30.setTranslation([-5,0,0])

Shape31 = ShapeObject()

Appearance32 = AppearanceObject()

PixelTexture33 = PixelTextureObject()
PixelTexture33.setImage([1,2,1,255,0])

Appearance32.setTexture(PixelTexture33)
Shape31.setAppearance(Appearance32)
Box34 = BoxObject()
Box34.setUSE("StandardBox")

Shape31.setGeometry(Box34)
Transform30.addChild(Shape31)
Scene14.addChild(Transform30)
Viewpoint35 = ViewpointObject()
Viewpoint35.setDescription("Black and white with Alpha PixelTexture")
Viewpoint35.setPosition([5,0,5])

Scene14.addChild(Viewpoint35)
Transform36 = TransformObject()
Transform36.setDEF("AlphaBW")
Transform36.setRotation([1,1,0,1])
Transform36.setTranslation([5,0,0])

Shape37 = ShapeObject()

Appearance38 = AppearanceObject()

PixelTexture39 = PixelTextureObject()
PixelTexture39.setImage([2,1,2,52479,8823])

Appearance38.setTexture(PixelTexture39)
Shape37.setAppearance(Appearance38)
Box40 = BoxObject()
Box40.setUSE("StandardBox")

Shape37.setGeometry(Box40)
Transform36.addChild(Shape37)
Scene14.addChild(Transform36)
Viewpoint41 = ViewpointObject()
Viewpoint41.setDescription("RGB PixelTexture")
Viewpoint41.setPosition([-5,-5,5])

Scene14.addChild(Viewpoint41)
Transform42 = TransformObject()
Transform42.setDEF("RGB")
Transform42.setRotation([1,1,0,1])
Transform42.setTranslation([-5,-5,0])

Shape43 = ShapeObject()

Appearance44 = AppearanceObject()

PixelTexture45 = PixelTextureObject()
PixelTexture45.setImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])

Appearance44.setTexture(PixelTexture45)
Shape43.setAppearance(Appearance44)
Box46 = BoxObject()
Box46.setUSE("StandardBox")

Shape43.setGeometry(Box46)
Transform42.addChild(Shape43)
Scene14.addChild(Transform42)
Viewpoint47 = ViewpointObject()
Viewpoint47.setDescription("RGB with Alpha PixelTexture")
Viewpoint47.setPosition([5,-5,5])

Scene14.addChild(Viewpoint47)
Transform48 = TransformObject()
Transform48.setDEF("AlphaRGB")
Transform48.setRotation([1,1,0,1])
Transform48.setTranslation([5,-5,0])

Shape49 = ShapeObject()

Appearance50 = AppearanceObject()

PixelTexture51 = PixelTextureObject()
PixelTexture51.setImage([3,2,4,-16776961,16711935,65535,-16777089,16711807,65407])

Appearance50.setTexture(PixelTexture51)
Shape49.setAppearance(Appearance50)
Box52 = BoxObject()
Box52.setUSE("StandardBox")

Shape49.setGeometry(Box52)
Transform48.addChild(Shape49)
Scene14.addChild(Transform48)
X3D0.setScene(Scene14)

X3D0.toFileX3D("../data/Table5_18PixelTexture.new.x3d")
