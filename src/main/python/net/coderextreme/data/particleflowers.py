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
meta12.content = "A flower particle system"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "identifier"
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "generator"
meta14.content = "Vim"

head1.children.append(meta14)

X3D0.head = head1
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.title = "particleflowers.x3d"

Scene15.children.append(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo()
NavigationInfo17.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene15.children.append(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.description = "Tour Views"
Viewpoint18.position = [0,0,12]

Scene15.children.append(Viewpoint18)
Background19 = x3d.Background()
Background19.backUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background19.bottomUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background19.frontUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background19.leftUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background19.rightUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background19.topUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

Scene15.children.append(Background19)
Group20 = x3d.Group()
ParticleSystem21 = x3d.ParticleSystem()
ParticleSystem21.maxParticles = 20
ParticleSystem21.geometryType = "GEOMETRY"
BoundedPhysicsModel22 = x3d.BoundedPhysicsModel()
Sphere23 = x3d.Sphere()
Sphere23.radius = 100

BoundedPhysicsModel22.geometry = Sphere23

ParticleSystem21.physics.append(BoundedPhysicsModel22)
ExplosionEmitter24 = x3d.ExplosionEmitter()
ExplosionEmitter24.speed = 2
ExplosionEmitter24.variation = 0.75

ParticleSystem21.emitter = ExplosionEmitter24
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.diffuseColor = [0.7,0.7,0.7]
Material26.specularColor = [0.5,0.5,0.5]

Appearance25.material = Material26
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture27.backTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture27.bottomTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture27.frontTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture27.leftTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture27.rightTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture27.topTexture = ImageTexture33

Appearance25.texture = ComposedCubeMapTexture27
ComposedShader34 = x3d.ComposedShader(DEF="x_ite")
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
ComposedCubeMapTexture37 = x3d.ComposedCubeMapTexture(USE="texture")

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
field41 = x3d.field()
field41.name = "a"
field41.type = "SFFloat"
field41.accessType = "inputOutput"
field41.value = 2

ComposedShader34.field.append(field41)
field42 = x3d.field()
field42.name = "b"
field42.type = "SFFloat"
field42.accessType = "inputOutput"
field42.value = 1

ComposedShader34.field.append(field42)
field43 = x3d.field()
field43.name = "c"
field43.type = "SFFloat"
field43.accessType = "inputOutput"
field43.value = 5

ComposedShader34.field.append(field43)
field44 = x3d.field()
field44.name = "d"
field44.type = "SFFloat"
field44.accessType = "inputOutput"
field44.value = 5

ComposedShader34.field.append(field44)
field45 = x3d.field()
field45.name = "tdelta"
field45.type = "SFFloat"
field45.accessType = "inputOutput"
field45.value = 0

ComposedShader34.field.append(field45)
field46 = x3d.field()
field46.name = "pdelta"
field46.type = "SFFloat"
field46.accessType = "inputOutput"
field46.value = 0

ComposedShader34.field.append(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]
ShaderPart47.type = "VERTEX"

ComposedShader34.parts.append(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"]
ShaderPart48.type = "FRAGMENT"

ComposedShader34.parts.append(ShaderPart48)

Appearance25.shaders.append(ComposedShader34)

ParticleSystem21.appearance = Appearance25
Sphere49 = x3d.Sphere()

ParticleSystem21.geometry = Sphere49

Group20.children.append(ParticleSystem21)
Script50 = x3d.Script(DEF="Animate")
field51 = x3d.field()
field51.name = "translation"
field51.accessType = "inputOutput"
field51.type = "SFVec3f"
field51.value = [0,0,0]

Script50.field.append(field51)
field52 = x3d.field()
field52.name = "velocity"
field52.accessType = "inputOutput"
field52.type = "SFVec3f"
field52.value = [0,0,0]

Script50.field.append(field52)
field53 = x3d.field()
field53.name = "set_fraction"
field53.accessType = "inputOnly"
field53.type = "SFFloat"

Script50.field.append(field53)
field54 = x3d.field()
field54.name = "a"
field54.type = "SFFloat"
field54.accessType = "inputOutput"
field54.value = 0.5

Script50.field.append(field54)
field55 = x3d.field()
field55.name = "b"
field55.type = "SFFloat"
field55.accessType = "inputOutput"
field55.value = 0.5

Script50.field.append(field55)
field56 = x3d.field()
field56.name = "c"
field56.type = "SFFloat"
field56.accessType = "inputOutput"
field56.value = 3

Script50.field.append(field56)
field57 = x3d.field()
field57.name = "d"
field57.type = "SFFloat"
field57.accessType = "inputOutput"
field57.value = 3

Script50.field.append(field57)
field58 = x3d.field()
field58.name = "tdelta"
field58.type = "SFFloat"
field58.accessType = "inputOutput"
field58.value = 0.5

Script50.field.append(field58)
field59 = x3d.field()
field59.name = "pdelta"
field59.type = "SFFloat"
field59.accessType = "inputOutput"
field59.value = 0.5

Script50.field.append(field59)

Script50.sourceCode = '''ecmascript:\n"+
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

Group20.children.append(Script50)
TimeSensor60 = x3d.TimeSensor(DEF="TourTime")
TimeSensor60.cycleInterval = 5
TimeSensor60.loop = True

Group20.children.append(TimeSensor60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "TourTime"
ROUTE61.fromField = "fraction_changed"
ROUTE61.toNode = "Animate"
ROUTE61.toField = "set_fraction"

Group20.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "a"
ROUTE62.toNode = "x_ite"
ROUTE62.toField = "a"

Group20.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "b"
ROUTE63.toNode = "x_ite"
ROUTE63.toField = "b"

Group20.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Animate"
ROUTE64.fromField = "c"
ROUTE64.toNode = "x_ite"
ROUTE64.toField = "c"

Group20.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Animate"
ROUTE65.fromField = "d"
ROUTE65.toNode = "x_ite"
ROUTE65.toField = "d"

Group20.children.append(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.fromNode = "Animate"
ROUTE66.fromField = "pdelta"
ROUTE66.toNode = "x_ite"
ROUTE66.toField = "pdelta"

Group20.children.append(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.fromNode = "Animate"
ROUTE67.fromField = "tdelta"
ROUTE67.toNode = "x_ite"
ROUTE67.toField = "tdelta"

Group20.children.append(ROUTE67)

Scene15.children.append(Group20)

X3D0.Scene = Scene15
f = open("../data/particleflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/particleflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/particleflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
