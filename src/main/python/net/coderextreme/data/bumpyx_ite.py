print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "bumpyx_ite.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "A flower"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "generator"
meta5.content = "x3d-tidy V3.0.2, https://www.npmjs.com/package/x3d-tidy"

head1.children.append(meta5)

X3D0.head = head1
Scene6 = x3d.Scene()
WorldInfo7 = x3d.WorldInfo()
WorldInfo7.title = "bumpyx_ite.x3d"

Scene6.children.append(WorldInfo7)
NavigationInfo8 = x3d.NavigationInfo()
NavigationInfo8.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene6.children.append(NavigationInfo8)
Viewpoint9 = x3d.Viewpoint()
Viewpoint9.description = "Transparent rose"
Viewpoint9.position = [0,0,40]

Scene6.children.append(Viewpoint9)
Background10 = x3d.Background()
Background10.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background10.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background10.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background10.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background10.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background10.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene6.children.append(Background10)
Transform11 = x3d.Transform()
Shape12 = x3d.Shape()
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0.7,0.7,0.7]
Material14.specularColor = [0.5,0.5,0.5]

Appearance13.material = Material14
ComposedCubeMapTexture15 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture16 = x3d.ImageTexture()
ImageTexture16.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture15.frontTexture = ImageTexture16
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture15.backTexture = ImageTexture17
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture15.leftTexture = ImageTexture18
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture15.rightTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture15.topTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture15.bottomTexture = ImageTexture21

Appearance13.texture = ComposedCubeMapTexture15
ComposedShader22 = x3d.ComposedShader(DEF="x_iteShader")
ComposedShader22.language = "GLSL"
ShaderPart23 = x3d.ShaderPart()
ShaderPart23.url = ["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]

ComposedShader22.parts.append(ShaderPart23)
ShaderPart24 = x3d.ShaderPart()
ShaderPart24.type = "FRAGMENT"
ShaderPart24.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]

ComposedShader22.parts.append(ShaderPart24)
field25 = x3d.field()
field25.accessType = "inputOnly"
field25.type = "SFVec3f"
field25.name = "chromaticDispertion"

ComposedShader22.field.append(field25)
field26 = x3d.field()
field26.accessType = "inputOnly"
field26.type = "SFNode"
field26.name = "cube"

ComposedShader22.field.append(field26)
field27 = x3d.field()
field27.accessType = "inputOnly"
field27.type = "SFFloat"
field27.name = "bias"

ComposedShader22.field.append(field27)
field28 = x3d.field()
field28.accessType = "inputOnly"
field28.type = "SFFloat"
field28.name = "scale"

ComposedShader22.field.append(field28)
field29 = x3d.field()
field29.accessType = "inputOnly"
field29.type = "SFFloat"
field29.name = "power"

ComposedShader22.field.append(field29)
field30 = x3d.field()
field30.accessType = "inputOutput"
field30.type = "SFFloat"
field30.name = "a"
field30.value = 15

ComposedShader22.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "SFFloat"
field31.name = "b"
field31.value = 5

ComposedShader22.field.append(field31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFFloat"
field32.name = "c"
field32.value = 5

ComposedShader22.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFFloat"
field33.name = "d"
field33.value = 5

ComposedShader22.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "tdelta"

ComposedShader22.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "pdelta"

ComposedShader22.field.append(field35)

Appearance13.shaders.append(ComposedShader22)

Shape12.appearance = Appearance13
Sphere36 = x3d.Sphere()
Sphere36.radius = 40

Shape12.geometry = Sphere36

Transform11.children.append(Shape12)

Scene6.children.append(Transform11)

X3D0.Scene = Scene6
f = open("../data/bumpyx_ite.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyx_ite.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/bumpyx_ite.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
