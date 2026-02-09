print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
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
meta6.content = "Mon, 09 Feb 2026 07:12:52 GMT"

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

X3D0.head = head1
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.title = "MultiTextureDesignPattern.x3d"

Scene13.children.append(WorldInfo14)
Background15 = x3d.Background()
Background15.skyColor = [(0.72549, 1, 0.721569)]

Scene13.children.append(Background15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.description = "MultiTexture design pattern"

Scene13.children.append(Viewpoint16)
Shape17 = x3d.Shape()
Appearance18 = x3d.Appearance()
Material19 = x3d.Material()
Material19.diffuseColor = [0.2,0.4,0.8]

Appearance18.material = Material19

Shape17.appearance = Appearance18
Text20 = x3d.Text()
Text20.string = ["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"]
FontStyle21 = x3d.FontStyle()
FontStyle21.size = 0.6
FontStyle21.justify = ["MIDDLE","MIDDLE"]

Text20.fontStyle = FontStyle21

Shape17.geometry = Text20

Scene13.children.append(Shape17)
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()

Appearance23.material = Material24
MultiTexture25 = x3d.MultiTexture()
MultiTexture25.color = [0.9,1,0.2]
MultiTexture25.alpha = 0.8
MultiTexture25.mode = ["MODULATE","REPLACE","BLENDDIFFUSEALPHA"]
MultiTexture25.source = ["DIFFUSE","SPECULAR","FACTOR"]
MultiTexture25.function = ["COMPLEMENT","ALPHAREPLICATE"]
ImageTexture26 = x3d.ImageTexture()

MultiTexture25.texture.append(ImageTexture26)
MovieTexture27 = x3d.MovieTexture()

MultiTexture25.texture.append(MovieTexture27)
PixelTexture28 = x3d.PixelTexture()

MultiTexture25.texture.append(PixelTexture28)

Appearance23.texture = MultiTexture25
MultiTextureTransform29 = x3d.MultiTextureTransform()
TextureTransform30 = x3d.TextureTransform()

MultiTextureTransform29.textureTransform.append(TextureTransform30)
TextureTransform31 = x3d.TextureTransform()

MultiTextureTransform29.textureTransform.append(TextureTransform31)
TextureTransform32 = x3d.TextureTransform()

MultiTextureTransform29.textureTransform.append(TextureTransform32)

Appearance23.textureTransform = MultiTextureTransform29

Shape22.appearance = Appearance23
IndexedFaceSet33 = x3d.IndexedFaceSet()
MultiTextureCoordinate34 = x3d.MultiTextureCoordinate()
TextureCoordinate35 = x3d.TextureCoordinate()
TextureCoordinate35.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate34.texCoord.append(TextureCoordinate35)
TextureCoordinate36 = x3d.TextureCoordinate()
TextureCoordinate36.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate34.texCoord.append(TextureCoordinate36)
TextureCoordinate37 = x3d.TextureCoordinate()
TextureCoordinate37.point = [(0, 0),(1, 0),(1, 1),(0, 1)]

MultiTextureCoordinate34.texCoord.append(TextureCoordinate37)

IndexedFaceSet33.texCoord = MultiTextureCoordinate34

Shape22.geometry = IndexedFaceSet33

Scene13.children.append(Shape22)

X3D0.Scene = Scene13
f = open("../data/MultiTextureDesignPattern.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/MultiTextureDesignPattern.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/MultiTextureDesignPattern.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
