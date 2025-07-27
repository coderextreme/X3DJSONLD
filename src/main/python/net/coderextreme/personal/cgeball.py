print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "Scripting"
component2.level = 1

head1.children.append(component2)
component3 = x3d.component()
component3.name = "EnvironmentalEffects"
component3.level = 3

head1.children.append(component3)
component4 = x3d.component()
component4.name = "Texturing"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Rendering"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Grouping"
component6.level = 3

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Core"
component7.level = 1

head1.children.append(component7)
"""component name='Shaders' level='1'></component"""
"""component name='CubeMapTexturing' level='1'></component"""
meta8 = x3d.meta()
meta8.name = "title"
meta8.content = "ball.x3d"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "creator"
meta9.content = "John Carlson"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "generator"
meta10.content = "manual"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "identifier"
meta11.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "a prismatic sphere"

head1.children.append(meta12)

X3D0.head = head1
Scene13 = x3d.Scene()
WorldInfo14 = x3d.WorldInfo()
WorldInfo14.title = "ball.x3d"

Scene13.children.append(WorldInfo14)
NavigationInfo15 = x3d.NavigationInfo()
NavigationInfo15.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene13.children.append(NavigationInfo15)
Viewpoint16 = x3d.Viewpoint()
Viewpoint16.description = "Tour Views"
Viewpoint16.position = [0,0,12]

Scene13.children.append(Viewpoint16)
Background17 = x3d.Background()
Background17.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background17.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background17.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background17.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background17.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background17.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene13.children.append(Background17)
Transform18 = x3d.Transform()
Shape19 = x3d.Shape()
Sphere20 = x3d.Sphere()

Shape19.geometry = Sphere20
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0.7,0.7,0.7]
Material22.specularColor = [0.5,0.5,0.5]

Appearance21.material = Material22
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.DEF = "texture"
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture23.backTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture23.bottomTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture23.frontTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture23.leftTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture23.rightTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture23.topTexture = ImageTexture29

Appearance21.texture = ComposedCubeMapTexture23
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.language = "GLSL"
field31 = x3d.field()
field31.name = "chromaticDispertion"
field31.accessType = "inputOutput"
field31.type = "SFVec3f"
field31.value = [0.98,1,1.033]

ComposedShader30.field.append(field31)
field32 = x3d.field()
field32.name = "cube"
field32.type = "SFNode"
field32.accessType = "inputOutput"
ComposedCubeMapTexture33 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture33.USE = "texture"

field32.children.append(ComposedCubeMapTexture33)

ComposedShader30.field.append(field32)
field34 = x3d.field()
field34.name = "bias"
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.value = 0.5

ComposedShader30.field.append(field34)
field35 = x3d.field()
field35.name = "scale"
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.value = 0.5

ComposedShader30.field.append(field35)
field36 = x3d.field()
field36.name = "power"
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.value = 2

ComposedShader30.field.append(field36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.url = ["../shaders/castle.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]
ShaderPart37.type = "VERTEX"

ComposedShader30.parts.append(ShaderPart37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.DEF = "commonfs"
ShaderPart38.url = ["../shaders/castle.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"]
ShaderPart38.type = "FRAGMENT"

ComposedShader30.parts.append(ShaderPart38)

Appearance21.shaders.append(ComposedShader30)

Shape19.appearance = Appearance21

Transform18.children.append(Shape19)

Scene13.children.append(Transform18)

X3D0.Scene = Scene13
f = open("../personal/cgeball.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../personal/cgeball.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
