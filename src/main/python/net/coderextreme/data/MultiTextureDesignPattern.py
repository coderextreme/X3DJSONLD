print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "3.3"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "MultiTextureDesignPattern.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "description"
meta3.content = "Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "creator"
meta4.content = "Don Brutzman"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "created"
meta5.content = "5 March 2011"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "modified"
meta6.content = "29 October 2023"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "TODO"
meta7.content = "X3D schematron rules for quality assurance"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "Image"
meta8.content = "MultiTextureDesignPatternSceneGraph.png"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "subject"
meta9.content = "MultiTexture, MultiTextureCoordinate, MultiTextureTransform"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "license"
meta14.content = "../license.html"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
"""================================"""
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "MultiTextureDesignPattern.x3d"

Scene15.children.append(WorldInfo16)
Background17 = x3d.Background()
Background17.skyColor = [(0.72549, 1, 0.721569)]

Scene15.children.append(Background17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "MultiTexture design pattern"

Scene15.children.append(Viewpoint18)
Shape19 = x3d.Shape()
Text20 = x3d.Text()
Text20.string = ["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"]
FontStyle21 = x3d.FontStyle()
FontStyle21.justify = ["MIDDLE","MIDDLE"]
FontStyle21.size = 0.6

Text20.fontStyle = FontStyle21

Shape19.geometry = Text20
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.2,0.4,0.8]

Appearance22.material = Material23

Shape19.appearance = Appearance22

Scene15.children.append(Shape19)
"""================================"""
Shape24 = x3d.Shape()
"""add a single geometry node here"""
IndexedFaceSet25 = x3d.IndexedFaceSet()
MultiTextureCoordinate26 = x3d.MultiTextureCoordinate()
"""add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes"""
TextureCoordinate27 = x3d.TextureCoordinate()
TextureCoordinate27.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate26.texCoord.append(TextureCoordinate27)
TextureCoordinate28 = x3d.TextureCoordinate()
TextureCoordinate28.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate26.texCoord.append(TextureCoordinate28)
TextureCoordinate29 = x3d.TextureCoordinate()
TextureCoordinate29.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate26.texCoord.append(TextureCoordinate29)

IndexedFaceSet25.texCoord = MultiTextureCoordinate26

Shape24.geometry = IndexedFaceSet25
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()

Appearance30.material = Material31
MultiTexture32 = x3d.MultiTexture()
MultiTexture32.alpha = 0.8
MultiTexture32.color = [0.9,1,0.2]
MultiTexture32.function = ["COMPLEMENT","ALPHAREPLICATE"]
MultiTexture32.mode = ["MODULATE","REPLACE","BLENDDIFFUSEALPHA"]
MultiTexture32.source = ["DIFFUSE","SPECULAR","FACTOR"]
"""add multiple texture nodes here"""
ImageTexture33 = x3d.ImageTexture()

MultiTexture32.texture = ImageTexture33
MovieTexture34 = x3d.MovieTexture()

MultiTexture32.texture = MovieTexture34
PixelTexture35 = x3d.PixelTexture()

MultiTexture32.texture = PixelTexture35

Appearance30.texture = MultiTexture32
MultiTextureTransform36 = x3d.MultiTextureTransform()
"""add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes"""
TextureTransform37 = x3d.TextureTransform()

MultiTextureTransform36.textureTransform.append(TextureTransform37)
TextureTransform38 = x3d.TextureTransform()

MultiTextureTransform36.textureTransform.append(TextureTransform38)
TextureTransform39 = x3d.TextureTransform()

MultiTextureTransform36.textureTransform.append(TextureTransform39)

Appearance30.textureTransform = MultiTextureTransform36

Shape24.appearance = Appearance30

Scene15.children.append(Shape24)

X3D0.Scene = Scene15
f = open("../data/MultiTextureDesignPattern.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MultiTextureDesignPattern.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MultiTextureDesignPattern.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
