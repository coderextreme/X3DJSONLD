print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
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
component5.name = "Texturing"
component5.level = 1

head1.children.append(component5)
component6 = x3d.component()
component6.name = "Rendering"
component6.level = 1

head1.children.append(component6)
component7 = x3d.component()
component7.name = "Grouping"
component7.level = 3

head1.children.append(component7)
component8 = x3d.component()
component8.name = "Core"
component8.level = 1

head1.children.append(component8)
meta9 = x3d.meta()
meta9.name = "title"
meta9.content = "ball.x3d"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "creator"
meta10.content = "John Carlson"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "manual"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "identifier"
meta12.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d"

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
NavigationInfo16.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene14.children.append(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.description = "Tour Views"
Viewpoint17.position = [0,0,12]

Scene14.children.append(Viewpoint17)
Background18 = x3d.Background()
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene14.children.append(Background18)
Transform19 = x3d.Transform()
Shape20 = x3d.Shape()
Sphere21 = x3d.Sphere()

Shape20.geometry = Sphere21
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.7,0.7,0.7]
Material23.specularColor = [0.5,0.5,0.5]

Appearance22.material = Material23
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture24.backTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture24.bottomTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture24.frontTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture24.leftTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture24.rightTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture24.topTexture = ImageTexture30

Appearance22.texture = ComposedCubeMapTexture24
Appearance22.children.append(x3d.Comment("""<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>"""))
Appearance22.children.append(x3d.Comment("""</ShaderProgram>"""))
Appearance22.children.append(x3d.Comment("""<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>"""))
Appearance22.children.append(x3d.Comment("""</ProgramShader>"""))
Appearance22.children.append(x3d.Comment("""<ComposedShader language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))
Appearance22.children.append(x3d.Comment("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))
Appearance22.children.append(x3d.Comment("""</field>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart DEF='commonfs' url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""</ComposedShader>"""))
Appearance22.children.append(x3d.Comment("""<ComposedShader language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">"""))
Appearance22.children.append(x3d.Comment("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))
Appearance22.children.append(x3d.Comment("""</field>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart USE='commonfs'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""</ComposedShader>"""))
Appearance22.children.append(x3d.Comment("""<ComposedShader language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))
Appearance22.children.append(x3d.Comment("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))
Appearance22.children.append(x3d.Comment("""</field>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart USE='commonfs'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""</ComposedShader>"""))
Appearance22.children.append(x3d.Comment("""<ComposedShader language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart USE='commonfs'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""</ComposedShader>"""))
Appearance22.children.append(x3d.Comment("""<ComposedShader language='GLSL'>"""))
Appearance22.children.append(x3d.Comment("""<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))
Appearance22.children.append(x3d.Comment("""<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"""))
Appearance22.children.append(x3d.Comment("""</field>"""))
Appearance22.children.append(x3d.Comment("""<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"""))
Appearance22.children.append(x3d.Comment("""<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"'></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""<ShaderPart USE=\"commonfs\"></ShaderPart>"""))
Appearance22.children.append(x3d.Comment("""</ComposedShader>"""))
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.language = "GLSL"
field32 = x3d.field()
field32.name = "chromaticDispertion"
field32.accessType = "initializeOnly"
field32.type = "SFVec3f"
field32.value = [0.98,1,1.033]

ComposedShader31.field.append(field32)
field33 = x3d.field()
field33.name = "cube"
field33.type = "SFNode"
field33.accessType = "initializeOnly"
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture(USE="texture")

field33.children.append(ComposedCubeMapTexture34)

ComposedShader31.field.append(field33)
field35 = x3d.field()
field35.name = "bias"
field35.accessType = "initializeOnly"
field35.type = "SFFloat"
field35.value = 0.5

ComposedShader31.field.append(field35)
field36 = x3d.field()
field36.name = "scale"
field36.accessType = "initializeOnly"
field36.type = "SFFloat"
field36.value = 0.5

ComposedShader31.field.append(field36)
field37 = x3d.field()
field37.name = "power"
field37.accessType = "initializeOnly"
field37.type = "SFFloat"
field37.value = 2

ComposedShader31.field.append(field37)
ShaderPart38 = x3d.ShaderPart()
ShaderPart38.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]
ShaderPart38.type = "VERTEX"

ComposedShader31.parts.append(ShaderPart38)
ShaderPart39 = x3d.ShaderPart(DEF="commonfs")
ShaderPart39.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]
ShaderPart39.type = "FRAGMENT"

ComposedShader31.parts.append(ShaderPart39)
ComposedShader31.children.append(x3d.Comment("""<ShaderPart USE=\"commonfs\"></ShaderPart>"""))

Appearance22.shaders.append(ComposedShader31)

Shape20.appearance = Appearance22

Transform19.children.append(Shape20)

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/ball.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/ball.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/ball.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
