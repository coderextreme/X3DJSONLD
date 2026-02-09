print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
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

X3D0.head = head1
Scene10 = x3d.Scene()
WorldInfo11 = x3d.WorldInfo()
WorldInfo11.title = "particleflowers.x3d"

Scene10.children.append(WorldInfo11)
NavigationInfo12 = x3d.NavigationInfo()
NavigationInfo12.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene10.children.append(NavigationInfo12)
Viewpoint13 = x3d.Viewpoint()
Viewpoint13.description = "Tour Views"
Viewpoint13.position = [0,0,12]

Scene10.children.append(Viewpoint13)
Background14 = x3d.Background()
Background14.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background14.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background14.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background14.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background14.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background14.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene10.children.append(Background14)
Transform15 = x3d.Transform()
ParticleSystem16 = x3d.ParticleSystem()
ParticleSystem16.geometryType = "GEOMETRY"
ParticleSystem16.maxParticles = 20
ExplosionEmitter17 = x3d.ExplosionEmitter()
ExplosionEmitter17.speed = 2
ExplosionEmitter17.variation = 0.75

ParticleSystem16.emitter = ExplosionEmitter17
BoundedPhysicsModel18 = x3d.BoundedPhysicsModel()
Sphere19 = x3d.Sphere()
Sphere19.radius = 100

BoundedPhysicsModel18.geometry = Sphere19

ParticleSystem16.physics.append(BoundedPhysicsModel18)
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.diffuseColor = [0.7,0.7,0.7]
Material21.specularColor = [0.5,0.5,0.5]

Appearance20.material = Material21
ComposedCubeMapTexture22 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture23 = x3d.ImageTexture()
ImageTexture23.url = ["../resources/images/all_probes/stpeters_cross/stpeters_from.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture22.frontTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture22.backTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture22.leftTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture22.rightTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture22.topTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture22.bottomTexture = ImageTexture28

Appearance20.texture = ComposedCubeMapTexture22
ComposedShader29 = x3d.ComposedShader(DEF="shader")
ComposedShader29.language = "GLSL"
ShaderPart30 = x3d.ShaderPart()
ShaderPart30.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]

ComposedShader29.parts.append(ShaderPart30)
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.type = "FRAGMENT"
ShaderPart31.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"]

ComposedShader29.parts.append(ShaderPart31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFInt32"
field32.name = "cube"

ComposedShader29.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFVec3f"
field33.name = "chromaticDispertion"
field33.value = [0.98,1,1.033]

ComposedShader29.field.append(field33)
field34 = x3d.field()
field34.accessType = "inputOutput"
field34.type = "SFFloat"
field34.name = "bias"
field34.value = 0.5

ComposedShader29.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "scale"
field35.value = 0.5

ComposedShader29.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "power"
field36.value = 2

ComposedShader29.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "a"
field37.value = 2

ComposedShader29.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "b"
field38.value = 1

ComposedShader29.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "c"
field39.value = 5

ComposedShader29.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "d"
field40.value = 5

ComposedShader29.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "tdelta"

ComposedShader29.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.name = "pdelta"

ComposedShader29.field.append(field42)

Appearance20.shaders.append(ComposedShader29)

ParticleSystem16.appearance = Appearance20
Sphere43 = x3d.Sphere()

ParticleSystem16.geometry = Sphere43

Transform15.children.append(ParticleSystem16)
Script44 = x3d.Script(DEF="Animate")
field45 = x3d.field()
field45.accessType = "inputOutput"
field45.type = "SFVec3f"
field45.name = "translation"

Script44.field.append(field45)
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFVec3f"
field46.name = "velocity"

Script44.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOnly"
field47.type = "SFFloat"
field47.name = "set_fraction"

Script44.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOutput"
field48.type = "SFFloat"
field48.name = "a"
field48.value = 0.5

Script44.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFFloat"
field49.name = "b"
field49.value = 0.5

Script44.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFFloat"
field50.name = "c"
field50.value = 3

Script44.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "d"
field51.value = 3

Script44.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFFloat"
field52.name = "tdelta"
field52.value = 0.5

Script44.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFFloat"
field53.name = "pdelta"
field53.value = 0.5

Script44.field.append(field53)

Script44.sourceCode = '''ecmascript:\n"+
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

Transform15.children.append(Script44)
TimeSensor54 = x3d.TimeSensor(DEF="TourTime")
TimeSensor54.cycleInterval = 5
TimeSensor54.loop = True

Transform15.children.append(TimeSensor54)

Scene10.children.append(Transform15)
ROUTE55 = x3d.ROUTE()
ROUTE55.fromNode = "TourTime"
ROUTE55.fromField = "fraction_changed"
ROUTE55.toNode = "Animate"
ROUTE55.toField = "set_fraction"

Scene10.children.append(ROUTE55)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "Animate"
ROUTE56.fromField = "a_changed"
ROUTE56.toNode = "shader"
ROUTE56.toField = "set_a"

Scene10.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Animate"
ROUTE57.fromField = "b_changed"
ROUTE57.toNode = "shader"
ROUTE57.toField = "set_b"

Scene10.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Animate"
ROUTE58.fromField = "c_changed"
ROUTE58.toNode = "shader"
ROUTE58.toField = "set_c"

Scene10.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "d_changed"
ROUTE59.toNode = "shader"
ROUTE59.toField = "set_d"

Scene10.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "pdelta_changed"
ROUTE60.toNode = "shader"
ROUTE60.toField = "set_pdelta"

Scene10.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "tdelta_changed"
ROUTE61.toNode = "shader"
ROUTE61.toField = "set_tdelta"

Scene10.children.append(ROUTE61)

X3D0.Scene = Scene10
f = open("../data/cgeparticleflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/cgeparticleflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/cgeparticleflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
