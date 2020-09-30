import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("Table5_18PixelTexture")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("PixelTexture example for Table 5.18")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Leonard Daly and Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("18 December 2006")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("2 April 2017")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("reference")
meta7.setContent("http://X3dGraphics.com")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("reference")
meta8.setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("rights")
meta9.setContent("Copyright 2006, Daly Realism and Don Brutzman")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("subject")
meta10.setContent("X3D, PixelTexture")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
Background15 = x3d.Background()
Background15.setSkyColor([0,0,1])
Background15.setTransparency(0)

Scene14.addChildren(Background15)
Transform16 = x3d.Transform()
Transform16.setDEF("Checkerboard")
Transform16.setTranslation([0,0,-10])
Transform16.setBboxCenter([0,0,0])
Transform16.setBboxSize([-1,-1,-1])
Shape17 = x3d.Shape()
Shape17.setBboxCenter([0,0,0])
Shape17.setBboxSize([-1,-1,-1])
Appearance18 = x3d.Appearance()
TextureTransform19 = x3d.TextureTransform()
TextureTransform19.setScale([500,500])

Appearance18.setTextureTransform(TextureTransform19)
PixelTexture20 = x3d.PixelTexture()
PixelTexture20.setImage([2,2,3,15119869,16767927,16767927,15119869])

Appearance18.setTexture(PixelTexture20)

Shape17.setAppearance(Appearance18)
Box21 = x3d.Box()
Box21.setSize([1000,1000,0.01])
Box21.setSolid(True)

Shape17.setGeometry(Box21)

Transform16.addChildren(Shape17)

Scene14.addChildren(Transform16)
Viewpoint22 = x3d.Viewpoint()
Viewpoint22.setDescription("View All")
Viewpoint22.setPosition([0,0,20])

Scene14.addChildren(Viewpoint22)
Viewpoint23 = x3d.Viewpoint()
Viewpoint23.setDescription("Empty Image")
Viewpoint23.setPosition([0,5,5])

Scene14.addChildren(Viewpoint23)
Transform24 = x3d.Transform()
Transform24.setDEF("EmptyImage")
Transform24.setRotation([1,1,0,1])
Transform24.setTranslation([0,5,0])
Transform24.setBboxCenter([0,0,0])
Transform24.setBboxSize([-1,-1,-1])
Shape25 = x3d.Shape()
Shape25.setBboxCenter([0,0,0])
Shape25.setBboxSize([-1,-1,-1])
Appearance26 = x3d.Appearance()
PixelTexture27 = x3d.PixelTexture()

Appearance26.setTexture(PixelTexture27)

Shape25.setAppearance(Appearance26)
Box28 = x3d.Box()
Box28.setDEF("StandardBox")
Box28.setSize([2,2,2])
Box28.setSolid(True)

Shape25.setGeometry(Box28)

Transform24.addChildren(Shape25)

Scene14.addChildren(Transform24)
Viewpoint29 = x3d.Viewpoint()
Viewpoint29.setDescription("Black and white PixelTexture")
Viewpoint29.setPosition([-5,0,5])

Scene14.addChildren(Viewpoint29)
Transform30 = x3d.Transform()
Transform30.setDEF("BW")
Transform30.setRotation([1,1,0,1])
Transform30.setTranslation([-5,0,0])
Transform30.setBboxCenter([0,0,0])
Transform30.setBboxSize([-1,-1,-1])
Shape31 = x3d.Shape()
Shape31.setBboxCenter([0,0,0])
Shape31.setBboxSize([-1,-1,-1])
Appearance32 = x3d.Appearance()
PixelTexture33 = x3d.PixelTexture()
PixelTexture33.setImage([1,2,1,255,0])

Appearance32.setTexture(PixelTexture33)

Shape31.setAppearance(Appearance32)
Box34 = x3d.Box()
Box34.setUSE("StandardBox")

Shape31.setGeometry(Box34)

Transform30.addChildren(Shape31)

Scene14.addChildren(Transform30)
Viewpoint35 = x3d.Viewpoint()
Viewpoint35.setDescription("Black and white with Alpha PixelTexture")
Viewpoint35.setPosition([5,0,5])

Scene14.addChildren(Viewpoint35)
Transform36 = x3d.Transform()
Transform36.setDEF("AlphaBW")
Transform36.setRotation([1,1,0,1])
Transform36.setTranslation([5,0,0])
Transform36.setBboxCenter([0,0,0])
Transform36.setBboxSize([-1,-1,-1])
Shape37 = x3d.Shape()
Shape37.setBboxCenter([0,0,0])
Shape37.setBboxSize([-1,-1,-1])
Appearance38 = x3d.Appearance()
PixelTexture39 = x3d.PixelTexture()
PixelTexture39.setImage([2,1,2,52479,8823])

Appearance38.setTexture(PixelTexture39)

Shape37.setAppearance(Appearance38)
Box40 = x3d.Box()
Box40.setUSE("StandardBox")

Shape37.setGeometry(Box40)

Transform36.addChildren(Shape37)

Scene14.addChildren(Transform36)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("RGB PixelTexture")
Viewpoint41.setPosition([-5,-5,5])

Scene14.addChildren(Viewpoint41)
Transform42 = x3d.Transform()
Transform42.setDEF("RGB")
Transform42.setRotation([1,1,0,1])
Transform42.setTranslation([-5,-5,0])
Transform42.setBboxCenter([0,0,0])
Transform42.setBboxSize([-1,-1,-1])
Shape43 = x3d.Shape()
Shape43.setBboxCenter([0,0,0])
Shape43.setBboxSize([-1,-1,-1])
Appearance44 = x3d.Appearance()
PixelTexture45 = x3d.PixelTexture()
PixelTexture45.setImage([2,4,3,16711680,65280,0,0,0,0,16777215,16776960])

Appearance44.setTexture(PixelTexture45)

Shape43.setAppearance(Appearance44)
Box46 = x3d.Box()
Box46.setUSE("StandardBox")

Shape43.setGeometry(Box46)

Transform42.addChildren(Shape43)

Scene14.addChildren(Transform42)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.setDescription("RGB with Alpha PixelTexture")
Viewpoint47.setPosition([5,-5,5])

Scene14.addChildren(Viewpoint47)
Transform48 = x3d.Transform()
Transform48.setDEF("AlphaRGB")
Transform48.setRotation([1,1,0,1])
Transform48.setTranslation([5,-5,0])
Transform48.setBboxCenter([0,0,0])
Transform48.setBboxSize([-1,-1,-1])
Shape49 = x3d.Shape()
Shape49.setBboxCenter([0,0,0])
Shape49.setBboxSize([-1,-1,-1])
Appearance50 = x3d.Appearance()
PixelTexture51 = x3d.PixelTexture()
PixelTexture51.setImage([3,2,4,-16776961,16711935,65535,-16777089,16711807,65407])

Appearance50.setTexture(PixelTexture51)

Shape49.setAppearance(Appearance50)
Box52 = x3d.Box()
Box52.setUSE("StandardBox")

Shape49.setGeometry(Box52)

Transform48.addChildren(Shape49)

Scene14.addChildren(Transform48)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/Table5_18PixelTexture_RoundTrip.x3d")
