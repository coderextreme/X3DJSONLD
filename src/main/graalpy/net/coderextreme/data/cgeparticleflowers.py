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
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

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
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture27.setBackTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture27.setBottomTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_from.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture27.setFrontTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture27.setLeftTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture27.setRightTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture27.setTopTexture(ImageTexture33)

Appearance25.setTexture(ComposedCubeMapTexture27)
ComposedShader34 = x3d.ComposedShader()
ComposedShader34.setDEF("shader")
ComposedShader34.setLanguage("GLSL")
field35 = x3d.field()
field35.setName("cube")
field35.setType("SFInt32")
field35.setAccessType("inputOutput")
field35.setValue("0")

ComposedShader34.addField(field35)
field36 = x3d.field()
field36.setName("chromaticDispertion")
field36.setAccessType("initializeOnly")
field36.setType("SFVec3f")
field36.setValue("0.98 1 1.033")

ComposedShader34.addField(field36)
field37 = x3d.field()
field37.setName("bias")
field37.setType("SFFloat")
field37.setAccessType("inputOutput")
field37.setValue("0.5")

ComposedShader34.addField(field37)
field38 = x3d.field()
field38.setName("scale")
field38.setType("SFFloat")
field38.setAccessType("inputOutput")
field38.setValue("0.5")

ComposedShader34.addField(field38)
field39 = x3d.field()
field39.setName("power")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("2")

ComposedShader34.addField(field39)
field40 = x3d.field()
field40.setName("a")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("2")

ComposedShader34.addField(field40)
field41 = x3d.field()
field41.setName("b")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("1")

ComposedShader34.addField(field41)
field42 = x3d.field()
field42.setName("c")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("5")

ComposedShader34.addField(field42)
field43 = x3d.field()
field43.setName("d")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("5")

ComposedShader34.addField(field43)
field44 = x3d.field()
field44.setName("tdelta")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("0")

ComposedShader34.addField(field44)
field45 = x3d.field()
field45.setName("pdelta")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("0")

ComposedShader34.addField(field45)

ComposedShader34.addComments(x3d.CommentsBlock('''<field name='cube' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field>'''))
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"])
ShaderPart46.setType("VERTEX")

ComposedShader34.addParts(ShaderPart46)
ShaderPart47 = x3d.ShaderPart()
ShaderPart47.setType("FRAGMENT")
ShaderPart47.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"])

ComposedShader34.addParts(ShaderPart47)

Appearance25.addShaders(ComposedShader34)

ParticleSystem20.setAppearance(Appearance25)

Transform19.addChild(ParticleSystem20)
Script48 = x3d.Script()
Script48.setDEF("Animate")
field49 = x3d.field()
field49.setName("translation")
field49.setAccessType("inputOutput")
field49.setType("SFVec3f")
field49.setValue("0 0 0")

Script48.addField(field49)
field50 = x3d.field()
field50.setName("velocity")
field50.setAccessType("inputOutput")
field50.setType("SFVec3f")
field50.setValue("0 0 0")

Script48.addField(field50)
field51 = x3d.field()
field51.setName("set_fraction")
field51.setAccessType("inputOnly")
field51.setType("SFFloat")

Script48.addField(field51)
field52 = x3d.field()
field52.setName("a")
field52.setType("SFFloat")
field52.setAccessType("inputOutput")
field52.setValue("0.5")

Script48.addField(field52)
field53 = x3d.field()
field53.setName("b")
field53.setType("SFFloat")
field53.setAccessType("inputOutput")
field53.setValue("0.5")

Script48.addField(field53)
field54 = x3d.field()
field54.setName("c")
field54.setType("SFFloat")
field54.setAccessType("inputOutput")
field54.setValue("3")

Script48.addField(field54)
field55 = x3d.field()
field55.setName("d")
field55.setType("SFFloat")
field55.setAccessType("inputOutput")
field55.setValue("3")

Script48.addField(field55)
field56 = x3d.field()
field56.setName("tdelta")
field56.setType("SFFloat")
field56.setAccessType("inputOutput")
field56.setValue("0.5")

Script48.addField(field56)
field57 = x3d.field()
field57.setName("pdelta")
field57.setType("SFFloat")
field57.setAccessType("inputOutput")
field57.setValue("0.5")

Script48.addField(field57)

Script48.setSourceCode('''ecmascript:

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

Transform19.addChild(Script48)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.setDEF("TourTime")
TimeSensor58.setCycleInterval(5)
TimeSensor58.setLoop(True)

Transform19.addChild(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("TourTime")
ROUTE59.setFromField("fraction_changed")
ROUTE59.setToNode("Animate")
ROUTE59.setToField("set_fraction")

Transform19.addChild(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("Animate")
ROUTE60.setFromField("a")
ROUTE60.setToNode("shader")
ROUTE60.setToField("a")

Transform19.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("b")
ROUTE61.setToNode("shader")
ROUTE61.setToField("b")

Transform19.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("c")
ROUTE62.setToNode("shader")
ROUTE62.setToField("c")

Transform19.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("d")
ROUTE63.setToNode("shader")
ROUTE63.setToField("d")

Transform19.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("pdelta")
ROUTE64.setToNode("shader")
ROUTE64.setToField("pdelta")

Transform19.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("tdelta")
ROUTE65.setToNode("shader")
ROUTE65.setToField("tdelta")

Transform19.addChild(ROUTE65)

Scene14.addChild(Transform19)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/cgeparticleflowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/cgeparticleflowers.new.graalpy.json")
