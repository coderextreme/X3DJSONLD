print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.1"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Shaders"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Grouping"
component4.level = 3

head1.children.append(component4)
component5 = x3d.component()
component5.name = "CubeMapTexturing"
component5.level = 1

head1.children.append(component5)
meta6 = x3d.meta()
meta6.name = "identifier"
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "title"
meta7.content = "ball.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "generator"
meta9.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta9)

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "ball.x3d"

Scene10.children.append(WorldInfo11)
NavigationInfo12 = x3d.NavigationInfo()
NavigationInfo12.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene10.children.append(NavigationInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.description = "Tour Views"
Viewpoint13.position = [0,0,12]

Scene10.children.append(Viewpoint13)
Background14 = x3d.Background()
Background14.frontUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background14.backUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background14.leftUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background14.rightUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background14.topUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background14.bottomUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene10.children.append(Background14)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape()
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.diffuseColor = [0.7,0.7,0.7]
Material18.specularColor = [0.5,0.5,0.5]

Appearance17.material = Material18
ComposedShader19 = x3d.ComposedShader()
ComposedShader19.language = "GLSL"
ShaderPart20 = x3d.ShaderPart()
ShaderPart20.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"]

ComposedShader19.parts.append(ShaderPart20)
ShaderPart21 = x3d.ShaderPart(DEF="commonfs")
ShaderPart21.type = "FRAGMENT"
ShaderPart21.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"]

ComposedShader19.parts.append(ShaderPart21)
field22 = x3d.field()
field22.accessType = "initializeOnly"
field22.type = "SFVec3f"
field22.name = "chromaticDispertion"
field22.value = [0.98,1,1.033]

ComposedShader19.field.append(field22)
field23 = x3d.field()
field23.accessType = "initializeOnly"
field23.type = "SFNode"
field23.name = "cube"
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture24.frontTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture24.backTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture24.leftTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture24.rightTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture24.topTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture24.bottomTexture = ImageTexture30

field23.children.append(ComposedCubeMapTexture24)

ComposedShader19.field.append(field23)
field31 = x3d.field()
field31.accessType = "initializeOnly"
field31.type = "SFFloat"
field31.name = "bias"
field31.value = 0.5

ComposedShader19.field.append(field31)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFFloat"
field32.name = "scale"
field32.value = 0.5

ComposedShader19.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFFloat"
field33.name = "power"
field33.value = 2

ComposedShader19.field.append(field33)

Appearance17.shaders.append(ComposedShader19)

Shape16.appearance = Appearance17
Sphere34 = x3d.Sphere()

Shape16.geometry = Sphere34

Transform15.children.append(Shape16)

Scene10.children.append(Transform15)

X3D0.Scene = Scene10
f = open("../data/ballcge.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ballcge.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ballcge.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
