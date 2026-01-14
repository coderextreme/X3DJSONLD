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
component2.setName("Scripting")
component2.setLevel(1)

head1.addComponent(component2)
component3 = x3d.component()
component3.setName("EnvironmentalEffects")
component3.setLevel(3)

head1.addComponent(component3)
component4 = x3d.component()
component4.setName("Shaders")
component4.setLevel(1)

head1.addComponent(component4)
component5 = x3d.component()
component5.setName("CubeMapTexturing")
component5.setLevel(1)

head1.addComponent(component5)
component6 = x3d.component()
component6.setName("Texturing")
component6.setLevel(1)

head1.addComponent(component6)
component7 = x3d.component()
component7.setName("Rendering")
component7.setLevel(1)

head1.addComponent(component7)
component8 = x3d.component()
component8.setName("Shape")
component8.setLevel(4)

head1.addComponent(component8)
component9 = x3d.component()
component9.setName("Grouping")
component9.setLevel(3)

head1.addComponent(component9)
component10 = x3d.component()
component10.setName("Core")
component10.setLevel(1)

head1.addComponent(component10)
meta11 = x3d.meta()
meta11.setName("title")
meta11.setContent("flowerproto.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("A flower proto with configurable shaders")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
ProtoDeclare17 = x3d.ProtoDeclare()
ProtoDeclare17.setName("FlowerProto")
ProtoInterface18 = x3d.ProtoInterface()
field19 = x3d.field()
field19.setName("vertex")
field19.setAccessType("inputOnly")
field19.setType("MFString")
field19.setValue("\"../shaders/gl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\"")

ProtoInterface18.addField(field19)
field20 = x3d.field()
field20.setName("fragment")
field20.setAccessType("inputOnly")
field20.setType("MFString")
field20.setValue("\"../shaders/pc_flowers.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"")

ProtoInterface18.addField(field20)

ProtoDeclare17.setProtoInterface(ProtoInterface18)
ProtoBody21 = x3d.ProtoBody()
Transform22 = x3d.Transform()
Transform22.setDEF("transform")
Shape23 = x3d.Shape()
Appearance24 = x3d.Appearance()
Material25 = x3d.Material()
Material25.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material25.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance24.setMaterial(Material25)
ComposedCubeMapTexture26 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture26.setDEF("texture")
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture26.setBackTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture26.setBottomTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture26.setFrontTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture26.setLeftTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture26.setRightTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture26.setTopTexture(ImageTexture32)

Appearance24.setTexture(ComposedCubeMapTexture26)
ComposedShader33 = x3d.ComposedShader()
ComposedShader33.setDEF("shader")
ComposedShader33.setLanguage("GLSL")

ComposedShader33.addComments(x3d.CommentsBlock("""<field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field>"""))
field34 = x3d.field()
field34.setName("cube")
field34.setType("SFNode")
field34.setAccessType("inputOnly")
ComposedCubeMapTexture35 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture35.setUSE("texture")

field34.addChild(ComposedCubeMapTexture35)

ComposedShader33.addField(field34)
field36 = x3d.field()
field36.setName("chromaticDispertion")
field36.setAccessType("initializeOnly")
field36.setType("SFVec3f")
field36.setValue("0.98 1 1.033")

ComposedShader33.addField(field36)
field37 = x3d.field()
field37.setName("bias")
field37.setType("SFFloat")
field37.setAccessType("inputOnly")
field37.setValue("0.5")

ComposedShader33.addField(field37)
field38 = x3d.field()
field38.setName("scale")
field38.setType("SFFloat")
field38.setAccessType("inputOnly")
field38.setValue("0.5")

ComposedShader33.addField(field38)
field39 = x3d.field()
field39.setName("power")
field39.setType("SFFloat")
field39.setAccessType("inputOnly")
field39.setValue("2")

ComposedShader33.addField(field39)
field40 = x3d.field()
field40.setName("a")
field40.setType("SFFloat")
field40.setAccessType("inputOnly")
field40.setValue("10")

ComposedShader33.addField(field40)
field41 = x3d.field()
field41.setName("b")
field41.setType("SFFloat")
field41.setAccessType("inputOnly")
field41.setValue("1")

ComposedShader33.addField(field41)
field42 = x3d.field()
field42.setName("c")
field42.setType("SFFloat")
field42.setAccessType("inputOnly")
field42.setValue("20")

ComposedShader33.addField(field42)
field43 = x3d.field()
field43.setName("d")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")
field43.setValue("20")

ComposedShader33.addField(field43)
field44 = x3d.field()
field44.setName("tdelta")
field44.setType("SFFloat")
field44.setAccessType("inputOnly")
field44.setValue("0")

ComposedShader33.addField(field44)
field45 = x3d.field()
field45.setName("pdelta")
field45.setType("SFFloat")
field45.setAccessType("inputOnly")
field45.setValue("0")

ComposedShader33.addField(field45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setType("VERTEX")
IS47 = x3d.IS()
connect48 = x3d.connect()
connect48.setNodeField("url")
connect48.setProtoField("vertex")

IS47.addConnect(connect48)

ShaderPart46.setIS(IS47)

ComposedShader33.addParts(ShaderPart46)
ShaderPart49 = x3d.ShaderPart()
ShaderPart49.setType("FRAGMENT")
IS50 = x3d.IS()
connect51 = x3d.connect()
connect51.setNodeField("url")
connect51.setProtoField("fragment")

IS50.addConnect(connect51)

ShaderPart49.setIS(IS50)

ComposedShader33.addParts(ShaderPart49)

Appearance24.addShaders(ComposedShader33)

Shape23.setAppearance(Appearance24)
Sphere52 = x3d.Sphere()

Shape23.setGeometry(Sphere52)

Transform22.addChild(Shape23)
Script53 = x3d.Script()
Script53.setDEF("Animate")
Script53.setDirectOutput(True)
field54 = x3d.field()
field54.setName("translation")
field54.setAccessType("inputOutput")
field54.setType("SFVec3f")
field54.setValue("0 0 0")

Script53.addField(field54)
field55 = x3d.field()
field55.setName("velocity")
field55.setAccessType("outputOnly")
field55.setType("SFVec3f")
field55.setValue("0 0 0")

Script53.addField(field55)
field56 = x3d.field()
field56.setName("set_fraction")
field56.setAccessType("inputOnly")
field56.setType("SFFloat")

Script53.addField(field56)
field57 = x3d.field()
field57.setName("a")
field57.setType("SFFloat")
field57.setAccessType("outputOnly")
field57.setValue("0.5")

Script53.addField(field57)
field58 = x3d.field()
field58.setName("b")
field58.setType("SFFloat")
field58.setAccessType("outputOnly")
field58.setValue("0.5")

Script53.addField(field58)
field59 = x3d.field()
field59.setName("c")
field59.setType("SFFloat")
field59.setAccessType("outputOnly")
field59.setValue("3")

Script53.addField(field59)
field60 = x3d.field()
field60.setName("d")
field60.setType("SFFloat")
field60.setAccessType("outputOnly")
field60.setValue("3")

Script53.addField(field60)
field61 = x3d.field()
field61.setName("tdelta")
field61.setType("SFFloat")
field61.setAccessType("outputOnly")
field61.setValue("0.5")

Script53.addField(field61)
field62 = x3d.field()
field62.setName("pdelta")
field62.setType("SFFloat")
field62.setAccessType("outputOnly")
field62.setValue("0.5")

Script53.addField(field62)

Script53.setSourceCode('''ecmascript:
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
				tdelta += 0.5;
				pdelta += 0.5;
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

Transform22.addChild(Script53)
TimeSensor63 = x3d.TimeSensor()
TimeSensor63.setDEF("TourTime")
TimeSensor63.setCycleInterval(5)
TimeSensor63.setLoop(True)

Transform22.addChild(TimeSensor63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("TourTime")
ROUTE64.setFromField("fraction_changed")
ROUTE64.setToNode("Animate")
ROUTE64.setToField("set_fraction")

Transform22.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("translation_changed")
ROUTE65.setToNode("transform")
ROUTE65.setToField("set_translation")

Transform22.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("a")
ROUTE66.setToNode("shader")
ROUTE66.setToField("a")

Transform22.addChild(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("b")
ROUTE67.setToNode("shader")
ROUTE67.setToField("b")

Transform22.addChild(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("c")
ROUTE68.setToNode("shader")
ROUTE68.setToField("c")

Transform22.addChild(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("d")
ROUTE69.setToNode("shader")
ROUTE69.setToField("d")

Transform22.addChild(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("tdelta")
ROUTE70.setToNode("shader")
ROUTE70.setToField("tdelta")

Transform22.addChild(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("Animate")
ROUTE71.setFromField("pdelta")
ROUTE71.setToNode("shader")
ROUTE71.setToField("pdelta")

Transform22.addChild(ROUTE71)

ProtoBody21.addChild(Transform22)

ProtoDeclare17.setProtoBody(ProtoBody21)

Scene16.addChild(ProtoDeclare17)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowerproto.new.graalpy.x3d")
X3D0.toFileJSON("../data/flowerproto.new.graalpy.x3dj")
