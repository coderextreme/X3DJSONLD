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
meta13.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("Vim")

head1.addMeta(meta14)

X3D0.setHead(head1)
Scene15 = x3d.Scene()
WorldInfo16 = x3d.WorldInfo()
WorldInfo16.setTitle("particleflowers.x3d")

Scene15.addChild(WorldInfo16)
NavigationInfo17 = x3d.NavigationInfo()
NavigationInfo17.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene15.addChild(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("Tour Views")
Viewpoint18.setPosition(x3d.doubleToFloat([0,0,12]))

Scene15.addChild(Viewpoint18)
Background19 = x3d.Background()
Background19.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background19.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background19.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background19.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background19.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background19.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene15.addChild(Background19)
Group20 = x3d.Group()
ParticleSystem21 = x3d.ParticleSystem()
ParticleSystem21.setMaxParticles(20)
ParticleSystem21.setGeometryType("GEOMETRY")
BoundedPhysicsModel22 = x3d.BoundedPhysicsModel()
Sphere23 = x3d.Sphere()
Sphere23.setRadius(100)

BoundedPhysicsModel22.setGeometry(Sphere23)

ParticleSystem21.addPhysics(BoundedPhysicsModel22)
ExplosionEmitter24 = x3d.ExplosionEmitter()
ExplosionEmitter24.setSpeed(2)
ExplosionEmitter24.setVariation(0.75)

ParticleSystem21.setEmitter(ExplosionEmitter24)
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material26.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance25.setMaterial(Material26)
ComposedCubeMapTexture27 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture27.setDEF("texture")
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture27.setBackTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture27.setBottomTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture27.setFrontTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture27.setLeftTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture27.setRightTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture27.setTopTexture(ImageTexture33)

Appearance25.setTexture(ComposedCubeMapTexture27)
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setDEF("x_ite")
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

field36.addChild(ComposedCubeMapTexture37)

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
field41 = x3d.field()
field41.setName("a")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("2")

ComposedShader34.addField(field41)
field42 = x3d.field()
field42.setName("b")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("1")

ComposedShader34.addField(field42)
field43 = x3d.field()
field43.setName("c")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("5")

ComposedShader34.addField(field43)
field44 = x3d.field()
field44.setName("d")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("5")

ComposedShader34.addField(field44)
field45 = x3d.field()
field45.setName("tdelta")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("0")

ComposedShader34.addField(field45)
field46 = x3d.field()
field46.setName("pdelta")
field46.setType("SFFloat")
field46.setAccessType("inputOutput")
field46.setValue("0")

ComposedShader34.addField(field46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"])
ShaderPart47.setType("VERTEX")

ComposedShader34.addParts(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"])
ShaderPart48.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart48)

Appearance25.addShaders(ComposedShader34)

ParticleSystem21.setAppearance(Appearance25)
Sphere49 = x3d.Sphere()

ParticleSystem21.setGeometry(Sphere49)

Group20.addChild(ParticleSystem21)
Script50 = x3d.Script()
Script50.setDEF("Animate")
field51 = x3d.field()
field51.setName("translation")
field51.setAccessType("inputOutput")
field51.setType("SFVec3f")
field51.setValue("0 0 0")

Script50.addField(field51)
field52 = x3d.field()
field52.setName("velocity")
field52.setAccessType("inputOutput")
field52.setType("SFVec3f")
field52.setValue("0 0 0")

Script50.addField(field52)
field53 = x3d.field()
field53.setName("set_fraction")
field53.setAccessType("inputOnly")
field53.setType("SFFloat")

Script50.addField(field53)
field54 = x3d.field()
field54.setName("a")
field54.setType("SFFloat")
field54.setAccessType("inputOutput")
field54.setValue("0.5")

Script50.addField(field54)
field55 = x3d.field()
field55.setName("b")
field55.setType("SFFloat")
field55.setAccessType("inputOutput")
field55.setValue("0.5")

Script50.addField(field55)
field56 = x3d.field()
field56.setName("c")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("3")

Script50.addField(field56)
field57 = x3d.field()
field57.setName("d")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("3")

Script50.addField(field57)
field58 = x3d.field()
field58.setName("tdelta")
field58.setType("SFFloat")
field58.setAccessType("inputOutput")
field58.setValue("0.5")

Script50.addField(field58)
field59 = x3d.field()
field59.setName("pdelta")
field59.setType("SFFloat")
field59.setAccessType("inputOutput")
field59.setValue("0.5")

Script50.addField(field59)

Script50.setSourceCode('''ecmascript:

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

Group20.addChild(Script50)
TimeSensor60 = x3d.TimeSensor()
TimeSensor60.setDEF("TourTime")
TimeSensor60.setCycleInterval(5)
TimeSensor60.setLoop(True)

Group20.addChild(TimeSensor60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("TourTime")
ROUTE61.setFromField("fraction_changed")
ROUTE61.setToNode("Animate")
ROUTE61.setToField("set_fraction")

Group20.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("a")
ROUTE62.setToNode("x_ite")
ROUTE62.setToField("a")

Group20.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("b")
ROUTE63.setToNode("x_ite")
ROUTE63.setToField("b")

Group20.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("c")
ROUTE64.setToNode("x_ite")
ROUTE64.setToField("c")

Group20.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("d")
ROUTE65.setToNode("x_ite")
ROUTE65.setToField("d")

Group20.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("pdelta")
ROUTE66.setToNode("x_ite")
ROUTE66.setToField("pdelta")

Group20.addChild(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("tdelta")
ROUTE67.setToNode("x_ite")
ROUTE67.setToField("tdelta")

Group20.addChild(ROUTE67)

Scene15.addChild(Group20)

X3D0.setScene(Scene15)
X3D0.toFileX3D("../data/particleflowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/particleflowers.new.graalpy.json")
