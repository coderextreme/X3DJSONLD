import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("EnvironmentalEffects")
component2.setLevel(3)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("Shaders")
component3.setLevel(1)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("CubeMapTexturing")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("Texturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Rendering")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Grouping")
component7.setLevel(3)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Core")
component8.setLevel(1)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("ParticleSystems")
component9.setLevel(3)

head1.addComponent(component9)
meta10 = x3d.meta()
meta10.setName("title")
meta10.setContent("particleflowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("A flower proto with configurable shaders")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("particleflowers.x3d")

Scene14.addChildren(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChildren(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Tour Views")
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))

Scene14.addChildren(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChildren(Background18)
Transform19 = x3d.Transform()
ParticleSystem20 = x3d.ParticleSystem()
ParticleSystem20.setMaxParticles(20)
ParticleSystem20.setGeometryType("GEOMETRY")
BoundedPhysicsModel21 = x3d.BoundedPhysicsModel()
Sphere22 = x3d.Sphere()
Sphere22.setRadius(100)

BoundedPhysicsModel21.setGeometry(Sphere22)

ParticleSystem20.addPhysics(BoundedPhysicsModel21)
ExplosionEmitter23 = x3d.ExplosionEmitter()
ExplosionEmitter23.setSpeed(2)
ExplosionEmitter23.setVariation(0.75)

ParticleSystem20.setEmitter(ExplosionEmitter23)
#<Shape>
Sphere24 = x3d.Sphere()

ParticleSystem20.setGeometry(Sphere24)
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material26.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance25.setMaterial(Material26)
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture27.setDEF("texture")
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture27.setBackTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture27.setBottomTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture27.setFrontTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture27.setLeftTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture27.setRightTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture27.setTopTexture(ImageTexture33)

Appearance25.setTexture(ComposedCubeMapTexture27)
#<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
#<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setLanguage("GLSL")
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader34.addField(field35)
field36 = x3d.field()
field36.setName("cube")
field36.setType("SFNode")
field36.setAccessType("initializeOnly")
ComposedCubeMapTexture37 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture37.setUSE("texture")

field36.addChildren(ComposedCubeMapTexture37)

ComposedShader34.addField(field36)
field38 = x3d.field()
field38.setName("bias")
field38.setAccessType("initializeOnly")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = x3d.field()
field39.setName("scale")
field39.setAccessType("initializeOnly")
field39.setType("SFFloat")
field39.setValue("0.5")

ComposedShader34.addField(field39)
field40 = x3d.field()
field40.setName("power")
field40.setAccessType("initializeOnly")
field40.setType("SFFloat")
field40.setValue("2")

ComposedShader34.addField(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setUrl(["../shaders/x_iteparticles.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs"])
ShaderPart41.setType("VERTEX")

ComposedShader34.addParts(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setDEF("commonfs")
ShaderPart42.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"])
ShaderPart42.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart42)

Appearance25.addShaders(ComposedShader34)

ParticleSystem20.setAppearance(Appearance25)

Transform19.addChildren(ParticleSystem20)
#</Shape>

Scene14.addChildren(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/particleballs.new.python.x3d")
X3D0.toFileJSON("../data/particleballs.new.python.json")
