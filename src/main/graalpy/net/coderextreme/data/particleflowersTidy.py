import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
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
component5.setName("Grouping")
component5.setLevel(3)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("ParticleSystems")
component6.setLevel(3)

head1.addComponent(component6)
meta7 = x3d.meta()
meta7.setName("title")
meta7.setContent("particleflowers.x3d")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("creator")
meta8.setContent("John Carlson")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("description")
meta9.setContent("A flower particle system")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("Vim")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
WorldInfo13 = x3d.WorldInfo()
WorldInfo13.setTitle("particleflowers.x3d")

Scene12.addChild(WorldInfo13)
NavigationInfo14 = x3d.NavigationInfo()
NavigationInfo14.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene12.addChild(NavigationInfo14)
Viewpoint15 = x3d.Viewpoint()
Viewpoint15.setDescription("Tour Views")
Viewpoint15.setPosition(x3d.doubleToFloat([0,0,12]))

Scene12.addChild(Viewpoint15)
Background16 = x3d.Background()
Background16.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background16.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background16.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background16.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background16.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])
Background16.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

Scene12.addChild(Background16)
Group17 = x3d.Group()
ParticleSystem18 = x3d.ParticleSystem()
ParticleSystem18.setGeometryType("GEOMETRY")
ParticleSystem18.setMaxParticles(20)
ExplosionEmitter19 = x3d.ExplosionEmitter()
ExplosionEmitter19.setSpeed(2)
ExplosionEmitter19.setVariation(0.75)

ParticleSystem18.setEmitter(ExplosionEmitter19)
BoundedPhysicsModel20 = x3d.BoundedPhysicsModel()
Sphere21 = x3d.Sphere()
Sphere21.setRadius(100)

BoundedPhysicsModel20.setGeometry(Sphere21)

ParticleSystem18.addPhysics(BoundedPhysicsModel20)
Appearance22 = x3d.Appearance()
Material23 = x3d.Material()
Material23.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material23.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance22.setMaterial(Material23)
ComposedCubeMapTexture24 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture24.setDEF("texture")
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture24.setFrontTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture24.setBackTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture24.setLeftTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture24.setRightTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture24.setTopTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture24.setBottomTexture(ImageTexture30)

Appearance22.setTexture(ComposedCubeMapTexture24)
ComposedShader31 = x3d.ComposedShader()
ComposedShader31.setDEF("x_ite")
ComposedShader31.setLanguage("GLSL")
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"])

ComposedShader31.addParts(ShaderPart32)
ShaderPart33 = x3d.ShaderPart()
ShaderPart33.setType("FRAGMENT")
ShaderPart33.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"])

ComposedShader31.addParts(ShaderPart33)
field34 = x3d.field()
field34.setAccessType("initializeOnly")
field34.setType("SFVec3f")
field34.setName("chromaticDispertion")
field34.setValue("0.98 1 1.033")

ComposedShader31.addField(field34)
field35 = x3d.field()
field35.setAccessType("initializeOnly")
field35.setType("SFNode")
field35.setName("cube")
ComposedCubeMapTexture36 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture36.setUSE("texture")

field35.addChild(ComposedCubeMapTexture36)

ComposedShader31.addField(field35)
field37 = x3d.field()
field37.setAccessType("initializeOnly")
field37.setType("SFFloat")
field37.setName("bias")
field37.setValue("0.5")

ComposedShader31.addField(field37)
field38 = x3d.field()
field38.setAccessType("initializeOnly")
field38.setType("SFFloat")
field38.setName("scale")
field38.setValue("0.5")

ComposedShader31.addField(field38)
field39 = x3d.field()
field39.setAccessType("initializeOnly")
field39.setType("SFFloat")
field39.setName("power")
field39.setValue("2")

ComposedShader31.addField(field39)
field40 = x3d.field()
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setName("a")
field40.setValue("2")

ComposedShader31.addField(field40)
field41 = x3d.field()
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setName("b")
field41.setValue("1")

ComposedShader31.addField(field41)
field42 = x3d.field()
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setName("c")
field42.setValue("5")

ComposedShader31.addField(field42)
field43 = x3d.field()
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setName("d")
field43.setValue("5")

ComposedShader31.addField(field43)
field44 = x3d.field()
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setName("tdelta")

ComposedShader31.addField(field44)
field45 = x3d.field()
field45.setAccessType("inputOutput")
field45.setType("SFFloat")
field45.setName("pdelta")

ComposedShader31.addField(field45)

Appearance22.addShaders(ComposedShader31)

ParticleSystem18.setAppearance(Appearance22)
Sphere46 = x3d.Sphere()

ParticleSystem18.setGeometry(Sphere46)

Group17.addChild(ParticleSystem18)
Script47 = x3d.Script()
Script47.setDEF("Animate")
field48 = x3d.field()
field48.setAccessType("inputOutput")
field48.setType("SFVec3f")
field48.setName("translation")

Script47.addField(field48)
field49 = x3d.field()
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setName("velocity")

Script47.addField(field49)
field50 = x3d.field()
field50.setAccessType("inputOnly")
field50.setType("SFFloat")
field50.setName("set_fraction")

Script47.addField(field50)
field51 = x3d.field()
field51.setAccessType("inputOutput")
field51.setType("SFFloat")
field51.setName("a")
field51.setValue("0.5")

Script47.addField(field51)
field52 = x3d.field()
field52.setAccessType("inputOutput")
field52.setType("SFFloat")
field52.setName("b")
field52.setValue("0.5")

Script47.addField(field52)
field53 = x3d.field()
field53.setAccessType("inputOutput")
field53.setType("SFFloat")
field53.setName("c")
field53.setValue("3")

Script47.addField(field53)
field54 = x3d.field()
field54.setAccessType("inputOutput")
field54.setType("SFFloat")
field54.setName("d")
field54.setValue("3")

Script47.addField(field54)
field55 = x3d.field()
field55.setAccessType("inputOutput")
field55.setType("SFFloat")
field55.setName("tdelta")
field55.setValue("0.5")

Script47.addField(field55)
field56 = x3d.field()
field56.setAccessType("inputOutput")
field56.setType("SFFloat")
field56.setName("pdelta")
field56.setValue("0.5")

Script47.addField(field56)

Script47.setSourceCode('''ecmascript:

			function initialize() {
			    translation = new SFVec3f(0, 0, 0);
			    velocity = new SFVec3f(
			    	Math.random() - 0.5,
				Math.random() - 0.5,
				Math.random() - 0.5);
			}
			function set_fraction() {
			    translation = new SFVec3f(
			    	translation.x + velocity.x,
				translation.y + velocity.y,
				translation.z + velocity.z);
			    for (var j = 0; j <= 2; j++) {
				    if (Math.abs(translation.x) > 10) {
					initialize();
				    } else if (Math.abs(translation.y) > 10) {
					initialize();
				    } else if (Math.abs(translation.z) > 10) {
					initialize();
				    } else {
					velocity.x += Math.random() * 0.2 - 0.1;
					velocity.y += Math.random() * 0.2 - 0.1;
					velocity.z += Math.random() * 0.2 - 0.1;
				    }
			    }
			    animate_flowers();
			}

			function animate_flowers(fraction, eventTime) {
				var choice = Math.floor(Math.random() * 4);
				switch (choice) {
				case 0:
					a += Math.random() * 0.2 - 0.1;
					break;
				case 1:
					b += Math.random() * 0.2 - 0.1;
					break;
				case 2:
					c += Math.random() * 2 - 1;
					break;
				case 3:
					d += Math.random() * 2 - 1;
					break;
				}
				tdelta = tdelta + 0.05;
				pdelta = pdelta + 0.05;
				if (a > 1) {
					a =  0.5;
				}
				if (b > 1) {
					b =  0.5;
				}
				if (c < 1) {
					c =  4;
				}
				if (d < 1) {
					d =  4;
				}
				if (c > 10) {
					c = 4;
				}
				if (d > 10) {
					d = 4;
				}
			}''')

Group17.addChild(Script47)
TimeSensor57 = x3d.TimeSensor()
TimeSensor57.setDEF("TourTime")
TimeSensor57.setCycleInterval(5)
TimeSensor57.setLoop(True)

Group17.addChild(TimeSensor57)

Scene12.addChild(Group17)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("TourTime")
ROUTE58.setFromField("fraction_changed")
ROUTE58.setToNode("Animate")
ROUTE58.setToField("set_fraction")

Scene12.addChild(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("Animate")
ROUTE59.setFromField("a_changed")
ROUTE59.setToNode("x_ite")
ROUTE59.setToField("set_a")

Scene12.addChild(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("Animate")
ROUTE60.setFromField("b_changed")
ROUTE60.setToNode("x_ite")
ROUTE60.setToField("set_b")

Scene12.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("c_changed")
ROUTE61.setToNode("x_ite")
ROUTE61.setToField("set_c")

Scene12.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("d_changed")
ROUTE62.setToNode("x_ite")
ROUTE62.setToField("set_d")

Scene12.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("pdelta_changed")
ROUTE63.setToNode("x_ite")
ROUTE63.setToField("set_pdelta")

Scene12.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("tdelta_changed")
ROUTE64.setToNode("x_ite")
ROUTE64.setToField("set_tdelta")

Scene12.addChild(ROUTE64)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/particleflowersTidy.new.graalpy.x3d")
X3D0.toFileJSON("../data/particleflowersTidy.new.graalpy.x3dj")
