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
component4.name = "Shaders"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "CubeMapTexturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Texturing"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Rendering"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Grouping"
component8.level = 3

head1.children.append(component8)
component9 = x3d.component()
component9.name = "Core"
component9.level = 1

head1.children.append(component9)
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "ballx3dom.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "manual"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "a prismatic sphere"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "ball.x3d"

Scene15.children.append(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo()
NavigationInfo17.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene15.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Tour Views"

Scene15.children.append(Viewpoint18)
Background19 = x3d.Background()
Background19.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background19.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background19.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background19.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background19.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background19.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene15.children.append(Background19)
Transform20 = x3d.Transform()
Shape21 = x3d.Shape()
Sphere22 = x3d.Sphere()

Shape21.geometry = Sphere22
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.diffuseColor = [0.7,0.7,0.7]
Material24.specularColor = [0.5,0.5,0.5]

Appearance23.material = Material24
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.DEF = "texture"
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture25.backTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture25.bottomTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture25.frontTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture25.leftTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture25.rightTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture25.topTexture = ImageTexture31

Appearance23.texture = ComposedCubeMapTexture25
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.language = "GLSL"
field33 = x3d.field()
field33.name = "chromaticDispertion"
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.value = [0.98,1,1.033]

ComposedShader32.field.append(field33)
field34 = x3d.field()
field34.name = "cube"
field34.type = "SFNode"
field34.accessType = "inputOutput"
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.USE = "texture"

field34.children.append(ComposedCubeMapTexture35)

ComposedShader32.field.append(field34)
field36 = x3d.field()
field36.name = "bias"
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.value = 0.5

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.name = "scale"
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.value = 0.5

ComposedShader32.field.append(field37)
field38 = x3d.field()
field38.name = "power"
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.value = 2

ComposedShader32.field.append(field38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]
ShaderPart39.type = "VERTEX"

ComposedShader32.parts.append(ShaderPart39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.DEF = "common"
ShaderPart40.url = ["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]
ShaderPart40.type = "FRAGMENT"

ComposedShader32.parts.append(ShaderPart40)

Appearance23.shaders.append(ComposedShader32)

Shape21.appearance = Appearance23

Transform20.children.append(Shape21)

Scene15.children.append(Transform20)

X3D0.Scene = Scene15
f = open("../data/ballx3dom.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ballx3dom.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
