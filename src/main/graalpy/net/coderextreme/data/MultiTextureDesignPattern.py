import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("MultiTextureDesignPattern.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Don Brutzman")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("5 March 2011")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("modified")
meta6.setContent("29 October 2023")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("TODO")
meta7.setContent("X3D schematron rules for quality assurance")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("Image")
meta8.setContent("MultiTextureDesignPatternSceneGraph.png")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("subject")
meta9.setContent("MultiTexture, MultiTextureCoordinate, MultiTextureTransform")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("reference")
meta10.setContent("https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("identifier")
meta11.setContent("https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("reference")
meta12.setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("generator")
meta13.setContent("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("license")
meta14.setContent("../license.html")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()

Scene15.addComments(x3d.CommentsBlock("""================================"""))
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.setTitle("MultiTextureDesignPattern.x3d")

Scene15.addChild(WorldInfo16)
Background17 = x3d.Background()
Background17.setSkyColor(x3d.doubleToFloat([0.72549,1,0.721569]))

Scene15.addChild(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("MultiTexture design pattern")

Scene15.addChild(Viewpoint18)
Shape19 = x3d.Shape()
Text20 = x3d.Text()
Text20.setString(["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"])
FontStyle21 = x3d.FontStyle()
FontStyle21.setJustify(["MIDDLE","MIDDLE"])
FontStyle21.setSize(0.6)

Text20.setFontStyle(FontStyle21)

Shape19.setGeometry(Text20)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0.2,0.4,0.8]))

Appearance22.setMaterial(Material23)

Shape19.setAppearance(Appearance22)

Scene15.addChild(Shape19)

Scene15.addComments(x3d.CommentsBlock("""================================"""))
Shape24 = x3d.Shape()

Shape24.addComments(x3d.CommentsBlock("""add a single geometry node here"""))
IndexedFaceSet25 = x3d.IndexedFaceSet()
MultiTextureCoordinate26 = x3d.MultiTextureCoordinate()

MultiTextureCoordinate26.addComments(x3d.CommentsBlock("""add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes"""))
TextureCoordinate27 = x3d.TextureCoordinate()
TextureCoordinate27.setPoint(x3d.doubleToFloat([0,0,1,0,1,1,0,1]))

MultiTextureCoordinate26.addTexCoord(TextureCoordinate27)
TextureCoordinate28 = x3d.TextureCoordinate()
TextureCoordinate28.setPoint(x3d.doubleToFloat([0,0,1,0,1,1,0,1]))

MultiTextureCoordinate26.addTexCoord(TextureCoordinate28)
TextureCoordinate29 = x3d.TextureCoordinate()
TextureCoordinate29.setPoint(x3d.doubleToFloat([0,0,1,0,1,1,0,1]))

MultiTextureCoordinate26.addTexCoord(TextureCoordinate29)

IndexedFaceSet25.setTexCoord(MultiTextureCoordinate26)

Shape24.setGeometry(IndexedFaceSet25)
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()

Appearance30.setMaterial(Material31)
MultiTexture32 = x3d.MultiTexture()
MultiTexture32.setAlpha(0.8)
MultiTexture32.setColor(x3d.doubleToFloat([0.9,1,0.2]))
MultiTexture32.setFunction(["COMPLEMENT","ALPHAREPLICATE"])
MultiTexture32.setMode(["MODULATE","REPLACE","BLENDDIFFUSEALPHA"])
MultiTexture32.setSource(["DIFFUSE","SPECULAR","FACTOR"])

MultiTexture32.addComments(x3d.CommentsBlock("""add multiple texture nodes here"""))
ImageTexture33 = x3d.ImageTexture()

MultiTexture32.addTexture(ImageTexture33)
MovieTexture34 = x3d.MovieTexture()

MultiTexture32.addTexture(MovieTexture34)
PixelTexture35 = x3d.PixelTexture()

MultiTexture32.addTexture(PixelTexture35)

Appearance30.setTexture(MultiTexture32)
MultiTextureTransform36 = x3d.MultiTextureTransform()

MultiTextureTransform36.addComments(x3d.CommentsBlock("""add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes"""))
TextureTransform37 = x3d.TextureTransform()

MultiTextureTransform36.addTextureTransform(TextureTransform37)
TextureTransform38 = x3d.TextureTransform()

MultiTextureTransform36.addTextureTransform(TextureTransform38)
TextureTransform39 = x3d.TextureTransform()

MultiTextureTransform36.addTextureTransform(TextureTransform39)

Appearance30.setTextureTransform(MultiTextureTransform36)

Shape24.setAppearance(Appearance30)

Scene15.addChild(Shape24)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/MultiTextureDesignPattern.new.graalpy.x3d")
X3D0.toFileJSON("../data/MultiTextureDesignPattern.new.graalpy.x3dj")
