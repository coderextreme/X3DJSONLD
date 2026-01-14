print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
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
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene14.children.append(Background18)
Transform19 = x3d.Transform()
ParticleSystem20 = x3d.ParticleSystem()
ParticleSystem20.maxParticles = 100
ParticleSystem20.geometryType = "GEOMETRY"
"""* values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values * lastFrame - last frame that was rendered (0 for default) * updateRate - update rate is amount of time between frames"""
"""<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>"""
ExplosionEmitter21 = x3d.ExplosionEmitter()
ExplosionEmitter21.speed = 1
ExplosionEmitter21.variation = 0.75

ParticleSystem20.emitter = ExplosionEmitter21
Sphere22 = x3d.Sphere()

ParticleSystem20.geometry = Sphere22
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
"""<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""
"""<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>"""
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.DEF = "x_ite"
ComposedShader32.language = "GLSL"
field33 = x3d.field()
field33.name = "chromaticDispertion"
field33.accessType = "initializeOnly"
field33.type = "SFVec3f"
field33.value = [0.98,1,1.033]

ComposedShader32.field.append(field33)
field34 = x3d.field()
field34.name = "cube"
field34.type = "SFNode"
field34.accessType = "initializeOnly"
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.USE = "texture"

field34.children.append(ComposedCubeMapTexture35)

ComposedShader32.field.append(field34)
field36 = x3d.field()
field36.name = "bias"
field36.accessType = "initializeOnly"
field36.type = "SFFloat"
field36.value = 0.5

ComposedShader32.field.append(field36)
field37 = x3d.field()
field37.name = "scale"
field37.accessType = "initializeOnly"
field37.type = "SFFloat"
field37.value = 0.5

ComposedShader32.field.append(field37)
field38 = x3d.field()
field38.name = "power"
field38.accessType = "initializeOnly"
field38.type = "SFFloat"
field38.value = 2

ComposedShader32.field.append(field38)
field39 = x3d.field()
field39.name = "x3d_ParticleValues"
field39.type = "MFFloat"
field39.accessType = "inputOutput"
field39.value = [2,1,4,4,0,0]

ComposedShader32.field.append(field39)
ShaderPart40 = x3d.ShaderPart()
ShaderPart40.url = ["../shaders/x_ite_variations.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs"]
ShaderPart40.type = "VERTEX"

ComposedShader32.parts.append(ShaderPart40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.url = ["../shaders/commonnew.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]
ShaderPart41.type = "FRAGMENT"

ComposedShader32.parts.append(ShaderPart41)

Appearance23.shaders.append(ComposedShader32)

ParticleSystem20.appearance = Appearance23

Transform19.children.append(ParticleSystem20)
Script42 = x3d.Script()
Script42.DEF = "Animate"
field43 = x3d.field()
field43.name = "set_fraction"
field43.accessType = "inputOnly"
field43.type = "SFFloat"

Script42.field.append(field43)
field44 = x3d.field()
field44.name = "values"
field44.type = "MFFloat"
field44.accessType = "inputOutput"
field44.value = [2,2,5,5,0,0]

Script42.field.append(field44)
field45 = x3d.field()
field45.name = "variations"
field45.type = "MFFloat"
field45.accessType = "inputOutput"
field45.value = [0.2,0.1,0.3,0.3,0.01,0.01]

Script42.field.append(field45)
field46 = x3d.field()
field46.name = "lastframe"
field46.type = "SFFloat"
field46.accessType = "inputOutput"
field46.value = 0

Script42.field.append(field46)
field47 = x3d.field()
field47.name = "updaterate"
field47.type = "SFFloat"
field47.accessType = "inputOutput"
field47.value = 0.1

Script42.field.append(field47)

Script42.sourceCode = '''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}'''

Transform19.children.append(Script42)
TimeSensor48 = x3d.TimeSensor()
TimeSensor48.DEF = "TourTime"
TimeSensor48.cycleInterval = 45
TimeSensor48.loop = True

Transform19.children.append(TimeSensor48)
ROUTE49 = x3d.ROUTE()
ROUTE49.fromNode = "TourTime"
ROUTE49.fromField = "fraction_changed"
ROUTE49.toNode = "Animate"
ROUTE49.toField = "set_fraction"

Transform19.children.append(ROUTE49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "Animate"
ROUTE50.fromField = "values"
ROUTE50.toNode = "x_ite"
ROUTE50.toField = "x3d_ParticleValues"

Transform19.children.append(ROUTE50)

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/variationalflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/variationalflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/variationalflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
