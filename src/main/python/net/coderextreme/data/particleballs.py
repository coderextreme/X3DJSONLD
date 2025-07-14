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
component9 = x3d.component()
component9.name = "ParticleSystems"
component9.level = 3

head1.children.append(component9)
meta10 = x3d.meta()
meta10.name = "title"
meta10.content = "particleflowers.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "A flower proto with configurable shaders"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "particleflowers.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene14.children.append(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.description = "Tour Views"
Viewpoint17.position = [0,0,12]

Scene14.children.append(Viewpoint17)
Background18 = x3d.Background()
Background18.backUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene14.children.append(Background18)
Transform19 = x3d.Transform()
ParticleSystem20 = x3d.ParticleSystem()
ParticleSystem20.maxParticles = 20
ParticleSystem20.geometryType = "GEOMETRY"
BoundedPhysicsModel21 = x3d.BoundedPhysicsModel()
Sphere22 = x3d.Sphere()
Sphere22.radius = 100

BoundedPhysicsModel21.geometry = Sphere22

ParticleSystem20.physics.append(BoundedPhysicsModel21)
ExplosionEmitter23 = x3d.ExplosionEmitter()
ExplosionEmitter23.speed = 2
ExplosionEmitter23.variation = 0.75

ParticleSystem20.emitter = ExplosionEmitter23
"""<Shape>"""
Sphere24 = x3d.Sphere()

ParticleSystem20.geometry = Sphere24
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [0.7,0.7,0.7]
Material26.specularColor = [0.5,0.5,0.5]

Appearance25.material = Material26
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture27.DEF = "texture"
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture27.backTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture27.bottomTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture27.frontTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture27.leftTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture27.rightTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture27.topTexture = ImageTexture33

Appearance25.texture = ComposedCubeMapTexture27
"""<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""
"""<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>"""
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.language = "GLSL"
field35 = x3d.field()
field35.name = "chromaticDispertion"
field35.accessType = "initializeOnly"
field35.type = "SFVec3f"
field35.value = [0.98,1,1.033]

ComposedShader34.field.append(field35)
field36 = x3d.field()
field36.name = "cube"
field36.type = "SFNode"
field36.accessType = "initializeOnly"
ComposedCubeMapTexture37 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture37.USE = "texture"

field36.children.append(ComposedCubeMapTexture37)

ComposedShader34.field.append(field36)
field38 = x3d.field()
field38.name = "bias"
field38.accessType = "initializeOnly"
field38.type = "SFFloat"
field38.value = 0.5

ComposedShader34.field.append(field38)
field39 = x3d.field()
field39.name = "scale"
field39.accessType = "initializeOnly"
field39.type = "SFFloat"
field39.value = 0.5

ComposedShader34.field.append(field39)
field40 = x3d.field()
field40.name = "power"
field40.accessType = "initializeOnly"
field40.type = "SFFloat"
field40.value = 2

ComposedShader34.field.append(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.url = ["../shaders/x_iteparticles.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs"]
ShaderPart41.type = "VERTEX"

ComposedShader34.parts.append(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.DEF = "commonfs"
ShaderPart42.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]
ShaderPart42.type = "FRAGMENT"

ComposedShader34.parts.append(ShaderPart42)

Appearance25.shaders.append(ComposedShader34)

ParticleSystem20.appearance = Appearance25

Transform19.children.append(ParticleSystem20)
"""</Shape>"""

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/particleballs.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/particleballs.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
