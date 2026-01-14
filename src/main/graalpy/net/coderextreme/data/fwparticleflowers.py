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

Scene14.addChild(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()
NavigationInfo16.setType(["ANY","EXAMINE","FLY","LOOKAT"])

Scene14.addChild(NavigationInfo16)
Viewpoint17 = x3d.Viewpoint()
Viewpoint17.setDescription("Tour Views")
Viewpoint17.setPosition(x3d.doubleToFloat([0,0,12]))

Scene14.addChild(Viewpoint17)
Background18 = x3d.Background()
Background18.setBackUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene14.addChild(Background18)
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
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setDEF("fw")
ComposedShader34.setLanguage("GLSL")
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setAccessType("inputOutput")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader34.addField(field35)
field36 = x3d.field()
field36.setName("cube")
field36.setType("SFNode")
field36.setAccessType("inputOutput")
ComposedCubeMapTexture37 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture37.setUSE("texture")

field36.addChild(ComposedCubeMapTexture37)

ComposedShader34.addField(field36)
field38 = x3d.field()
field38.setName("bias")
field38.setAccessType("inputOutput")
field38.setType("SFFloat")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = x3d.field()
field39.setName("scale")
field39.setAccessType("inputOutput")
field39.setType("SFFloat")
field39.setValue("0.5")

ComposedShader34.addField(field39)
field40 = x3d.field()
field40.setName("power")
field40.setAccessType("inputOutput")
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
ShaderPart47.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"])
ShaderPart47.setType("VERTEX")

ComposedShader34.addParts(ShaderPart47)
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"])
ShaderPart48.setType("FRAGMENT")

ComposedShader34.addParts(ShaderPart48)

Appearance25.addShaders(ComposedShader34)

ParticleSystem20.setAppearance(Appearance25)

Transform19.addChild(ParticleSystem20)
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

Transform19.addChild(Script49)
TimeSensor59 = x3d.TimeSensor()
TimeSensor59.setDEF("TourTime")
TimeSensor59.setCycleInterval(5)
TimeSensor59.setLoop(True)

Transform19.addChild(TimeSensor59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("TourTime")
ROUTE60.setFromField("fraction_changed")
ROUTE60.setToNode("Animate")
ROUTE60.setToField("set_fraction")

Transform19.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("a")
ROUTE61.setToNode("fw")
ROUTE61.setToField("a")

Transform19.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("b")
ROUTE62.setToNode("fw")
ROUTE62.setToField("b")

Transform19.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("c")
ROUTE63.setToNode("fw")
ROUTE63.setToField("c")

Transform19.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("d")
ROUTE64.setToNode("fw")
ROUTE64.setToField("d")

Transform19.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("pdelta")
ROUTE65.setToNode("fw")
ROUTE65.setToField("pdelta")

Transform19.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("tdelta")
ROUTE66.setToNode("fw")
ROUTE66.setToField("tdelta")

Transform19.addChild(ROUTE66)

Scene14.addChild(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/fwparticleflowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/fwparticleflowers.new.graalpy.x3dj")
