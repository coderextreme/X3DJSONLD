import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.1")
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
meta10.setContent("variationalflowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("creator")
meta11.setContent("John Carlson")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("description")
meta12.setContent("A flower particle system")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("variationalflowers.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Tour Views")
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))

Scene14.addChild(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChild(Background18)
Transform19 = x3d.Transform()
ParticleSystem20 = x3d.ParticleSystem()
ParticleSystem20.setMaxParticles(20)
ParticleSystem20.setGeometryType("GEOMETRY")

ParticleSystem20.addComments(x3d.CommentsBlock("""* values - array of MFFloats to pass to ComposedShader"""))

ParticleSystem20.addComments(x3d.CommentsBlock("""* variations in values - array of MFFloats to pass to ComposedShader that varies values"""))
VariationPhysicsModel21 = x3d.VariationPhysicsModel()
VariationPhysicsModel21.setValues("2 2 5 5 0 0")
VariationPhysicsModel21.setVariations("0.2 0.1 0.3 0.3 0.01 0.01")

ParticleSystem20.addVariationPhysicsModel(VariationPhysicsModel21)
ExplosionEmitter22 = x3d.ExplosionEmitter()
ExplosionEmitter22.setSpeed(1)
ExplosionEmitter22.setVariation(0.75)

ParticleSystem20.setEmitter(ExplosionEmitter22)
Sphere23 = x3d.Sphere()

ParticleSystem20.setGeometry(Sphere23)
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material25.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBackTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottomTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFrontTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeftTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRightTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTopTexture(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.setDEF("x_ite")
ComposedShader33.setLanguage("GLSL")
field34 = x3d.field()
field34.setName("chromaticDispertion")
field34.setAccessType("initializeOnly")
field34.setType("SFVec3f")
field34.setValue("0.98 1 1.033")

ComposedShader33.addField(field34)
field35 = x3d.field()
field35.setName("cube")
field35.setType("SFNode")
field35.setAccessType("initializeOnly")
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChild(ComposedCubeMapTexture36)

ComposedShader33.addField(field35)
field37 = x3d.field()
field37.setName("bias")
field37.setAccessType("initializeOnly")
field37.setType("SFFloat")
field37.setValue("0.5")

ComposedShader33.addField(field37)
field38 = x3d.field()
field38.setName("scale")
field38.setAccessType("initializeOnly")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader33.addField(field38)
field39 = x3d.field()
field39.setName("power")
field39.setAccessType("initializeOnly")
field39.setType("SFFloat")
field39.setValue("2")

ComposedShader33.addField(field39)
field40 = x3d.field()
field40.setName("x3d_ParticleValues")
field40.setType("MFFloat")
field40.setAccessType("inputOutput")
field40.setValue("2 1 4 4 0 0")

ComposedShader33.addField(field40)
ShaderPart41 = x3d.ShaderPart()
ShaderPart41.setUrl(["../shaders/x_ite_variations.vs"])
ShaderPart41.setType("VERTEX")

ComposedShader33.addParts(ShaderPart41)
ShaderPart42 = x3d.ShaderPart()
ShaderPart42.setUrl(["../shaders/commonnew.fs"])
ShaderPart42.setType("FRAGMENT")

ComposedShader33.addParts(ShaderPart42)

Appearance24.addShaders(ComposedShader33)

ParticleSystem20.setAppearance(Appearance24)

Transform19.addChild(ParticleSystem20)
Script43 = x3d.Script()
Script43.setDEF("Animate")
field44 = x3d.field()
field44.setName("set_fraction")
field44.setAccessType("inputOnly")
field44.setType("SFFloat")

Script43.addField(field44)
field45 = x3d.field()
field45.setName("values")
field45.setType("MFFloat")
field45.setAccessType("inputOutput")
field45.setValue("2 2 5 5 0 0")

Script43.addField(field45)
field46 = x3d.field()
field46.setName("variations")
field46.setType("MFFloat")
field46.setAccessType("inputOutput")
field46.setValue("0.2 0.1 0.3 0.3 0.01 0.01")

Script43.addField(field46)
field47 = x3d.field()
field47.setName("lastframe")
field47.setType("SFFloat")
field47.setAccessType("inputOutput")
field47.setValue("0")

Script43.addField(field47)
field48 = x3d.field()
field48.setName("updaterate")
field48.setType("SFFloat")
field48.setAccessType("inputOutput")
field48.setValue("0.1")

Script43.addField(field48)

Script43.setSourceCode('''ecmascript:
			function set_fraction(f, tm) {
			    if (lastframe + updaterate < tm) {
			  	lastframe = tm;
				for (let v in values) {
					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];
				}
			    }
			}''')

Transform19.addChild(Script43)
TimeSensor49 = x3d.TimeSensor()
TimeSensor49.setDEF("TourTime")
TimeSensor49.setCycleInterval(45)
TimeSensor49.setLoop(True)

Transform19.addChild(TimeSensor49)
ROUTE50 = x3d.ROUTE()
ROUTE50.setFromNode("TourTime")
ROUTE50.setFromField("fraction_changed")
ROUTE50.setToNode("Animate")
ROUTE50.setToField("set_fraction")

Transform19.addChild(ROUTE50)
ROUTE51 = x3d.ROUTE()
ROUTE51.setFromNode("Animate")
ROUTE51.setFromField("values")
ROUTE51.setToNode("x_ite")
ROUTE51.setToField("x3d_ParticleValues")

Transform19.addChild(ROUTE51)

Scene14.addChild(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/variationalflowers2.new.graalpy.x3d")
X3D0.toFileJSON("../data/variationalflowers2.new.graalpy.x3dj")
