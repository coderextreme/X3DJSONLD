print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
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
meta10.content = "variationalflowers.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "creator"
meta11.content = "John Carlson"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "description"
meta12.content = "A flower particle system"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "variationalflowers.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene14.children.append(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.description = "Tour Views"
Viewpoint17.position = [0,0,12]

Scene14.children.append(Viewpoint17)
Background18 = x3d.Background()
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene14.children.append(Background18)
Transform19 = x3d.Transform()
ParticleSystem20 = x3d.ParticleSystem()
ParticleSystem20.maxParticles = 20
ParticleSystem20.geometryType = "GEOMETRY"
ParticleSystem20.children.append(x3d.Comment("""* values - array of MFFloats to pass to ComposedShader"""))
ParticleSystem20.children.append(x3d.Comment("""* variations in values - array of MFFloats to pass to ComposedShader that varies values"""))
VariationPhysicsModel21 = x3d.VariationPhysicsModel()
VariationPhysicsModel21.values = "2 2 5 5 0 0"
VariationPhysicsModel21.variations = "0.2 0.1 0.3 0.3 0.01 0.01"

ParticleSystem20.iationPhysicsModel.append(VariationPhysicsModel21)
ExplosionEmitter22 = x3d.ExplosionEmitter()
ExplosionEmitter22.speed = 1
ExplosionEmitter22.variation = 0.75

ParticleSystem20.emitter = ExplosionEmitter22
Sphere23 = x3d.Sphere()

ParticleSystem20.geometry = Sphere23
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.diffuseColor = [0.7,0.7,0.7]
Material25.specularColor = [0.5,0.5,0.5]

Appearance24.material = Material25
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture26.backTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture26.bottomTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture26.frontTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture26.leftTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture26.rightTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture26.topTexture = ImageTexture32

Appearance24.texture = ComposedCubeMapTexture26
ComposedShader33 = x3d.ComposedShader(DEF="x_ite")
ComposedShader33.language = "GLSL"
field34 = x3d.field()
field34.name = "chromaticDispertion"
field34.accessType = "initializeOnly"
field34.type = "SFVec3f"
field34.value = [0.98,1,1.033]

ComposedShader33.field.append(field34)
field35 = x3d.field()
field35.name = "cube"
field35.type = "SFNode"
field35.accessType = "initializeOnly"
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture(USE="texture")

field35.children.append(ComposedCubeMapTexture36)

ComposedShader33.field.append(field35)
field37 = x3d.field()
field37.name = "bias"
field37.accessType = "initializeOnly"
field37.type = "SFFloat"
field37.value = 0.5

ComposedShader33.field.append(field37)
field38 = x3d.field()
field38.name = "scale"
field38.accessType = "initializeOnly"
field38.type = "SFFloat"
field38.value = 0.5

ComposedShader33.field.append(field38)
field39 = x3d.field()
field39.name = "power"
field39.accessType = "initializeOnly"
field39.type = "SFFloat"
field39.value = 2

ComposedShader33.field.append(field39)
field40 = x3d.field()
field40.name = "x3d_ParticleValues"
field40.type = "MFFloat"
field40.accessType = "inputOutput"
field40.value = [2,1,4,4,0,0]

ComposedShader33.field.append(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.url = ["../shaders/x_ite_variations.vs"]
ShaderPart41.type = "VERTEX"

ComposedShader33.parts.append(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.url = ["../shaders/commonnew.fs"]
ShaderPart42.type = "FRAGMENT"

ComposedShader33.parts.append(ShaderPart42)

Appearance24.shaders.append(ComposedShader33)

ParticleSystem20.appearance = Appearance24

Transform19.children.append(ParticleSystem20)
Script43 = x3d.Script(DEF="Animate")
field44 = x3d.field()
field44.name = "set_fraction"
field44.accessType = "inputOnly"
field44.type = "SFFloat"

Script43.field.append(field44)
field45 = x3d.field()
field45.name = "values"
field45.type = "MFFloat"
field45.accessType = "inputOutput"
field45.value = [2,2,5,5,0,0]

Script43.field.append(field45)
field46 = x3d.field()
field46.name = "variations"
field46.type = "MFFloat"
field46.accessType = "inputOutput"
field46.value = [0.2,0.1,0.3,0.3,0.01,0.01]

Script43.field.append(field46)
field47 = x3d.field()
field47.name = "lastframe"
field47.type = "SFFloat"
field47.accessType = "inputOutput"
field47.value = 0

Script43.field.append(field47)
field48 = x3d.field()
field48.name = "updaterate"
field48.type = "SFFloat"
field48.accessType = "inputOutput"
field48.value = 0.1

Script43.field.append(field48)

Script43.sourceCode = '''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}'''

Transform19.children.append(Script43)
TimeSensor49 = x3d.TimeSensor(DEF="TourTime")
TimeSensor49.cycleInterval = 45
TimeSensor49.loop = True

Transform19.children.append(TimeSensor49)
ROUTE50 = x3d.ROUTE()
ROUTE50.fromNode = "TourTime"
ROUTE50.fromField = "fraction_changed"
ROUTE50.toNode = "Animate"
ROUTE50.toField = "set_fraction"

Transform19.children.append(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.fromNode = "Animate"
ROUTE51.fromField = "values"
ROUTE51.toNode = "x_ite"
ROUTE51.toField = "x3d_ParticleValues"

Transform19.children.append(ROUTE51)

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/variationalflowers2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/variationalflowers2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/variationalflowers2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
