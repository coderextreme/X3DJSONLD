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
meta11.setContent("flowers.x3d")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("creator")
meta12.setContent("John Carlson")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("description")
meta13.setContent("5 or more prismatic flowers")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("generator")
meta14.setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("identifier")
meta15.setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d")

head1.addMeta(meta15)

X3D0.setHead(head1)
Scene16 = x3d.Scene()
NavigationInfo17 = x3d.NavigationInfo()

Scene16.addChild(NavigationInfo17)

Scene16.addComments(x3d.CommentsBlock("""Images courtesy of Paul Debevec's Light Probe Image Gallery"""))
Background18 = x3d.Background()
Background18.setBackUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])
Background18.setBottomUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])
Background18.setFrontUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])
Background18.setLeftUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])
Background18.setRightUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])
Background18.setTopUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

Scene16.addChild(Background18)
ProtoDeclare19 = x3d.ProtoDeclare()
ProtoDeclare19.setName("flower")
ProtoBody20 = x3d.ProtoBody()
Transform21 = x3d.Transform()
Transform21.setDEF("animate_transform")
Shape22 = x3d.Shape()
Appearance23 = x3d.Appearance()
Material24 = x3d.Material()
Material24.setDiffuseColor(x3d.doubleToFloat([0.7,0.7,0.7]))
Material24.setSpecularColor(x3d.doubleToFloat([0.5,0.5,0.5]))

Appearance23.setMaterial(Material24)
ComposedCubeMapTexture25 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture25.setDEF("texture")
ImageTexture26 = x3d.ImageTexture()
ImageTexture26.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"])

ComposedCubeMapTexture25.setBackTexture(ImageTexture26)
ImageTexture27 = x3d.ImageTexture()
ImageTexture27.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"])

ComposedCubeMapTexture25.setBottomTexture(ImageTexture27)
ImageTexture28 = x3d.ImageTexture()
ImageTexture28.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"])

ComposedCubeMapTexture25.setFrontTexture(ImageTexture28)
ImageTexture29 = x3d.ImageTexture()
ImageTexture29.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"])

ComposedCubeMapTexture25.setLeftTexture(ImageTexture29)
ImageTexture30 = x3d.ImageTexture()
ImageTexture30.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"])

ComposedCubeMapTexture25.setRightTexture(ImageTexture30)
ImageTexture31 = x3d.ImageTexture()
ImageTexture31.setUrl(["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])

ComposedCubeMapTexture25.setTopTexture(ImageTexture31)

Appearance23.setTexture(ComposedCubeMapTexture25)

Appearance23.addComments(x3d.CommentsBlock("""<ComposedShader DEF='x3dom' language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <field name='a' type='SFFloat' accessType='inputOutput' value='10'></field> <field name='b' type='SFFloat' accessType='inputOutput' value='1'></field> <field name='c' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='d' type='SFFloat' accessType='inputOutput' value='20'></field> <field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart> </ComposedShader>"""))
ComposedShader32 = x3d.ComposedShader()
ComposedShader32.setDEF("x_ite")
ComposedShader32.setLanguage("GLSL")
field33 = x3d.field()
field33.setName("cube")
field33.setType("SFNode")
field33.setAccessType("inputOutput")
ComposedCubeMapTexture34 = x3d.ComposedCubeMapTexture()
ComposedCubeMapTexture34.setUSE("texture")

field33.addChild(ComposedCubeMapTexture34)

ComposedShader32.addField(field33)
field35 = x3d.field()
field35.setName("chromaticDispertion")
field35.setAccessType("initializeOnly")
field35.setType("SFVec3f")
field35.setValue("0.98 1 1.033")

ComposedShader32.addField(field35)
field36 = x3d.field()
field36.setName("bias")
field36.setType("SFFloat")
field36.setAccessType("inputOnly")
field36.setValue("0.5")

ComposedShader32.addField(field36)
field37 = x3d.field()
field37.setName("scale")
field37.setType("SFFloat")
field37.setAccessType("inputOnly")
field37.setValue("0.5")

ComposedShader32.addField(field37)
field38 = x3d.field()
field38.setName("power")
field38.setType("SFFloat")
field38.setAccessType("inputOnly")
field38.setValue("2")

ComposedShader32.addField(field38)
field39 = x3d.field()
field39.setName("a")
field39.setType("SFFloat")
field39.setAccessType("inputOnly")
field39.setValue("10")

ComposedShader32.addField(field39)
field40 = x3d.field()
field40.setName("b")
field40.setType("SFFloat")
field40.setAccessType("inputOnly")
field40.setValue("1")

ComposedShader32.addField(field40)
field41 = x3d.field()
field41.setName("c")
field41.setType("SFFloat")
field41.setAccessType("inputOnly")
field41.setValue("20")

ComposedShader32.addField(field41)
field42 = x3d.field()
field42.setName("d")
field42.setType("SFFloat")
field42.setAccessType("inputOnly")
field42.setValue("20")

ComposedShader32.addField(field42)
field43 = x3d.field()
field43.setName("tdelta")
field43.setType("SFFloat")
field43.setAccessType("inputOnly")
field43.setValue("0")

ComposedShader32.addField(field43)
field44 = x3d.field()
field44.setName("pdelta")
field44.setType("SFFloat")
field44.setAccessType("inputOnly")
field44.setValue("0")

ComposedShader32.addField(field44)
ShaderPart45 = x3d.ShaderPart()
ShaderPart45.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"])
ShaderPart45.setType("VERTEX")

ComposedShader32.addParts(ShaderPart45)
ShaderPart46 = x3d.ShaderPart()
ShaderPart46.setUrl(["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"])
ShaderPart46.setType("FRAGMENT")

ComposedShader32.addParts(ShaderPart46)

Appearance23.addShaders(ComposedShader32)

Shape22.setAppearance(Appearance23)
Sphere47 = x3d.Sphere()

Shape22.setGeometry(Sphere47)

Transform21.addChild(Shape22)

ProtoBody20.addChild(Transform21)
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
				tdelta = tdelta + 0.5;
				pdelta = pdelta + 0.5;
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

ProtoBody20.addChild(Script48)
TimeSensor58 = x3d.TimeSensor()
TimeSensor58.setDEF("TourTime")
TimeSensor58.setCycleInterval(5)
TimeSensor58.setLoop(True)

ProtoBody20.addChild(TimeSensor58)
ROUTE59 = x3d.ROUTE()
ROUTE59.setFromNode("TourTime")
ROUTE59.setFromField("fraction_changed")
ROUTE59.setToNode("Animate")
ROUTE59.setToField("set_fraction")

ProtoBody20.addChild(ROUTE59)
ROUTE60 = x3d.ROUTE()
ROUTE60.setFromNode("Animate")
ROUTE60.setFromField("translation_changed")
ROUTE60.setToNode("animate_transform")
ROUTE60.setToField("set_translation")

ProtoBody20.addChild(ROUTE60)
ROUTE61 = x3d.ROUTE()
ROUTE61.setFromNode("Animate")
ROUTE61.setFromField("a")
ROUTE61.setToNode("x_ite")
ROUTE61.setToField("a")

ProtoBody20.addChild(ROUTE61)
ROUTE62 = x3d.ROUTE()
ROUTE62.setFromNode("Animate")
ROUTE62.setFromField("b")
ROUTE62.setToNode("x_ite")
ROUTE62.setToField("b")

ProtoBody20.addChild(ROUTE62)
ROUTE63 = x3d.ROUTE()
ROUTE63.setFromNode("Animate")
ROUTE63.setFromField("c")
ROUTE63.setToNode("x_ite")
ROUTE63.setToField("c")

ProtoBody20.addChild(ROUTE63)
ROUTE64 = x3d.ROUTE()
ROUTE64.setFromNode("Animate")
ROUTE64.setFromField("d")
ROUTE64.setToNode("x_ite")
ROUTE64.setToField("d")

ProtoBody20.addChild(ROUTE64)
ROUTE65 = x3d.ROUTE()
ROUTE65.setFromNode("Animate")
ROUTE65.setFromField("pdelta")
ROUTE65.setToNode("x_ite")
ROUTE65.setToField("pdelta")

ProtoBody20.addChild(ROUTE65)
ROUTE66 = x3d.ROUTE()
ROUTE66.setFromNode("Animate")
ROUTE66.setFromField("tdelta")
ROUTE66.setToNode("x_ite")
ROUTE66.setToField("tdelta")

ProtoBody20.addChild(ROUTE66)

ProtoBody20.addComments(x3d.CommentsBlock("""<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/> <ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/> <ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/> <ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/> <ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/> <ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>"""))

ProtoDeclare19.setProtoBody(ProtoBody20)

Scene16.addChild(ProtoDeclare19)
ProtoInstance67 = x3d.ProtoInstance()
ProtoInstance67.setName("flower")

Scene16.addChild(ProtoInstance67)
ProtoInstance68 = x3d.ProtoInstance()
ProtoInstance68.setName("flower")

Scene16.addChild(ProtoInstance68)
ProtoInstance69 = x3d.ProtoInstance()
ProtoInstance69.setName("flower")

Scene16.addChild(ProtoInstance69)

X3D0.setScene(Scene16)
X3D0.toFileX3D("../data/flowers.new.graalpy.x3d")
X3D0.toFileJSON("../data/flowers.new.graalpy.x3dj")
