print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
"""<component name='Shape' level='4'></component>"""
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
meta10.content = "geo.x3d"

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
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "description"
meta14.content = "a sphere"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene15.children.append(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.DEF = "Tour"
Viewpoint17.description = "Tour Views"

Scene15.children.append(Viewpoint17)
"""Viewpoint position='0 0 4' description='sphere in road'/"""
Background18 = x3d.Background()
Background18.backUrl = ["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]
Background18.bottomUrl = ["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]
Background18.frontUrl = ["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]
Background18.leftUrl = ["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]
Background18.rightUrl = ["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]
Background18.topUrl = ["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]

Scene15.children.append(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.7,0.7,0.7]
Material23.specularColor = [0.5,0.5,0.5]

Appearance22.material = Material23
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.DEF = "texture"
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]

ComposedCubeMapTexture24.backTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]

ComposedCubeMapTexture24.bottomTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]

ComposedCubeMapTexture24.frontTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]

ComposedCubeMapTexture24.leftTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]

ComposedCubeMapTexture24.rightTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]

ComposedCubeMapTexture24.topTexture = ImageTexture30

Appearance22.texture = ComposedCubeMapTexture24
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.language = "GLSL"
field32 = x3d.field()
field32.name = "chromaticDispertion"
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.value = [0.98,1,1.033]

ComposedShader31.field.append(field32)
field33 = x3d.field()
field33.name = "cube"
field33.type = "SFNode"
field33.accessType = "inputOutput"
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture34.USE = "texture"

field33.children.append(ComposedCubeMapTexture34)

ComposedShader31.field.append(field33)
field35 = x3d.field()
field35.name = "bias"
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.value = 0.5

ComposedShader31.field.append(field35)
field36 = x3d.field()
field36.name = "scale"
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.value = 0.5

ComposedShader31.field.append(field36)
field37 = x3d.field()
field37.name = "power"
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.value = 2

ComposedShader31.field.append(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.url = ["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]
ShaderPart38.type = "VERTEX"

ComposedShader31.parts.append(ShaderPart38)
ShaderPart39 = x3d.ShaderPart()
ShaderPart39.DEF = "common"
ShaderPart39.url = ["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]
ShaderPart39.type = "FRAGMENT"

ComposedShader31.parts.append(ShaderPart39)

Appearance22.shaders.append(ComposedShader31)
ComposedShader40 = x3d.ComposedShader()
ComposedShader40.language = "GLSL"
field41 = x3d.field()
field41.name = "chromaticDispertion"
field41.accessType = "initializeOnly"
field41.type = "SFVec3f"
field41.value = [0.98,1,1.033]

ComposedShader40.field.append(field41)
field42 = x3d.field()
field42.name = "cube"
field42.type = "SFNode"
field42.accessType = "initializeOnly"
ComposedCubeMapTexture43 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture43.USE = "texture"

field42.children.append(ComposedCubeMapTexture43)

ComposedShader40.field.append(field42)
field44 = x3d.field()
field44.name = "bias"
field44.accessType = "initializeOnly"
field44.type = "SFFloat"
field44.value = 0.5

ComposedShader40.field.append(field44)
field45 = x3d.field()
field45.name = "scale"
field45.accessType = "initializeOnly"
field45.type = "SFFloat"
field45.value = 0.5

ComposedShader40.field.append(field45)
field46 = x3d.field()
field46.name = "power"
field46.accessType = "initializeOnly"
field46.type = "SFFloat"
field46.value = 2

ComposedShader40.field.append(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.url = ["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart47.type = "VERTEX"

ComposedShader40.parts.append(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.url = ["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]
ShaderPart48.type = "FRAGMENT"

ComposedShader40.parts.append(ShaderPart48)

Appearance22.shaders.append(ComposedShader40)

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Scene15.children.append(Transform19)

X3D0.Scene = Scene15
f = open("../data/geo.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/geo.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/geo.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
