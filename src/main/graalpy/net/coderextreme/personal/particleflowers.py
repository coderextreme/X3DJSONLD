import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False);
x3d.ConfigurationProperties.setStripTrailingZeroes(True);
x3d.ConfigurationProperties.setStripDefaultAttributes(True);
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
meta12.setContent("A flower particle system")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("identifier")
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/particleflowers.x3d")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.setTitle("particleflowers.x3d")

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Tour Views")
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))

Scene14.addChild(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChild(Background18)
Group19 = x3d.Group()
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
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material25.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBackTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottomTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFrontTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeftTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRightTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

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
field40.setName("a")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("2")

ComposedShader33.addField(field40)
field41 = x3d.field()
field41.setName("b")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("1")

ComposedShader33.addField(field41)
field42 = x3d.field()
field42.setName("c")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("5")

ComposedShader33.addField(field42)
field43 = x3d.field()
field43.setName("d")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("5")

ComposedShader33.addField(field43)
field44 = x3d.field()
field44.setName("tdelta")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("0")

ComposedShader33.addField(field44)
field45 = x3d.field()
field45.setName("pdelta")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("0")

ComposedShader33.addField(field45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"])
ShaderPart46.setType("VERTEX")

ComposedShader33.addParts(ShaderPart46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"])
ShaderPart47.setType("FRAGMENT")

ComposedShader33.addParts(ShaderPart47)

Appearance24.addShaders(ComposedShader33)

ParticleSystem20.setAppearance(Appearance24)
Sphere48 = x3d.Sphere()

ParticleSystem20.setGeometry(Sphere48)

Group19.addChild(ParticleSystem20)
Script49 = x3d.Script()
Script49.setDEF("Animate")
field50 = x3d.field()
field50.setName("translation")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

Script49.addField(field50)
field51 = x3d.field()
field51.setName("velocity")
field51.setAccessType("inputOutput")
field51.setType("SFVec3f")
field51.setValue("0 0 0")

Script49.addField(field51)
field52 = x3d.field()
field52.setName("set_fraction")
field52.setAccessType("inputOnly")
field52.setType("SFFloat")

Script49.addField(field52)
field53 = x3d.field()
field53.setName("a")
field53.setType("SFFloat")
field53.setAccessType("inputOutput")
field53.setValue("0.5")

Script49.addField(field53)
field54 = x3d.field()
field54.setName("b")
field54.setType("SFFloat")
field54.setAccessType("inputOutput")
field54.setValue("0.5")

Script49.addField(field54)
field55 = x3d.field()
field55.setName("c")
field55.setType("SFFloat")
field55.setAccessType("inputOutput")
field55.setValue("3")

Script49.addField(field55)
field56 = x3d.field()
field56.setName("d")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("3")

Script49.addField(field56)
field57 = x3d.field()
field57.setName("tdelta")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("0.5")

Script49.addField(field57)
field58 = x3d.field()
field58.setName("pdelta")
field58.setType("SFFloat")
field58.setAccessType("inputOutput")
field58.setValue("0.5")

Script49.addField(field58)

Script49.setSourceCode('''ecmascript:

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

Group19.addChild(Script49)
TimeSensor59 = x3d.TimeSensor()
TimeSensor59.setDEF("TourTime")
TimeSensor59.setCycleInterval(5)
TimeSensor59.setLoop(True)

Group19.addChild(TimeSensor59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("TourTime")
ROUTE60.setFromField("fraction_changed")
ROUTE60.setToNode("Animate")
ROUTE60.setToField("set_fraction")

Group19.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("a")
ROUTE61.setToNode("x_ite")
ROUTE61.setToField("a")

Group19.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("b")
ROUTE62.setToNode("x_ite")
ROUTE62.setToField("b")

Group19.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("c")
ROUTE63.setToNode("x_ite")
ROUTE63.setToField("c")

Group19.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("d")
ROUTE64.setToNode("x_ite")
ROUTE64.setToField("d")

Group19.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("pdelta")
ROUTE65.setToNode("x_ite")
ROUTE65.setToField("pdelta")

Group19.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("tdelta")
ROUTE66.setToNode("x_ite")
ROUTE66.setToField("tdelta")

Group19.addChild(ROUTE66)

Scene14.addChild(Group19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../personal/particleflowers.new.graalpy.x3d")
X3D0.toFileJSON("../personal/particleflowers.new.graalpy.json")
