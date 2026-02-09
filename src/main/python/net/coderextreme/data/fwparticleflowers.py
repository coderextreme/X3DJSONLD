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
Background14.frontUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background14.backUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background14.leftUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background14.rightUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background14.topUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background14.bottomUrl = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

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
ImageTexture23.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture22.frontTexture = ImageTexture23
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture22.backTexture = ImageTexture24
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture22.leftTexture = ImageTexture25
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture22.rightTexture = ImageTexture26
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture22.topTexture = ImageTexture27
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.url = ["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture22.bottomTexture = ImageTexture28

Appearance20.texture = ComposedCubeMapTexture22
ComposedShader29 = x3d.ComposedShader(DEF="fw")
ComposedShader29.language = "GLSL"
ShaderPart30 = x3d.ShaderPart()
ShaderPart30.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"]

ComposedShader29.parts.append(ShaderPart30)
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.type = "FRAGMENT"
ShaderPart31.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]

ComposedShader29.parts.append(ShaderPart31)
field32 = x3d.field()
field32.accessType = "inputOutput"
field32.type = "SFVec3f"
field32.name = "chromaticDispertion"
field32.value = [0.98,1,1.033]

ComposedShader29.field.append(field32)
field33 = x3d.field()
field33.accessType = "inputOutput"
field33.type = "SFNode"
field33.name = "cube"
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture(USE="texture")

field33.children.append(ComposedCubeMapTexture34)

ComposedShader29.field.append(field33)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "SFFloat"
field35.name = "bias"
field35.value = 0.5

ComposedShader29.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "SFFloat"
field36.name = "scale"
field36.value = 0.5

ComposedShader29.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "power"
field37.value = 2

ComposedShader29.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "a"
field38.value = 2

ComposedShader29.field.append(field38)
field39 = x3d.field()
field39.accessType = "inputOutput"
field39.type = "SFFloat"
field39.name = "b"
field39.value = 1

ComposedShader29.field.append(field39)
field40 = x3d.field()
field40.accessType = "inputOutput"
field40.type = "SFFloat"
field40.name = "c"
field40.value = 5

ComposedShader29.field.append(field40)
field41 = x3d.field()
field41.accessType = "inputOutput"
field41.type = "SFFloat"
field41.name = "d"
field41.value = 5

ComposedShader29.field.append(field41)
field42 = x3d.field()
field42.accessType = "inputOutput"
field42.type = "SFFloat"
field42.name = "tdelta"

ComposedShader29.field.append(field42)
field43 = x3d.field()
field43.accessType = "inputOutput"
field43.type = "SFFloat"
field43.name = "pdelta"

ComposedShader29.field.append(field43)

Appearance20.shaders.append(ComposedShader29)

ParticleSystem16.appearance = Appearance20
Sphere44 = x3d.Sphere()

ParticleSystem16.geometry = Sphere44

Transform15.children.append(ParticleSystem16)
Script45 = x3d.Script(DEF="Animate")
field46 = x3d.field()
field46.accessType = "inputOutput"
field46.type = "SFVec3f"
field46.name = "translation"

Script45.field.append(field46)
field47 = x3d.field()
field47.accessType = "inputOutput"
field47.type = "SFVec3f"
field47.name = "velocity"

Script45.field.append(field47)
field48 = x3d.field()
field48.accessType = "inputOnly"
field48.type = "SFFloat"
field48.name = "set_fraction"

Script45.field.append(field48)
field49 = x3d.field()
field49.accessType = "inputOutput"
field49.type = "SFFloat"
field49.name = "a"
field49.value = 0.5

Script45.field.append(field49)
field50 = x3d.field()
field50.accessType = "inputOutput"
field50.type = "SFFloat"
field50.name = "b"
field50.value = 0.5

Script45.field.append(field50)
field51 = x3d.field()
field51.accessType = "inputOutput"
field51.type = "SFFloat"
field51.name = "c"
field51.value = 3

Script45.field.append(field51)
field52 = x3d.field()
field52.accessType = "inputOutput"
field52.type = "SFFloat"
field52.name = "d"
field52.value = 3

Script45.field.append(field52)
field53 = x3d.field()
field53.accessType = "inputOutput"
field53.type = "SFFloat"
field53.name = "tdelta"
field53.value = 0.5

Script45.field.append(field53)
field54 = x3d.field()
field54.accessType = "inputOutput"
field54.type = "SFFloat"
field54.name = "pdelta"
field54.value = 0.5

Script45.field.append(field54)

Script45.sourceCode = '''ecmascript:\n"+
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

Transform15.children.append(Script45)
TimeSensor55 = x3d.TimeSensor(DEF="TourTime")
TimeSensor55.cycleInterval = 5
TimeSensor55.loop = True

Transform15.children.append(TimeSensor55)

Scene10.children.append(Transform15)
ROUTE56 = x3d.ROUTE()
ROUTE56.fromNode = "TourTime"
ROUTE56.fromField = "fraction_changed"
ROUTE56.toNode = "Animate"
ROUTE56.toField = "set_fraction"

Scene10.children.append(ROUTE56)
ROUTE57 = x3d.ROUTE()
ROUTE57.fromNode = "Animate"
ROUTE57.fromField = "a_changed"
ROUTE57.toNode = "fw"
ROUTE57.toField = "set_a"

Scene10.children.append(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.fromNode = "Animate"
ROUTE58.fromField = "b_changed"
ROUTE58.toNode = "fw"
ROUTE58.toField = "set_b"

Scene10.children.append(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.fromNode = "Animate"
ROUTE59.fromField = "c_changed"
ROUTE59.toNode = "fw"
ROUTE59.toField = "set_c"

Scene10.children.append(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.fromNode = "Animate"
ROUTE60.fromField = "d_changed"
ROUTE60.toNode = "fw"
ROUTE60.toField = "set_d"

Scene10.children.append(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.fromNode = "Animate"
ROUTE61.fromField = "pdelta_changed"
ROUTE61.toNode = "fw"
ROUTE61.toField = "set_pdelta"

Scene10.children.append(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.fromNode = "Animate"
ROUTE62.fromField = "tdelta_changed"
ROUTE62.toNode = "fw"
ROUTE62.toField = "set_tdelta"

Scene10.children.append(ROUTE62)

X3D0.Scene = Scene10
f = open("../data/fwparticleflowers.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/fwparticleflowers.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/fwparticleflowers.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
