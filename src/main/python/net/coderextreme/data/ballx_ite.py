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
meta6.content = "ballx_ite.x3d"

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
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "ball.x3d"

Scene10.children.append(WorldInfo11)
NavigationInfo12 = x3d.NavigationInfo()
NavigationInfo12.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene10.children.append(NavigationInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.description = "Tour Views"

Scene10.children.append(Viewpoint13)
Background14 = x3d.Background()
Background14.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background14.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background14.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background14.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background14.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background14.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene10.children.append(Background14)
Transform15 = x3d.Transform()
Shape16 = x3d.Shape()
Appearance17 = x3d.Appearance()
Material18 = x3d.Material()
Material18.diffuseColor = [0.7,0.7,0.7]
Material18.specularColor = [0.5,0.5,0.5]

Appearance17.material = Material18
ComposedCubeMapTexture19 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture19.frontTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture19.backTexture = ImageTexture21
ImageTexture22 = x3d.ImageTexture()
ImageTexture22.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture19.leftTexture = ImageTexture22
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture19.rightTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture19.topTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture19.bottomTexture = ImageTexture25

Appearance17.texture = ComposedCubeMapTexture19
ComposedShader26 = x3d.ComposedShader()
ComposedShader26.language = "GLSL"
ShaderPart27 = x3d.ShaderPart()
ShaderPart27.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]

ComposedShader26.parts.append(ShaderPart27)
ShaderPart28 = x3d.ShaderPart()
ShaderPart28.type = "FRAGMENT"
ShaderPart28.url = ["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]

ComposedShader26.parts.append(ShaderPart28)
field29 = x3d.field()
field29.accessType = "initializeOnly"
field29.type = "SFVec3f"
field29.name = "chromaticDispertion"
field29.value = [0.98,1,1.033]

ComposedShader26.field.append(field29)
field30 = x3d.field()
field30.accessType = "initializeOnly"
field30.type = "SFNode"
field30.name = "cube"
ComposedCubeMapTexture31 = x3d.ComposedCubeMapTexture(USE="texture")

field30.children.append(ComposedCubeMapTexture31)

ComposedShader26.field.append(field30)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFFloat"
field32.name = "bias"
field32.value = 0.5

ComposedShader26.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFFloat"
field33.name = "scale"
field33.value = 0.5

ComposedShader26.field.append(field33)
field34 = x3d.field()
field34.accessType = "initializeOnly"
field34.type = "SFFloat"
field34.name = "power"
field34.value = 2

ComposedShader26.field.append(field34)

Appearance17.shaders.append(ComposedShader26)

Shape16.appearance = Appearance17
Sphere35 = x3d.Sphere()

Shape16.geometry = Sphere35

Transform15.children.append(Shape16)

Scene10.children.append(Transform15)

X3D0.Scene = Scene10
f = open("../data/ballx_ite.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ballx_ite.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ballx_ite.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
