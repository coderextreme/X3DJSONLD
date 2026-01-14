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
component5.name = "Grouping"
component5.level = 3

head1.children.append(component5)
component6 = x3d.component()
component6.name = "ParticleSystems"
component6.level = 3

head1.children.append(component6)
meta7 = x3d.meta()
meta7.name = "title"
meta7.content = "particleflowers.x3d"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "creator"
meta8.content = "John Carlson"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "description"
meta9.content = "A flower proto with configurable shaders"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"

head1.children.append(meta10)

X3D0.head = head1
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.title = "particleflowers.x3d"

Scene11.children.append(WorldInfo12)
NavigationInfo13 = x3d.NavigationInfo()
NavigationInfo13.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene11.children.append(NavigationInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.description = "Tour Views"
Viewpoint14.position = [0,0,12]

Scene11.children.append(Viewpoint14)
Background15 = x3d.Background()
Background15.frontUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background15.backUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background15.leftUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background15.rightUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background15.topUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background15.bottomUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene11.children.append(Background15)
Transform16 = x3d.Transform()
ParticleSystem17 = x3d.ParticleSystem()
ParticleSystem17.geometryType = "GEOMETRY"
ParticleSystem17.maxParticles = 20
ExplosionEmitter18 = x3d.ExplosionEmitter()
ExplosionEmitter18.speed = 2
ExplosionEmitter18.variation = 0.75

ParticleSystem17.emitter = ExplosionEmitter18
BoundedPhysicsModel19 = x3d.BoundedPhysicsModel()
Sphere20 = x3d.Sphere()
Sphere20.radius = 100

BoundedPhysicsModel19.geometry = Sphere20

ParticleSystem17.physics.append(BoundedPhysicsModel19)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.diffuseColor = [0.7,0.7,0.7]
Material22.specularColor = [0.5,0.5,0.5]

Appearance21.material = Material22
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.DEF = "texture"
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture23.frontTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture23.backTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture23.leftTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture23.rightTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture23.topTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture23.bottomTexture = ImageTexture29

Appearance21.texture = ComposedCubeMapTexture23
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.DEF = "fw"
ComposedShader30.language = "GLSL"
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"]

ComposedShader30.parts.append(ShaderPart31)
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.type = "FRAGMENT"
ShaderPart32.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]

ComposedShader30.parts.append(ShaderPart32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFVec3f"
field33.name = "chromaticDispertion"
field33.value = [0.98,1,1.033]

ComposedShader30.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFNode"
field34.name = "cube"
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.USE = "texture"

field34.children.append(ComposedCubeMapTexture35)

ComposedShader30.field.append(field34)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "bias"
field36.value = 0.5

ComposedShader30.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "scale"
field37.value = 0.5

ComposedShader30.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "power"
field38.value = 2

ComposedShader30.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "a"
field39.value = 2

ComposedShader30.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "b"
field40.value = 1

ComposedShader30.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "c"
field41.value = 5

ComposedShader30.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.name = "d"
field42.value = 5

ComposedShader30.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.name = "tdelta"

ComposedShader30.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFFloat"
field44.name = "pdelta"

ComposedShader30.field.append(field44)

Appearance21.shaders.append(ComposedShader30)

ParticleSystem17.appearance = Appearance21
Sphere45 = x3d.Sphere()

ParticleSystem17.geometry = Sphere45

Transform16.children.append(ParticleSystem17)
Script46 = x3d.Script()
Script46.DEF = "Animate"
field47 = x3d.field()
field47.accessType = "inputOutput"
field47.type = "SFVec3f"
field47.name = "translation"

Script46.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFVec3f"
field48.name = "velocity"

Script46.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOnly"
field49.type = "SFFloat"
field49.name = "set_fraction"

Script46.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFFloat"
field50.name = "a"
field50.value = 0.5

Script46.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "b"
field51.value = 0.5

Script46.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFFloat"
field52.name = "c"
field52.value = 3

Script46.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFFloat"
field53.name = "d"
field53.value = 3

Script46.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOutput"
field54.type = "SFFloat"
field54.name = "tdelta"
field54.value = 0.5

Script46.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFFloat"
field55.name = "pdelta"
field55.value = 0.5

Script46.field.append(field55)

Script46.sourceCode = '''ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.05;\n"+
"				pdelta = pdelta + 0.05;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}'''

Transform16.children.append(Script46)

Scene11.children.append(Transform16)
TimeSensor56 = x3d.TimeSensor()
TimeSensor56.DEF = "TourTime"
TimeSensor56.cycleInterval = 5
TimeSensor56.loop = True

Scene11.children.append(TimeSensor56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "TourTime"
ROUTE57.fromField = "fraction_changed"
ROUTE57.toNode = "Animate"
ROUTE57.toField = "set_fraction"

Scene11.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Animate"
ROUTE58.fromField = "a_changed"
ROUTE58.toNode = "fw"
ROUTE58.toField = "set_a"

Scene11.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "b_changed"
ROUTE59.toNode = "fw"
ROUTE59.toField = "set_b"

Scene11.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "c_changed"
ROUTE60.toNode = "fw"
ROUTE60.toField = "set_c"

Scene11.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "d_changed"
ROUTE61.toNode = "fw"
ROUTE61.toField = "set_d"

Scene11.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "pdelta_changed"
ROUTE62.toNode = "fw"
ROUTE62.toField = "set_pdelta"

Scene11.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "tdelta_changed"
ROUTE63.toNode = "fw"
ROUTE63.toField = "set_tdelta"

Scene11.children.append(ROUTE63)

X3D0.Scene = Scene11
f = open("../data/fwparticleflowersTidy.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/fwparticleflowersTidy.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/fwparticleflowersTidy.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
