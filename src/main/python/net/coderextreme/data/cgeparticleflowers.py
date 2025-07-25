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
Background18.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background18.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]
Background18.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background18.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background18.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background18.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

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
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture27.backTexture = ImageTexture28
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture27.bottomTexture = ImageTexture29
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.url = ["../resources/images/all_probes/stpeters_cross/stpeters_from.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture27.frontTexture = ImageTexture30
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture27.leftTexture = ImageTexture31
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture27.rightTexture = ImageTexture32
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture27.topTexture = ImageTexture33

Appearance25.texture = ComposedCubeMapTexture27
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.DEF = "shader"
ComposedShader34.language = "GLSL"
field35 = x3d.field()
field35.name = "cube"
field35.type = "SFInt32"
field35.accessType = "inputOutput"
field35.value = 0

ComposedShader34.field.append(field35)
field36 = x3d.field()
field36.name = "chromaticDispertion"
field36.accessType = "initializeOnly"
field36.type = "SFVec3f"
field36.value = [0.98,1,1.033]

ComposedShader34.field.append(field36)
field37 = x3d.field()
field37.name = "bias"
field37.type = "SFFloat"
field37.accessType = "inputOutput"
field37.value = 0.5

ComposedShader34.field.append(field37)
field38 = x3d.field()
field38.name = "scale"
field38.type = "SFFloat"
field38.accessType = "inputOutput"
field38.value = 0.5

ComposedShader34.field.append(field38)
field39 = x3d.field()
field39.name = "power"
field39.type = "SFFloat"
field39.accessType = "inputOutput"
field39.value = 2

ComposedShader34.field.append(field39)
field40 = x3d.field()
field40.name = "a"
field40.type = "SFFloat"
field40.accessType = "inputOutput"
field40.value = 2

ComposedShader34.field.append(field40)
field41 = x3d.field()
field41.name = "b"
field41.type = "SFFloat"
field41.accessType = "inputOutput"
field41.value = 1

ComposedShader34.field.append(field41)
field42 = x3d.field()
field42.name = "c"
field42.type = "SFFloat"
field42.accessType = "inputOutput"
field42.value = 5

ComposedShader34.field.append(field42)
field43 = x3d.field()
field43.name = "d"
field43.type = "SFFloat"
field43.accessType = "inputOutput"
field43.value = 5

ComposedShader34.field.append(field43)
field44 = x3d.field()
field44.name = "tdelta"
field44.type = "SFFloat"
field44.accessType = "inputOutput"
field44.value = 0

ComposedShader34.field.append(field44)
field45 = x3d.field()
field45.name = "pdelta"
field45.type = "SFFloat"
field45.accessType = "inputOutput"
field45.value = 0

ComposedShader34.field.append(field45)
"""<field name='cube' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field>"""
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]
ShaderPart46.type = "VERTEX"

ComposedShader34.parts.append(ShaderPart46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.type = "FRAGMENT"
ShaderPart47.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"]

ComposedShader34.parts.append(ShaderPart47)

Appearance25.shaders.append(ComposedShader34)

ParticleSystem20.appearance = Appearance25

Transform19.children.append(ParticleSystem20)
Script48 = x3d.Script()
Script48.DEF = "Animate"
field49 = x3d.field()
field49.name = "translation"
field49.accessType = "inputOutput"
field49.type = "SFVec3f"
field49.value = [0,0,0]

Script48.field.append(field49)
field50 = x3d.field()
field50.name = "velocity"
field50.accessType = "inputOutput"
field50.type = "SFVec3f"
field50.value = [0,0,0]

Script48.field.append(field50)
field51 = x3d.field()
field51.name = "set_fraction"
field51.accessType = "inputOnly"
field51.type = "SFFloat"

Script48.field.append(field51)
field52 = x3d.field()
field52.name = "a"
field52.type = "SFFloat"
field52.accessType = "inputOutput"
field52.value = 0.5

Script48.field.append(field52)
field53 = x3d.field()
field53.name = "b"
field53.type = "SFFloat"
field53.accessType = "inputOutput"
field53.value = 0.5

Script48.field.append(field53)
field54 = x3d.field()
field54.name = "c"
field54.type = "SFFloat"
field54.accessType = "inputOutput"
field54.value = 3

Script48.field.append(field54)
field55 = x3d.field()
field55.name = "d"
field55.type = "SFFloat"
field55.accessType = "inputOutput"
field55.value = 3

Script48.field.append(field55)
field56 = x3d.field()
field56.name = "tdelta"
field56.type = "SFFloat"
field56.accessType = "inputOutput"
field56.value = 0.5

Script48.field.append(field56)
field57 = x3d.field()
field57.name = "pdelta"
field57.type = "SFFloat"
field57.accessType = "inputOutput"
field57.value = 0.5

Script48.field.append(field57)

Script48.sourceCode = '''ecmascript:\n"+
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

Transform19.children.append(Script48)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.DEF = "TourTime"
TimeSensor58.cycleInterval = 5
TimeSensor58.loop = True

Transform19.children.append(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "TourTime"
ROUTE59.fromField = "fraction_changed"
ROUTE59.toNode = "Animate"
ROUTE59.toField = "set_fraction"

Transform19.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "a"
ROUTE60.toNode = "shader"
ROUTE60.toField = "a"

Transform19.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "b"
ROUTE61.toNode = "shader"
ROUTE61.toField = "b"

Transform19.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "c"
ROUTE62.toNode = "shader"
ROUTE62.toField = "c"

Transform19.children.append(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.fromNode = "Animate"
ROUTE63.fromField = "d"
ROUTE63.toNode = "shader"
ROUTE63.toField = "d"

Transform19.children.append(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.fromNode = "Animate"
ROUTE64.fromField = "pdelta"
ROUTE64.toNode = "shader"
ROUTE64.toField = "pdelta"

Transform19.children.append(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.fromNode = "Animate"
ROUTE65.fromField = "tdelta"
ROUTE65.toNode = "shader"
ROUTE65.toField = "tdelta"

Transform19.children.append(ROUTE65)

Scene14.children.append(Transform19)

X3D0.Scene = Scene14
f = open("../data/cgeparticleflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/cgeparticleflowers.new.python.json", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
