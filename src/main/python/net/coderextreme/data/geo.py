print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "EnvironmentalEffects"
component2.level = 3

head1.children.append(component2)
component3 = x3d.component()
component3.name = "Shaders"
component3.level = 1

head1.children.append(component3)
component4 = x3d.component()
component4.name = "CubeMapTexturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Grouping"
component5.level = 3

head1.children.append(component5)
meta6 = x3d.meta()
meta6.name = "title"
meta6.content = "geo.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "creator"
meta7.content = "John Carlson"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "generator"
meta8.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "manual"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
NavigationInfo11 = x3d.NavigationInfo()
NavigationInfo11.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene10.children.append(NavigationInfo11)
Viewpoint12 = x3d.Viewpoint(DEF="Tour")
Viewpoint12.description = "Tour Views"

Scene10.children.append(Viewpoint12)
Background13 = x3d.Background()
Background13.frontUrl = ["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]
Background13.backUrl = ["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]
Background13.leftUrl = ["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]
Background13.rightUrl = ["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]
Background13.topUrl = ["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]
Background13.bottomUrl = ["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]

Scene10.children.append(Background13)
Transform14 = x3d.Transform()
Shape15 = x3d.Shape()
Appearance16 = x3d.Appearance()
Material17 = x3d.Material()
Material17.diffuseColor = [0.7,0.7,0.7]
Material17.specularColor = [0.5,0.5,0.5]

Appearance16.material = Material17
ComposedCubeMapTexture18 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]

ComposedCubeMapTexture18.frontTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]

ComposedCubeMapTexture18.backTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]

ComposedCubeMapTexture18.leftTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]

ComposedCubeMapTexture18.rightTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]

ComposedCubeMapTexture18.topTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]

ComposedCubeMapTexture18.bottomTexture = ImageTexture24

Appearance16.texture = ComposedCubeMapTexture18
ComposedShader25 = x3d.ComposedShader()
ComposedShader25.language = "GLSL"
ShaderPart26 = x3d.ShaderPart()
ShaderPart26.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]

ComposedShader25.parts.append(ShaderPart26)
ShaderPart27 = x3d.ShaderPart(DEF="common")
ShaderPart27.type = "FRAGMENT"
ShaderPart27.url = ["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]

ComposedShader25.parts.append(ShaderPart27)
field28 = x3d.field()
field28.accessType = "inputOutput"
field28.type = "SFVec3f"
field28.name = "chromaticDispertion"
field28.value = [0.98,1,1.033]

ComposedShader25.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOutput"
field29.type = "SFNode"
field29.name = "cube"
ComposedCubeMapTexture30 = x3d.ComposedCubeMapTexture(USE="texture")

field29.children.append(ComposedCubeMapTexture30)

ComposedShader25.field.append(field29)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "bias"
field31.value = 0.5

ComposedShader25.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "scale"
field32.value = 0.5

ComposedShader25.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.name = "power"
field33.value = 2

ComposedShader25.field.append(field33)

Appearance16.shaders.append(ComposedShader25)
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.language = "GLSL"
ShaderPart35 = x3d.ShaderPart()
ShaderPart35.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader34.parts.append(ShaderPart35)
ShaderPart36 = x3d.ShaderPart()
ShaderPart36.type = "FRAGMENT"
ShaderPart36.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader34.parts.append(ShaderPart36)
field37 = x3d.field()
field37.accessType = "initializeOnly"
field37.type = "SFVec3f"
field37.name = "chromaticDispertion"
field37.value = [0.98,1,1.033]

ComposedShader34.field.append(field37)
field38 = x3d.field()
field38.accessType = "initializeOnly"
field38.type = "SFNode"
field38.name = "cube"
ComposedCubeMapTexture39 = x3d.ComposedCubeMapTexture(USE="texture")

field38.children.append(ComposedCubeMapTexture39)

ComposedShader34.field.append(field38)
field40 = x3d.field()
field40.accessType = "initializeOnly"
field40.type = "SFFloat"
field40.name = "bias"
field40.value = 0.5

ComposedShader34.field.append(field40)
field41 = x3d.field()
field41.accessType = "initializeOnly"
field41.type = "SFFloat"
field41.name = "scale"
field41.value = 0.5

ComposedShader34.field.append(field41)
field42 = x3d.field()
field42.accessType = "initializeOnly"
field42.type = "SFFloat"
field42.name = "power"
field42.value = 2

ComposedShader34.field.append(field42)

Appearance16.shaders.append(ComposedShader34)

Shape15.appearance = Appearance16
Sphere43 = x3d.Sphere()

Shape15.geometry = Sphere43

Transform14.children.append(Shape15)

Scene10.children.append(Transform14)

X3D0.Scene = Scene10
f = open("../data/geo.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/geo.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/geo.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
