print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
component4.name = "Rendering"
component4.level = 1

head1.children.append(component4)
component5 = x3d.component()
component5.name = "Texturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Grouping"
component6.level = 3

head1.children.append(component6)
component7 = x3d.component()
component7.name = "CubeMapTexturing"
component7.level = 1

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Core"
component8.level = 1

head1.children.append(component8)
meta9 = x3d.meta()
meta9.name = "identifier"
meta9.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "ball.x3d"

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
meta13.name = "description"
meta13.content = "a prismatic sphere"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "ball.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.avatarSize = [0.25,1.60000002384186,0.75]
NavigationInfo16.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene14.children.append(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.position = [0,0,12]
Viewpoint17.description = "Tour Views"

Scene14.children.append(Viewpoint17)
Background18 = x3d.Background()
Background18.topUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background18.backUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.leftUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.frontUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.rightUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.bottomUrl = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene14.children.append(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.699999988079071,0.699999988079071,0.699999988079071]
Material23.specularColor = [0.5,0.5,0.5]

Appearance22.material = Material23
ComposedShader24 = x3d.ComposedShader()
ComposedShader24.language = "GLSL"
field25 = x3d.field()
field25.name = "chromaticDispertion"
field25.accessType = "initializeOnly"
field25.type = "SFVec3f"
field25.value = [0.980000019073486,1,1.03299999237061]

ComposedShader24.field.append(field25)
field26 = x3d.field()
field26.name = "cube"
field26.accessType = "initializeOnly"
field26.type = "SFNode"
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture27.backTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture27.bottomTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture27.frontTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture27.leftTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture27.rightTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture27.topTexture = ImageTexture33

field26.children.append(ComposedCubeMapTexture27)

ComposedShader24.field.append(field26)
field34 = x3d.field()
field34.name = "bias"
field34.accessType = "initializeOnly"
field34.type = "SFFloat"
field34.value = 0.5

ComposedShader24.field.append(field34)
field35 = x3d.field()
field35.name = "scale"
field35.accessType = "initializeOnly"
field35.type = "SFFloat"
field35.value = 0.5

ComposedShader24.field.append(field35)
field36 = x3d.field()
field36.name = "power"
field36.accessType = "initializeOnly"
field36.type = "SFFloat"
field36.value = 2

ComposedShader24.field.append(field36)
ShaderPart37 = x3d.ShaderPart()
ShaderPart37.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs"]
ShaderPart37.type = "VERTEX"

ComposedShader24.parts.append(ShaderPart37)
ShaderPart38 = x3d.ShaderPart(DEF="commonfs")
ShaderPart38.url = ["file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs"]
ShaderPart38.type = "FRAGMENT"

ComposedShader24.parts.append(ShaderPart38)

Appearance22.shaders.append(ComposedShader24)

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/ballcge.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ballcge.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ballcge.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
