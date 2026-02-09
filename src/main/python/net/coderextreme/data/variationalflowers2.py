print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "variationalflowers.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "A flower particle system"

head1.children.append(meta4)

X3D0.head = head1
Scene5 = x3d.Scene()
WorldInfo6 = x3d.WorldInfo()
WorldInfo6.title = "variationalflowers.x3d"

Scene5.children.append(WorldInfo6)
NavigationInfo7 = x3d.NavigationInfo()
NavigationInfo7.type = ["ANY","EXAMINE","FLY","LOOKAT"]

Scene5.children.append(NavigationInfo7)
Viewpoint8 = x3d.Viewpoint()
Viewpoint8.description = "Tour Views"
Viewpoint8.position = [0,0,12]

Scene5.children.append(Viewpoint8)
Background9 = x3d.Background()
Background9.frontUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]
Background9.backUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]
Background9.leftUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]
Background9.rightUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]
Background9.topUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]
Background9.bottomUrl = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

Scene5.children.append(Background9)
Transform10 = x3d.Transform()
ParticleSystem11 = x3d.ParticleSystem()
ParticleSystem11.geometryType = "GEOMETRY"
ParticleSystem11.maxParticles = 20
ExplosionEmitter12 = x3d.ExplosionEmitter()
ExplosionEmitter12.speed = 1
ExplosionEmitter12.variation = 0.75

ParticleSystem11.emitter = ExplosionEmitter12
Appearance13 = x3d.Appearance()
Material14 = x3d.Material()
Material14.diffuseColor = [0.7,0.7,0.7]
Material14.specularColor = [0.5,0.5,0.5]

Appearance13.material = Material14
ComposedCubeMapTexture15 = x3d.ComposedCubeMapTexture(DEF="texture")
ImageTexture16 = x3d.ImageTexture()
ImageTexture16.url = ["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]

ComposedCubeMapTexture15.frontTexture = ImageTexture16
ImageTexture17 = x3d.ImageTexture()
ImageTexture17.url = ["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]

ComposedCubeMapTexture15.backTexture = ImageTexture17
ImageTexture18 = x3d.ImageTexture()
ImageTexture18.url = ["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]

ComposedCubeMapTexture15.leftTexture = ImageTexture18
ImageTexture19 = x3d.ImageTexture()
ImageTexture19.url = ["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]

ComposedCubeMapTexture15.rightTexture = ImageTexture19
ImageTexture20 = x3d.ImageTexture()
ImageTexture20.url = ["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]

ComposedCubeMapTexture15.topTexture = ImageTexture20
ImageTexture21 = x3d.ImageTexture()
ImageTexture21.url = ["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]

ComposedCubeMapTexture15.bottomTexture = ImageTexture21

Appearance13.texture = ComposedCubeMapTexture15
ComposedShader22 = x3d.ComposedShader(DEF="x_ite")
ComposedShader22.language = "GLSL"
ShaderPart23 = x3d.ShaderPart()
ShaderPart23.url = ["../shaders/x_ite_variations.vs"]

ComposedShader22.parts.append(ShaderPart23)
ShaderPart24 = x3d.ShaderPart()
ShaderPart24.type = "FRAGMENT"
ShaderPart24.url = ["../shaders/commonnew.fs"]

ComposedShader22.parts.append(ShaderPart24)
field25 = x3d.field()
field25.accessType = "initializeOnly"
field25.type = "SFVec3f"
field25.name = "chromaticDispertion"
field25.value = [0.98,1,1.033]

ComposedShader22.field.append(field25)
field26 = x3d.field()
field26.accessType = "initializeOnly"
field26.type = "SFNode"
field26.name = "cube"
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture(USE="texture")

field26.children.append(ComposedCubeMapTexture27)

ComposedShader22.field.append(field26)
field28 = x3d.field()
field28.accessType = "initializeOnly"
field28.type = "SFFloat"
field28.name = "bias"
field28.value = 0.5

ComposedShader22.field.append(field28)
field29 = x3d.field()
field29.accessType = "initializeOnly"
field29.type = "SFFloat"
field29.name = "scale"
field29.value = 0.5

ComposedShader22.field.append(field29)
field30 = x3d.field()
field30.accessType = "initializeOnly"
field30.type = "SFFloat"
field30.name = "power"
field30.value = 2

ComposedShader22.field.append(field30)
field31 = x3d.field()
field31.accessType = "inputOutput"
field31.type = "MFFloat"
field31.name = "x3d_ParticleValues"
field31.value = [2,1,4,4,0,0]

ComposedShader22.field.append(field31)

Appearance13.shaders.append(ComposedShader22)

ParticleSystem11.appearance = Appearance13
Sphere32 = x3d.Sphere()

ParticleSystem11.geometry = Sphere32

Transform10.children.append(ParticleSystem11)
Script33 = x3d.Script(DEF="Animate")
field34 = x3d.field()
field34.accessType = "inputOnly"
field34.type = "SFFloat"
field34.name = "set_fraction"

Script33.field.append(field34)
field35 = x3d.field()
field35.accessType = "inputOutput"
field35.type = "MFFloat"
field35.name = "values"
field35.value = [2,2,5,5,0,0]

Script33.field.append(field35)
field36 = x3d.field()
field36.accessType = "inputOutput"
field36.type = "MFFloat"
field36.name = "variations"
field36.value = [0.2,0.1,0.3,0.3,0.01,0.01]

Script33.field.append(field36)
field37 = x3d.field()
field37.accessType = "inputOutput"
field37.type = "SFFloat"
field37.name = "lastframe"

Script33.field.append(field37)
field38 = x3d.field()
field38.accessType = "inputOutput"
field38.type = "SFFloat"
field38.name = "updaterate"
field38.value = 0.1

Script33.field.append(field38)

Script33.sourceCode = '''ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}'''

Transform10.children.append(Script33)
TimeSensor39 = x3d.TimeSensor(DEF="TourTime")
TimeSensor39.cycleInterval = 45
TimeSensor39.loop = True

Transform10.children.append(TimeSensor39)

Scene5.children.append(Transform10)
ROUTE40 = x3d.ROUTE()
ROUTE40.fromNode = "TourTime"
ROUTE40.fromField = "fraction_changed"
ROUTE40.toNode = "Animate"
ROUTE40.toField = "set_fraction"

Scene5.children.append(ROUTE40)
ROUTE41 = x3d.ROUTE()
ROUTE41.fromNode = "Animate"
ROUTE41.fromField = "values_changed"
ROUTE41.toNode = "x_ite"
ROUTE41.toField = "set_x3d_ParticleValues"

Scene5.children.append(ROUTE41)

X3D0.Scene = Scene5
f = open("../data/variationalflowers2.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/variationalflowers2.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/variationalflowers2.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
