import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Full")
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
NavigationInfo17 = x3d.NavigationInfo()

Scene16.addChild(NavigationInfo17)
Viewpoint18 = x3d.Viewpoint()
Viewpoint18.setDescription("Tour Views")
Viewpoint18.setPosition(x3d.doubleToFloat([0,0,50]))

Scene16.addChild(Viewpoint18)
Background19 = x3d.Background()
Background19.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background19.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background19.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background19.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background19.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background19.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChild(Background19)
ProtoDeclare20 = x3d.ProtoDeclare()
ProtoDeclare20.setName("FlowerProto")
ProtoInterface21 = x3d.ProtoInterface()
field22 = x3d.field()
field22.setName("vertex")
field22.setAccessType("inputOnly")
field22.setType("MFString")
field22.setValue("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"")

ProtoInterface21.addField(field22)
field23 = x3d.field()
field23.setName("fragment")
field23.setAccessType("inputOnly")
field23.setType("MFString")
field23.setValue("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"")

ProtoInterface21.addField(field23)

ProtoDeclare20.setProtoInterface(ProtoInterface21)
ProtoBody24 = x3d.ProtoBody()
Transform25 = x3d.Transform()
Transform25.setDEF("transform")
Shape26 = x3d.Shape()
Appearance27 = x3d.Appearance()
Material28 = x3d.Material()
Material28.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material28.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance27.setMaterial(Material28)
ComposedCubeMapTexture29 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture29.setDEF("texture")
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture29.setBackTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture29.setBottomTexture(ImageTexture31)
ImageTexture32 = x3d.ImageTexture()
ImageTexture32.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture29.setFrontTexture(ImageTexture32)
ImageTexture33 = x3d.ImageTexture()
ImageTexture33.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture29.setLeftTexture(ImageTexture33)
ImageTexture34 = x3d.ImageTexture()
ImageTexture34.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture29.setRightTexture(ImageTexture34)
ImageTexture35 = x3d.ImageTexture()
ImageTexture35.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture29.setTopTexture(ImageTexture35)

Appearance27.setTexture(ComposedCubeMapTexture29)
ComposedShader36 = x3d.ComposedShader()
ComposedShader36.setDEF("shader")
ComposedShader36.setLanguage("GLSL")
field37 = x3d.field()
field37.setName("fw_textureCoordGenType")
field37.setAccessType("inputOutput")
field37.setType("SFInt32")
field37.setValue("0")

ComposedShader36.addField(field37)
field38 = x3d.field()
field38.setName("chromaticDispertion")
field38.setAccessType("initializeOnly")
field38.setType("SFVec3f")
field38.setValue("0.98 1 1.033")

ComposedShader36.addField(field38)
field39 = x3d.field()
field39.setName("bias")
field39.setType("SFFloat")
field39.setAccessType("inputOutput")
field39.setValue("0.5")

ComposedShader36.addField(field39)
field40 = x3d.field()
field40.setName("scale")
field40.setType("SFFloat")
field40.setAccessType("inputOutput")
field40.setValue("0.5")

ComposedShader36.addField(field40)
field41 = x3d.field()
field41.setName("power")
field41.setType("SFFloat")
field41.setAccessType("inputOutput")
field41.setValue("2")

ComposedShader36.addField(field41)
field42 = x3d.field()
field42.setName("a")
field42.setType("SFFloat")
field42.setAccessType("inputOutput")
field42.setValue("5")

ComposedShader36.addField(field42)
field43 = x3d.field()
field43.setName("b")
field43.setType("SFFloat")
field43.setAccessType("inputOutput")
field43.setValue("5")

ComposedShader36.addField(field43)
field44 = x3d.field()
field44.setName("c")
field44.setType("SFFloat")
field44.setAccessType("inputOutput")
field44.setValue("20")

ComposedShader36.addField(field44)
field45 = x3d.field()
field45.setName("d")
field45.setType("SFFloat")
field45.setAccessType("inputOutput")
field45.setValue("20")

ComposedShader36.addField(field45)
field46 = x3d.field()
field46.setName("tdelta")
field46.setType("SFFloat")
field46.setAccessType("inputOutput")
field46.setValue("0")

ComposedShader36.addField(field46)
field47 = x3d.field()
field47.setName("pdelta")
field47.setType("SFFloat")
field47.setAccessType("inputOutput")
field47.setValue("0")

ComposedShader36.addField(field47)

ComposedShader36.addComments(x3d.CommentsBlock("""<field name='cube' type='SFNode' accessType=\"inputOutput\">"""))

ComposedShader36.addComments(x3d.CommentsBlock("""<ComposedCubeMapTexture USE=\"texture\"/>"""))

ComposedShader36.addComments(x3d.CommentsBlock("""</field>"""))
ShaderPart48 = x3d.ShaderPart()
ShaderPart48.setType("VERTEX")
IS49 = x3d.IS()
connect50 = x3d.connect()
connect50.setNodeField("url")
connect50.setProtoField("vertex")

IS49.addConnect(connect50)

ShaderPart48.setIS(IS49)

ComposedShader36.addParts(ShaderPart48)
ShaderPart51 = x3d.ShaderPart()
ShaderPart51.setType("FRAGMENT")
IS52 = x3d.IS()
connect53 = x3d.connect()
connect53.setNodeField("url")
connect53.setProtoField("fragment")

IS52.addConnect(connect53)

ShaderPart51.setIS(IS52)

ComposedShader36.addParts(ShaderPart51)

Appearance27.addShaders(ComposedShader36)

Shape26.setAppearance(Appearance27)
Sphere54 = x3d.Sphere()
Sphere54.setRadius(5)

Shape26.setGeometry(Sphere54)

Transform25.addChild(Shape26)
Script55 = x3d.Script()
Script55.setDEF("Animate")
Script55.setDirectOutput(True)
field56 = x3d.field()
field56.setName("translation")
field56.setAccessType("inputOutput")
field56.setType("SFVec3f")
field56.setValue("0 0 0")

Script55.addField(field56)
field57 = x3d.field()
field57.setName("velocity")
field57.setAccessType("inputOutput")
field57.setType("SFVec3f")
field57.setValue("0 0 0")

Script55.addField(field57)
field58 = x3d.field()
field58.setName("set_fraction")
field58.setAccessType("inputOutput")
field58.setType("SFFloat")

Script55.addField(field58)
field59 = x3d.field()
field59.setName("a")
field59.setType("SFFloat")
field59.setAccessType("inputOutput")
field59.setValue("0.5")

Script55.addField(field59)
field60 = x3d.field()
field60.setName("b")
field60.setType("SFFloat")
field60.setAccessType("inputOutput")
field60.setValue("0.5")

Script55.addField(field60)
field61 = x3d.field()
field61.setName("c")
field61.setType("SFFloat")
field61.setAccessType("inputOutput")
field61.setValue("3")

Script55.addField(field61)
field62 = x3d.field()
field62.setName("d")
field62.setType("SFFloat")
field62.setAccessType("inputOutput")
field62.setValue("3")

Script55.addField(field62)
field63 = x3d.field()
field63.setName("tdelta")
field63.setType("SFFloat")
field63.setAccessType("inputOutput")
field63.setValue("0.5")

Script55.addField(field63)
field64 = x3d.field()
field64.setName("pdelta")
field64.setType("SFFloat")
field64.setAccessType("inputOutput")
field64.setValue("0.5")

Script55.addField(field64)

Script55.setSourceCode('''ecmascript:
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

Transform25.addChild(Script55)
TimeSensor65 = x3d.TimeSensor()
TimeSensor65.setDEF("TourTime")
TimeSensor65.setCycleInterval(5)
TimeSensor65.setLoop(True)

Transform25.addChild(TimeSensor65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("TourTime")
ROUTE66.setFromField("fraction_changed")
ROUTE66.setToNode("Animate")
ROUTE66.setToField("set_fraction")

Transform25.addChild(ROUTE66)
ROUTE67 = x3d.ROUTE()
ROUTE67.setFromNode("Animate")
ROUTE67.setFromField("translation_changed")
ROUTE67.setToNode("transform")
ROUTE67.setToField("set_translation")

Transform25.addChild(ROUTE67)
ROUTE68 = x3d.ROUTE()
ROUTE68.setFromNode("Animate")
ROUTE68.setFromField("a")
ROUTE68.setToNode("shader")
ROUTE68.setToField("a")

Transform25.addChild(ROUTE68)
ROUTE69 = x3d.ROUTE()
ROUTE69.setFromNode("Animate")
ROUTE69.setFromField("b")
ROUTE69.setToNode("shader")
ROUTE69.setToField("b")

Transform25.addChild(ROUTE69)
ROUTE70 = x3d.ROUTE()
ROUTE70.setFromNode("Animate")
ROUTE70.setFromField("c")
ROUTE70.setToNode("shader")
ROUTE70.setToField("c")

Transform25.addChild(ROUTE70)
ROUTE71 = x3d.ROUTE()
ROUTE71.setFromNode("Animate")
ROUTE71.setFromField("d")
ROUTE71.setToNode("shader")
ROUTE71.setToField("d")

Transform25.addChild(ROUTE71)
ROUTE72 = x3d.ROUTE()
ROUTE72.setFromNode("Animate")
ROUTE72.setFromField("tdelta")
ROUTE72.setToNode("shader")
ROUTE72.setToField("tdelta")

Transform25.addChild(ROUTE72)
ROUTE73 = x3d.ROUTE()
ROUTE73.setFromNode("Animate")
ROUTE73.setFromField("pdelta")
ROUTE73.setToNode("shader")
ROUTE73.setToField("pdelta")

Transform25.addChild(ROUTE73)

ProtoBody24.addChild(Transform25)

ProtoDeclare20.setProtoBody(ProtoBody24)

Scene16.addChild(ProtoDeclare20)
ProtoInstance74 = x3d.ProtoInstance()
ProtoInstance74.setName("FlowerProto")
fieldValue75 = x3d.fieldValue()
fieldValue75.setName("vertex")
fieldValue75.setValue("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"")

ProtoInstance74.addFieldValue(fieldValue75)
fieldValue76 = x3d.fieldValue()
fieldValue76.setName("fragment")
fieldValue76.setValue("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"")

ProtoInstance74.addFieldValue(fieldValue76)

Scene16.addChild(ProtoInstance74)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowerprotofreewrl.new.graalpy.x3d")
X3D0.toFileJSON("../data/flowerprotofreewrl.new.graalpy.x3dj")
