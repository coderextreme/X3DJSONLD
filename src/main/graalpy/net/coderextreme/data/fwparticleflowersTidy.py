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
meta9.setContent("A flower proto with configurable shaders")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d")

head1.addMeta(meta10)

X3D0.setHead(head1)
Scene11 = x3d.Scene()
WorldInfo12 = x3d.WorldInfo()
WorldInfo12.setTitle("particleflowers.x3d")

Scene11.addChild(WorldInfo12)
NavigationInfo13 = x3d.NavigationInfo()
NavigationInfo13.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene11.addChild(NavigationInfo13)
Viewpoint14 = x3d.Viewpoint()
Viewpoint14.setDescription("Tour Views")
Viewpoint14.setPosition(x3d.doubleToFloat([0,0,12]))

Scene11.addChild(Viewpoint14)
Background15 = x3d.Background()
Background15.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background15.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background15.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background15.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background15.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])
Background15.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

Scene11.addChild(Background15)
Transform16 = x3d.Transform()
ParticleSystem17 = x3d.ParticleSystem()
ParticleSystem17.setGeometryType("GEOMETRY")
ParticleSystem17.setMaxParticles(20)
ExplosionEmitter18 = x3d.ExplosionEmitter()
ExplosionEmitter18.setSpeed(2)
ExplosionEmitter18.setVariation(0.75)

ParticleSystem17.setEmitter(ExplosionEmitter18)
BoundedPhysicsModel19 = x3d.BoundedPhysicsModel()
Sphere20 = x3d.Sphere()
Sphere20.setRadius(100)

BoundedPhysicsModel19.setGeometry(Sphere20)

ParticleSystem17.addPhysics(BoundedPhysicsModel19)
Appearance21 = x3d.Appearance()
Material22 = x3d.Material()
Material22.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material22.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance21.setMaterial(Material22)
ComposedCubeMapTexture23 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture23.setDEF("texture")
ImageTexture24 = x3d.ImageTexture()
ImageTexture24.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture23.setFrontTexture(ImageTexture24)
ImageTexture25 = x3d.ImageTexture()
ImageTexture25.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture23.setBackTexture(ImageTexture25)
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture23.setLeftTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture23.setRightTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture23.setTopTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture23.setBottomTexture(ImageTexture29)

Appearance21.setTexture(ComposedCubeMapTexture23)
ComposedShader30 = x3d.ComposedShader()
ComposedShader30.setDEF("fw")
ComposedShader30.setLanguage("GLSL")
ShaderPart31 = x3d.ShaderPart()
ShaderPart31.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"])

ComposedShader30.addParts(ShaderPart31)
ShaderPart32 = x3d.ShaderPart()
ShaderPart32.setType("FRAGMENT")
ShaderPart32.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"])

ComposedShader30.addParts(ShaderPart32)
field33 = x3d.field()
field33.setAccessType("inputOutput")
field33.setType("SFVec3f")
field33.setName("chromaticDispertion")
field33.setValue("0.98 1 1.033")

ComposedShader30.addField(field33)
field34 = x3d.field()
field34.setAccessType("inputOutput")
field34.setType("SFNode")
field34.setName("cube")
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.setUSE("texture")

field34.addChild(ComposedCubeMapTexture35)

ComposedShader30.addField(field34)
field36 = x3d.field()
field36.setAccessType("inputOutput")
field36.setType("SFFloat")
field36.setName("bias")
field36.setValue("0.5")

ComposedShader30.addField(field36)
field37 = x3d.field()
field37.setAccessType("inputOutput")
field37.setType("SFFloat")
field37.setName("scale")
field37.setValue("0.5")

ComposedShader30.addField(field37)
field38 = x3d.field()
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setName("power")
field38.setValue("2")

ComposedShader30.addField(field38)
field39 = x3d.field()
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setName("a")
field39.setValue("2")

ComposedShader30.addField(field39)
field40 = x3d.field()
field40.setAccessType("inputOutput")
field40.setType("SFFloat")
field40.setName("b")
field40.setValue("1")

ComposedShader30.addField(field40)
field41 = x3d.field()
field41.setAccessType("inputOutput")
field41.setType("SFFloat")
field41.setName("c")
field41.setValue("5")

ComposedShader30.addField(field41)
field42 = x3d.field()
field42.setAccessType("inputOutput")
field42.setType("SFFloat")
field42.setName("d")
field42.setValue("5")

ComposedShader30.addField(field42)
field43 = x3d.field()
field43.setAccessType("inputOutput")
field43.setType("SFFloat")
field43.setName("tdelta")

ComposedShader30.addField(field43)
field44 = x3d.field()
field44.setAccessType("inputOutput")
field44.setType("SFFloat")
field44.setName("pdelta")

ComposedShader30.addField(field44)

Appearance21.addShaders(ComposedShader30)

ParticleSystem17.setAppearance(Appearance21)
Sphere45 = x3d.Sphere()

ParticleSystem17.setGeometry(Sphere45)

Transform16.addChild(ParticleSystem17)
Script46 = x3d.Script()
Script46.setDEF("Animate")
field47 = x3d.field()
field47.setAccessType("inputOutput")
field47.setType("SFVec3f")
field47.setName("translation")

Script46.addField(field47)
field48 = x3d.field()
field48.setAccessType("inputOutput")
field48.setType("SFVec3f")
field48.setName("velocity")

Script46.addField(field48)
field49 = x3d.field()
field49.setAccessType("inputOnly")
field49.setType("SFFloat")
field49.setName("set_fraction")

Script46.addField(field49)
field50 = x3d.field()
field50.setAccessType("inputOutput")
field50.setType("SFFloat")
field50.setName("a")
field50.setValue("0.5")

Script46.addField(field50)
field51 = x3d.field()
field51.setAccessType("inputOutput")
field51.setType("SFFloat")
field51.setName("b")
field51.setValue("0.5")

Script46.addField(field51)
field52 = x3d.field()
field52.setAccessType("inputOutput")
field52.setType("SFFloat")
field52.setName("c")
field52.setValue("3")

Script46.addField(field52)
field53 = x3d.field()
field53.setAccessType("inputOutput")
field53.setType("SFFloat")
field53.setName("d")
field53.setValue("3")

Script46.addField(field53)
field54 = x3d.field()
field54.setAccessType("inputOutput")
field54.setType("SFFloat")
field54.setName("tdelta")
field54.setValue("0.5")

Script46.addField(field54)
field55 = x3d.field()
field55.setAccessType("inputOutput")
field55.setType("SFFloat")
field55.setName("pdelta")
field55.setValue("0.5")

Script46.addField(field55)

Script46.setSourceCode('''ecmascript:

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

Transform16.addChild(Script46)

Scene11.addChild(Transform16)
TimeSensor56 = x3d.TimeSensor()
TimeSensor56.setDEF("TourTime")
TimeSensor56.setCycleInterval(5)
TimeSensor56.setLoop(True)

Scene11.addChild(TimeSensor56)
ROUTE57 = x3d.ROUTE()
ROUTE57.setFromNode("TourTime")
ROUTE57.setFromField("fraction_changed")
ROUTE57.setToNode("Animate")
ROUTE57.setToField("set_fraction")

Scene11.addChild(ROUTE57)
ROUTE58 = x3d.ROUTE()
ROUTE58.setFromNode("Animate")
ROUTE58.setFromField("a_changed")
ROUTE58.setToNode("fw")
ROUTE58.setToField("set_a")

Scene11.addChild(ROUTE58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("Animate")
ROUTE59.setFromField("b_changed")
ROUTE59.setToNode("fw")
ROUTE59.setToField("set_b")

Scene11.addChild(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("Animate")
ROUTE60.setFromField("c_changed")
ROUTE60.setToNode("fw")
ROUTE60.setToField("set_c")

Scene11.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("d_changed")
ROUTE61.setToNode("fw")
ROUTE61.setToField("set_d")

Scene11.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("pdelta_changed")
ROUTE62.setToNode("fw")
ROUTE62.setToField("set_pdelta")

Scene11.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("tdelta_changed")
ROUTE63.setToNode("fw")
ROUTE63.setToField("set_tdelta")

Scene11.addChild(ROUTE63)

X3D0.setScene(Scene11)
X3D0.toFileX3D("../data/fwparticleflowersTidy.new.graalpy.x3d")
X3D0.toFileJSON("../data/fwparticleflowersTidy.new.graalpy.x3dj")
