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
meta9.content = "A flower particle system"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "identifier"
meta10.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "generator"
meta11.content = "Vim"

head1.children.append(meta11)

X3D0.head = head1
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.title = "particleflowers.x3d"

Scene12.children.append(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()
NavigationInfo14.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene12.children.append(NavigationInfo14)
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.description = "Tour Views"
Viewpoint15.position = [0,0,12]

Scene12.children.append(Viewpoint15)
Background16 = x3d.Background()
Background16.frontUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background16.backUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background16.leftUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background16.rightUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background16.topUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background16.bottomUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene12.children.append(Background16)
Group17 = x3d.Group()
ParticleSystem18 = x3d.ParticleSystem()
ParticleSystem18.geometryType = "GEOMETRY"
ParticleSystem18.maxParticles = 20
ExplosionEmitter19 = x3d.ExplosionEmitter()
ExplosionEmitter19.speed = 2
ExplosionEmitter19.variation = 0.75

ParticleSystem18.emitter = ExplosionEmitter19
BoundedPhysicsModel20 = x3d.BoundedPhysicsModel()
Sphere21 = x3d.Sphere()
Sphere21.radius = 100

BoundedPhysicsModel20.geometry = Sphere21

ParticleSystem18.physics.append(BoundedPhysicsModel20)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.diffuseColor = [0.7,0.7,0.7]
Material23.specularColor = [0.5,0.5,0.5]

Appearance22.material = Material23
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.DEF = "texture"
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture24.frontTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture24.backTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture24.leftTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture24.rightTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture24.topTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture24.bottomTexture = ImageTexture30

Appearance22.texture = ComposedCubeMapTexture24
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.DEF = "x_ite"
ComposedShader31.language = "GLSL"
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]

ComposedShader31.parts.append(ShaderPart32)
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.type = "FRAGMENT"
ShaderPart33.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"]

ComposedShader31.parts.append(ShaderPart33)
field34 = x3d.field()
field34.accessType = "initializeOnly"
field34.type = "SFVec3f"
field34.name = "chromaticDispertion"
field34.value = [0.98,1,1.033]

ComposedShader31.field.append(field34)
field35 = x3d.field()
field35.accessType = "initializeOnly"
field35.type = "SFNode"
field35.name = "cube"
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture36.USE = "texture"

field35.children.append(ComposedCubeMapTexture36)

ComposedShader31.field.append(field35)
field37 = x3d.field()
field37.accessType = "initializeOnly"
field37.type = "SFFloat"
field37.name = "bias"
field37.value = 0.5

ComposedShader31.field.append(field37)
field38 = x3d.field()
field38.accessType = "initializeOnly"
field38.type = "SFFloat"
field38.name = "scale"
field38.value = 0.5

ComposedShader31.field.append(field38)
field39 = x3d.field()
field39.accessType = "initializeOnly"
field39.type = "SFFloat"
field39.name = "power"
field39.value = 2

ComposedShader31.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "a"
field40.value = 2

ComposedShader31.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "b"
field41.value = 1

ComposedShader31.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.name = "c"
field42.value = 5

ComposedShader31.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.name = "d"
field43.value = 5

ComposedShader31.field.append(field43)
field44 = x3d.field()
field44.accessType = "inputOutput"
field44.type = "SFFloat"
field44.name = "tdelta"

ComposedShader31.field.append(field44)
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFFloat"
field45.name = "pdelta"

ComposedShader31.field.append(field45)

Appearance22.shaders.append(ComposedShader31)

ParticleSystem18.appearance = Appearance22
Sphere46 = x3d.Sphere()

ParticleSystem18.geometry = Sphere46

Group17.children.append(ParticleSystem18)
Script47 = x3d.Script()
Script47.DEF = "Animate"
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFVec3f"
field48.name = "translation"

Script47.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.name = "velocity"

Script47.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOnly"
field50.type = "SFFloat"
field50.name = "set_fraction"

Script47.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "a"
field51.value = 0.5

Script47.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFFloat"
field52.name = "b"
field52.value = 0.5

Script47.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFFloat"
field53.name = "c"
field53.value = 3

Script47.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOutput"
field54.type = "SFFloat"
field54.name = "d"
field54.value = 3

Script47.field.append(field54)
field55 = x3d.field()
field55.accessType = "inputOutput"
field55.type = "SFFloat"
field55.name = "tdelta"
field55.value = 0.5

Script47.field.append(field55)
field56 = x3d.field()
field56.accessType = "inputOutput"
field56.type = "SFFloat"
field56.name = "pdelta"
field56.value = 0.5

Script47.field.append(field56)

Script47.sourceCode = '''ecmascript:\n"+
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

Group17.children.append(Script47)
TimeSensor57 = x3d.TimeSensor()
TimeSensor57.DEF = "TourTime"
TimeSensor57.cycleInterval = 5
TimeSensor57.loop = True

Group17.children.append(TimeSensor57)

Scene12.children.append(Group17)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "TourTime"
ROUTE58.fromField = "fraction_changed"
ROUTE58.toNode = "Animate"
ROUTE58.toField = "set_fraction"

Scene12.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "a_changed"
ROUTE59.toNode = "x_ite"
ROUTE59.toField = "set_a"

Scene12.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "b_changed"
ROUTE60.toNode = "x_ite"
ROUTE60.toField = "set_b"

Scene12.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "c_changed"
ROUTE61.toNode = "x_ite"
ROUTE61.toField = "set_c"

Scene12.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "d_changed"
ROUTE62.toNode = "x_ite"
ROUTE62.toField = "set_d"

Scene12.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "pdelta_changed"
ROUTE63.toNode = "x_ite"
ROUTE63.toField = "set_pdelta"

Scene12.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Animate"
ROUTE64.fromField = "tdelta_changed"
ROUTE64.toNode = "x_ite"
ROUTE64.toField = "set_tdelta"

Scene12.children.append(ROUTE64)

X3D0.Scene = Scene12
f = open("../data/particleflowersTidy.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/particleflowersTidy.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/particleflowersTidy.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
