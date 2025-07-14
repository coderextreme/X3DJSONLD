print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
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
"""<component name='Shape' level='4'></component>"""
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "bumpyfreewrl.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "A flower"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "identifier"
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "bumpyx_ite.x3d"

Scene15.children.append(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo()

Scene15.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.position = [0,0,40]
Viewpoint18.description = "Transparent rose"

Scene15.children.append(Viewpoint18)
"""Images courtesy of Paul Debevec's Light Probe Image Gallery"""
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
Sphere22.radius = 5

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
ComposedShader32.DEF = "freewrlShader"
ComposedShader32.language = "GLSL"
field33 = x3d.field()
field33.name = "chromaticDispertion"
field33.accessType = "inputOnly"
field33.type = "SFVec3f"
field33.value = [0.98,1,1.033]

ComposedShader32.field.append(field33)
field34 = x3d.field()
field34.name = "fw_textureCoordGenType"
field34.accessType = "inputOnly"
field34.type = "SFInt32"
field34.value = 0

ComposedShader32.field.append(field34)
field35 = x3d.field()
field35.name = "bias"
field35.type = "SFFloat"
field35.accessType = "inputOnly"
field35.value = 0.5

ComposedShader32.field.append(field35)
field36 = x3d.field()
field36.name = "scale"
field36.type = "SFFloat"
field36.accessType = "inputOnly"
field36.value = 0.5

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.name = "power"
field37.type = "SFFloat"
field37.accessType = "inputOnly"
field37.value = 2

ComposedShader32.field.append(field37)
field38 = x3d.field()
field38.name = "a"
field38.type = "SFFloat"
field38.accessType = "inputOutput"
field38.value = 10

ComposedShader32.field.append(field38)
field39 = x3d.field()
field39.name = "b"
field39.type = "SFFloat"
field39.accessType = "inputOutput"
field39.value = 1

ComposedShader32.field.append(field39)
field40 = x3d.field()
field40.name = "c"
field40.type = "SFFloat"
field40.accessType = "inputOutput"
field40.value = 5

ComposedShader32.field.append(field40)
field41 = x3d.field()
field41.name = "d"
field41.type = "SFFloat"
field41.accessType = "inputOutput"
field41.value = 5

ComposedShader32.field.append(field41)
field42 = x3d.field()
field42.name = "tdelta"
field42.type = "SFFloat"
field42.accessType = "inputOutput"
field42.value = 0

ComposedShader32.field.append(field42)
field43 = x3d.field()
field43.name = "pdelta"
field43.type = "SFFloat"
field43.accessType = "inputOutput"
field43.value = 0

ComposedShader32.field.append(field43)
ShaderPart44 = x3d.ShaderPart()
ShaderPart44.url = ["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]
ShaderPart44.type = "VERTEX"

ComposedShader32.parts.append(ShaderPart44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.url = ["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]
ShaderPart45.type = "FRAGMENT"

ComposedShader32.parts.append(ShaderPart45)

Appearance23.shaders.append(ComposedShader32)

Shape21.appearance = Appearance23

Transform20.children.append(Shape21)

Scene15.children.append(Transform20)

X3D0.Scene = Scene15
f = open("../data/bumpyfreewrl.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/bumpyfreewrl.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
