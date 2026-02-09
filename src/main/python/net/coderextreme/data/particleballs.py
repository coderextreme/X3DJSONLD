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
ComposedShader29 = x3d.ComposedShader()
ComposedShader29.language = "GLSL"
ShaderPart30 = x3d.ShaderPart()
ShaderPart30.url = ["../shaders/x_iteparticles.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs"]

ComposedShader29.parts.append(ShaderPart30)
ShaderPart31 = x3d.ShaderPart(DEF="commonfs")
ShaderPart31.type = "FRAGMENT"
ShaderPart31.url = ["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]

ComposedShader29.parts.append(ShaderPart31)
field32 = x3d.field()
field32.accessType = "initializeOnly"
field32.type = "SFVec3f"
field32.name = "chromaticDispertion"
field32.value = [0.98,1,1.033]

ComposedShader29.field.append(field32)
field33 = x3d.field()
field33.accessType = "initializeOnly"
field33.type = "SFNode"
field33.name = "cube"
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture(USE="texture")

field33.children.append(ComposedCubeMapTexture34)

ComposedShader29.field.append(field33)
field35 = x3d.field()
field35.accessType = "initializeOnly"
field35.type = "SFFloat"
field35.name = "bias"
field35.value = 0.5

ComposedShader29.field.append(field35)
field36 = x3d.field()
field36.accessType = "initializeOnly"
field36.type = "SFFloat"
field36.name = "scale"
field36.value = 0.5

ComposedShader29.field.append(field36)
field37 = x3d.field()
field37.accessType = "initializeOnly"
field37.type = "SFFloat"
field37.name = "power"
field37.value = 2

ComposedShader29.field.append(field37)

Appearance20.shaders.append(ComposedShader29)

ParticleSystem16.appearance = Appearance20
Sphere38 = x3d.Sphere()

ParticleSystem16.geometry = Sphere38

Transform15.children.append(ParticleSystem16)

Scene10.children.append(Transform15)

X3D0.Scene = Scene10
f = open("../data/particleballs.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/particleballs.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/particleballs.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
